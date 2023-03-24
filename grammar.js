module.exports = grammar ({
  name: 'Kosu',

  rules: {
    source_file: $ => repeat($.module_nodes),
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
      $.identifier,
      optional(
        seq(
          "(",
          $.generic_list,
          ")"
        )
      ),
      "{",
      repeat(
        seq(
          $.enum_assoc,
          ","
        )
      ),
      "}"
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
        seq(
          "(",
          repeat1(
            seq(
              $.ktype,
              optional(
                ","
              )
            )
          )
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
    generic_list: $ => repeat1(
      seq(
        $.identifier, optional( "," )
      )
    ),
    module_path: $ => /[A-Z][A-Z | a-z | 0-9 | _]*/,
    identifier: $ => /[a-z|_][a-z|_|A-Z|0-9]*/
  } 
});