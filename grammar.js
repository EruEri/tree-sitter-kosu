module.exports = grammar({
  name: 'Kosu',

  externals: $ => [
    $.stringl
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
      $.operator_decl,
      $.syscall_decl,
      $.function_decl,
      $.const_decl
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
            preceded( '=',
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
              "\"",
              $.stringl
            )
          )
        )
      )
    ),
    operator_decl: $ => "operator",
    syscall_decl: $ => "syscall",
    function_decl: $ => "fn",
    const_decl: $ => "const",
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
    generic_list: $ => non_empty_separated_rule(",", $.identifier),
    module_identifier: $ => /[A-Z][A-Z | a-z | 0-9 | _]*/,
    identifier: $ => /[a-z|_][a-z|_|A-Z|0-9]*/,
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