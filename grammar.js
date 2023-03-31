const PREC = {
  pipesup: 0,
  or: 1,
  fullor: 1,
  and: 2,
  fulland: 2,
  pipe: 3,
  xor: 4,
  ampersand: 5,
  doubleequal: 6,
  diff: 6,
  sup: 7,
  supeq: 7,
  inf: 7,
  infeq: 7,
  shiftleft: 8,
  shiftright: 8,
  plus: 9,
  minus: 9,
  mult: 10,
  div: 10,
  mod: 10,
  uminus: 11,
  unot: 11,
  dot: 12
}

module.exports = grammar({
  name: 'kosu',

  externals: $ => [
    $._stringl
  ],
  inline: $ => [
    $.binop
  ],
  rules: {
    source_file: $ => repeat(
      field(
        'node_decl',
        $.module_nodes
      )
    ),
    word: $ => $.identifier,
    module_nodes: $ => choice(
      field('enum_decl', $.enum_decl),
      field('struct_decl', $.struct_decl),
      field('external_fn_decl', $.external_func_decl),
      field('syscall_decl', $.syscall_decl),
      field('const_decl', $.const_decl),
      field('function_decl', $.function_decl),
      $.operator_decl,
    ),
    enum_decl: $ => seq(
      'enum',
      field('name', $.identifier),
      optional(
        field(
          'parametric_type',
          parenthesed_rule(non_empty_separated_rule(',', $.identifier))
        )
      ),
      delimited('{', separated_rule(',', field('enum_cases', $.enum_assoc)), '}')

    ),
    struct_decl: $ => seq(
      'struct',
      field('name', $.identifier),
      optional(
        parenthesed_rule(non_empty_separated_rule(',', $.identifier))
      ),
      delimited(
        '{',
        non_empty_separated_rule(
          ',', field(
            'field',
            seq(
              $.identifier,
              ':',
              $.ktype
            )
          )
        ),
        '}'
      )
    ),
    external_func_decl: $ => seq(
      'external',
      field('external_fn_name', $.identifier),
      parenthesed_rule(
        seq(
          separated_rule(
            ',',
            field(
              'args',
              $.external_fn_arg
            )
          ),
          optional(
            preceded('=',
              field(
                'variadic',
                '...'
              )
            )
          )
        )
      ),
      optional(
        field(
          'return_type',
          $.ctype
        )
      ),
      optional(
        preceded(
          '=',
          field(
            'c_name',
            seq(
              $.stringl
            )
          )
        )
      ),
      optional(';')
    ),
    syscall_decl: $ => seq(
      "syscall",
      field('name', $.identifier),
      parenthesed_rule(
        separated_rule(
          ',',
          field(
            'args',
            $.external_fn_arg
          )
        )
      ),
      optional(
        field(
          'return_type',
          $.ctype
        )
      ),
      '=',
      field('opcode', $.integer_literal),
      optional(';')
    ),
    const_decl: $ => seq(
      'const',
      field('name', $.constant_identifier),
      '=',
      choice(
        $.integer_literal,
        $.stringl,
        $.float_litteral
      ),
      optional(';')
    ),
    operator_decl: $ => "operator",
    function_decl: $ => seq(
      "fn",
      field('name', $.identifier),
      optional(
        field(
          'parametric_type',
          delimited(
            '<',
            non_empty_separated_rule(',', $.identifier),
            '>'
          )
        )
      ),
      parenthesed_rule(
        separated_rule(
          ',',
          field(
            'arg',
            seq(
              $.identifier,
              ':',
              $.ktype
            )
          )
        )
      ),
      optional(
        field('return_type', $.ktype)
      ),
      $.fun_kbody
    ),
    enum_assoc: $ => seq(
      field(
        'enum_case_decl',
        $.identifier
      ),
      optional(
        parenthesed_rule(
          field(
            'assoc_type',
            non_empty_separated_rule(',', $.ktype)
          )
        )
      )
    ),
    fun_kbody: $ => choice(
      seq('=', $.expression, optional(';')),
      $.kbody
    ),
    kbody: $ => delimited(
      '{',
      seq(
        repeat($.statement),
        '$', $.expression
      ),
      '}'
    ),
    statement: $ => choice(
      $.declaration,
      $.reaffectation,
      $.deref_affect,
      seq(
        'discard', $.expression, ';'
      )
    ),
    declaration: $ => seq(
      choice('var', 'const'),
      field('variable', $.identifier),
      optional(
        preceded(
          ':',
          field('explicit_type', $.ktype)
        )
      ),
      '=',
      $.expression,
      ';'
    ),
    reaffectation: $ => seq(
      $.affected_value,
      '=',
      $.expression,
      ';'
    ),
    deref_affect: $ => preceded('*', $.affected_value),
    affected_value: $ => non_empty_separated_rule('.', $.identifier),
    expression: $ => choice(
      field('true', 'true'),
      'false',
      'empty',
      'nullptr',
      field('integer_litteral', $.integer_literal),
      $.float_litteral,
      $.stringl,
      $.sizeof,
      $.while,
      $.if,
      $.cases,
      $.unop,
      $.binop,
      $.function_call,
      $.estruct,
      $.eenum,
      $.switch,
      // parenthesed_rule(repeat($.expression)),
      seq(module_path($), $.identifier),
      seq(module_path($), $.constant_identifier),
      field('bultin_function', $.builin_function_expr),
      seq(
        prec.left(PREC.dot, seq($.expression, '.', $.identifier))
      ),
      seq(non_empty_rule('*'), $.identifier),
      preceded('&', $.identifier),
    ),
    sizeof: $ => seq(
      'sizeof',
      parenthesed_rule(
        choice(
          preceded(':', $.expression),
          $.ktype
        ),
      )
    ),
    if: $ => seq(
      'if',
      parenthesed_rule($.expression),
      $.kbody,
      preceded('else', $.kbody)
    ),
    while: $ => seq(
      'while',
      parenthesed_rule($.expression),
      $.kbody
    ),
    switch: $ => seq(
      'switch',
      parenthesed_rule($.expression),
      bracked_rule(
        seq(
          non_empty_rule(
            seq(
              non_empty_separated_rule(
                '|',
                $.s_cases
              ),
              '=>',
              $.kbody
            )
          ),
          optional(
            preceded(
              '_',
              preceded(
                '=>',
                $.kbody
              )
            )
          )
        )
      )
    ),
    cases: $ => seq(
      'cases',
      bracked_rule(
        seq(
          non_empty_rule(
            preceded(
              'of', 
              seq(
                $.expression,
                '=>',
                $.kbody
              )
            )
          ),
          preceded('else', $.kbody)
        )
      )
    ),
    s_cases: $ => seq(
      '.',
      $.identifier,
      optional(
        parenthesed_rule(
          non_empty_separated_rule(
            ',',
            $.identifier
          )
        )
      )
    ),
    unop: $ => choice(
      prec.right(PREC.unot, preceded('-', $.expression)),
      prec.right(PREC.unot, preceded('!', $.expression))
    ),
    binop: $ => choice(
      prec.left(PREC.plus, seq($.expression, token('+'), $.expression) ),
      prec.left(PREC.minus, seq($.expression, token('-'), $.expression) ),
      prec.left(PREC.div, seq($.expression, token('/'), $.expression) ),
      prec.left(PREC.mod, seq($.expression, token('%'), $.expression) ),
      prec.left(PREC.pipe, seq($.expression, token('|'), $.expression) ),
      prec.left(PREC.xor, seq($.expression, token('^'), $.expression) ),
      prec.left(PREC.ampersand, seq($.expression, token('&'), $.expression) ),
      prec.left(PREC.shiftleft, seq($.expression, token('<<'), $.expression) ),
      prec.left(PREC.shiftright, seq($.expression, token('>>'), $.expression) ),
      prec.left(PREC.fullor, seq($.expression, token('or'), $.expression) ),
      prec.left(PREC.fulland, seq($.expression, token('and'), $.expression) ),
      prec.left(PREC.and, seq($.expression, token('&&'), $.expression) ),
      prec.left(PREC.or, seq($.expression, token('||'), $.expression) ),
      prec.left(PREC.sup, seq($.expression, token('>'), $.expression) ),
      prec.left(PREC.supeq, seq($.expression, token('>='), $.expression) ),
      prec.left(PREC.inf, seq($.expression, token('<'), $.expression) ),
      prec.left(PREC.infeq, seq($.expression, token('<='), $.expression) ),
      prec.left(PREC.doubleequal, seq($.expression, token('=='), $.expression) ),
      prec.left(PREC.diff, seq($.expression, token('!='), $.expression) ),
      prec.left(PREC.pipesup, seq($.expression, token('|>', $.function_call)))
    ),
    builin_function_expr: $ => seq(
      preceded('@', $.identifier),
      parenthesed_rule(
        separated_rule(
          ',',
          $.expression
        )
      )
    ),
    function_call: $ => seq(
      module_path($),
      field('fn_call_name', $.identifier),
      optional(
        preceded(
          '::',
          delimited(
            '<',
            field(
              'explicit_generic',
              non_empty_separated_rule(', ', $.ktype)
            ),
            '>'
          )
        )
      ),
      parenthesed_rule(
        separated_rule(
          ',',
          $.expression
        )
      )
    ),
    estruct: $ => seq(
      module_path($),
      field('struct_name', $.identifier),
      bracked_rule(
        separated_rule(
          ',',
          $.identifier,
          choice('=', ':'),
          $.expression
        )
      )
    ),
    eenum: $ => seq(
      module_path($),
      choice('.', terminated($.identifier, '::')),
      field('variant', $.identifier),
      optional(
        parenthesed_rule(
          non_empty_separated_rule(
            ',',
            $.expression
          )
        )
      )
    ),
    ktype: $ => choice(
      seq(
        module_path($),
        $.identifier
      ),
      field('pointer', seq("*", $.ktype)),
      seq(
        module_path($),
        $.identifier,
        parenthesed_rule(non_empty_separated_rule(',', $.ktype))
      )
    ),
    ctype: $ => choice(
      seq(
        module_path($),
        $.identifier
      ),
      field('pointer', seq("*", $.ktype)),
    ),
    external_fn_arg: $ => seq(
      choice(
        '_',
        $.identifier
      ),
      ':',
      $.ctype
    ),
    stringl: $ => delimited('\"', $._stringl, '\"'),
    generic_list: $ => non_empty_separated_rule(",", $.identifier),
    module_identifier: $ => /[A-Z][A-Z | a-z | 0-9 | _]*/,
    constant_identifier: $ => /[A-Z][A-Z | "_" | 0-9]*/,
    identifier: $ => /[a-z|_][a-z|_|A-Z|0-9]*/,
    float_litteral: $ => token(
      seq(
        /[0-9][0-9 | _]*/,
        choice(
          seq('.', /[0-9| _]*/),
          seq(/[e|E]/, /[+|-]/, /[0-9 | _]*/)
        )
      )
    ),
    digit: $ => /[0-9]/,
    integer_literal: $ => token(
      choice(
        /[0-9][0-9_]*/,
        /0[xX][0-9a-fA-F_]+/,
        /0[bB][01_]+/,
        /0o[0-7_]+/
      )
    )
  }
});

function module_path($) {
  return field(
    'module_path',
    optional(
      terminated(
        non_empty_separated_rule('::', $.module_identifier),
        '.'
      )
    )
  )
}

function delimited(lhs, rule, rhs) {
  return seq(lhs, rule, rhs)
}

function parenthesed_rule(rule) {
  return delimited('(', rule, ')')
}

function bracked_rule(rule) {
  return delimited('{', rule, '}')
}

function separated_rule(sep, rule) {
  return optional(non_empty_separated_rule(sep, rule))
}

function terminated(rule, by) {
  return seq(rule, by)
}

function preceded(by, rule) {
  return seq(by, rule)
}

function non_empty_rule(rule) {
  return repeat1(rule)
}

// function splited(lrule, by, rule) {
//   return seq(lrule, by, rule)
// }

function non_empty_separated_rule(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}