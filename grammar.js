module.exports = grammar({
  name: 'Kosu',

  externals: $ => [
    $._stringl
  ],
  inline: $ => [
  ],
  rules: {
    source_file: $ => repeat(
      field(
        'node_decl',
        $.module_nodes
      )
    ),
    word: $ => 'enum',
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
          delimited('(', non_empty_separated_rule(',', $.identifier), ')')
        )
      ),
      delimited('{', separated_rule(',', field('enum_cases', $.enum_assoc)), '}')

    ),
    struct_decl: $ => seq(
      'struct',
      field('name', $.identifier),
      optional(
        delimited('(', non_empty_separated_rule(',', $.identifier), ')')
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
      delimited(
        '(',
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
        ),
        ')'
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
      delimited(
        '(',
        separated_rule(
          ',',
          field(
            'args',
            $.external_fn_arg
          )
        ),
        ')'
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
      delimited(
        '(',
        separated_rule(
          ',',
          field('arg', seq(
            $.identifier,
            ':',
            $.ktype
          ))
        ),
        ')'
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
        delimited(
          '(',
          field(
            'assoc_type',
            non_empty_separated_rule(',', $.ktype)
          ),
          ')'
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
        field('statements', seq($.statement)),
        '$',
        field('final_expression', $.expression)
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
      $.integer_literal,
      $.float_litteral,
      $.stringl
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
        delimited('(', non_empty_separated_rule(',', $.ktype), ')')
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

function separated_rule(sep, rule) {
  return optional(non_empty_separated_rule(sep, rule))
}

function terminated(rule, by) {
  return seq(rule, by)
}

function preceded(by, rule) {
  return seq(by, rule)
}

function non_empty_separated_rule(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}