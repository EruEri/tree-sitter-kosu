
(constant_identifier) @constant
(module_identifier) @constructor

"and" @keyword
"cases" @keyword
"const" @keyword
"enum" @keyword
"external" @keyword
"empty" @keyword
"discard" @keyword
"else" @keyword
"fn"  @keyword
"false" @keyword
"nullptr" @keyword
"struct" @keyword
"syscall" @keyword
"of" @keyword
"or" @keyword
"operator" @keyword
"true" @keyword
"switch" @keyword
"sizeof" @keyword
"if"  @keyword
"var" @keyword
"while" @keyword

(builin_function_expr) @function.builtin
(builtin_types) @type.builtin
(ktype) @type
(ctype) @type

(stringl) @string
(integer_literal) @number
(float_literal) @number

["(" ")" "{" "}" "[<" "[>"] @punctuation.bracket

"::" @punctuation.delimiter
":" @punctuation.delimiter
"." @punctuation.delimiter
"," @punctuation.delimiter
";" @punctuation.delimiter