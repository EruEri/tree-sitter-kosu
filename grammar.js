module.exports = grammar({
  name: 'Kosu',

  rules: {
    source_file: $ => repeat($.module_nodes),
    word: $ => 'enum',
    module_nodes: $ => choice(
      $.enum_decl,
      $.struct_decl,
      $.external_func_decl,
      $.operator_decl,
      $.syscall_decl,
      $.function_decl,
      $.const_decl
    ),
    enum_decl: $ => seq(
      'enum',
      field('name', $.identifier),
      optional(
        delimited('(', non_empty_separated_rule(',', $.identifier), ')')
      ),
      delimited('{', separated_rule(',', $.enum_assoc), '}')
      
    ),
    struct_decl: $ => "struct",
    external_func_decl: $ => "external",
    operator_decl: $ => "operator",
    syscall_decl: $ => "syscall",
    function_decl: $ => "fn",
    const_decl: $ => "const",
    enum_assoc: $ => seq(
      $.identifier,
      optional(
        delimited(
          '(',
          separated_rule(',', $.ktype),
          ')'
        )
      )
    ),
    ktype: $ => choice(
      seq($.module_path, $.identifier),
      seq("*", $.ktype),
      seq(
        $.module_path,
        $.identifier,
        "(",
        repeat1(
          seq(
            $.ktype,
            ","
          )
        ),
        ")"
      )
    ),
    generic_list: $ => non_empty_separated_rule(",", $.identifier),
    module_path: $ => /[A-Z][A-Z | a-z | 0-9 | _]*/,
    identifier: $ => /[a-z|_][a-z|_|A-Z|0-9]*/
  }
});

function delimited(lhs, rule, rhs) {
  return seq(lhs, rule, rhs)
}

function separated_rule(sep, rule) {
  return optional(non_empty_separated_rule(sep, rule))
}

function non_empty_separated_rule(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}