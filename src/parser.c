#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 235
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 66

enum {
  anon_sym_enum = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_struct = 7,
  anon_sym_COLON = 8,
  anon_sym_external = 9,
  anon_sym_EQ = 10,
  anon_sym_DOT_DOT_DOT = 11,
  anon_sym_SEMI = 12,
  anon_sym_syscall = 13,
  anon_sym_const = 14,
  sym_operator_decl = 15,
  sym_function_decl = 16,
  anon_sym_COLON_COLON = 17,
  anon_sym_DOT = 18,
  anon_sym_STAR = 19,
  anon_sym__ = 20,
  anon_sym_DQUOTE = 21,
  sym_module_identifier = 22,
  sym_constant_identifier = 23,
  sym_identifier = 24,
  sym_float_litteral = 25,
  sym_digit = 26,
  sym_integer_literal = 27,
  sym__stringl = 28,
  sym_source_file = 29,
  sym_module_nodes = 30,
  sym_enum_decl = 31,
  sym_struct_decl = 32,
  sym_external_func_decl = 33,
  sym_syscall_decl = 34,
  sym_const_decl = 35,
  sym_enum_assoc = 36,
  sym_ktype = 37,
  sym_ctype = 38,
  sym_external_fn_arg = 39,
  sym_stringl = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym_enum_decl_repeat1 = 42,
  aux_sym_enum_decl_repeat2 = 43,
  aux_sym_struct_decl_repeat1 = 44,
  aux_sym_external_func_decl_repeat1 = 45,
  aux_sym_enum_assoc_repeat1 = 46,
  aux_sym_ktype_repeat1 = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_enum] = "enum",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_struct] = "struct",
  [anon_sym_COLON] = ":",
  [anon_sym_external] = "external",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_SEMI] = ";",
  [anon_sym_syscall] = "syscall",
  [anon_sym_const] = "const",
  [sym_operator_decl] = "operator_decl",
  [sym_function_decl] = "function_decl",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DOT] = ".",
  [anon_sym_STAR] = "*",
  [anon_sym__] = "_",
  [anon_sym_DQUOTE] = "\"",
  [sym_module_identifier] = "module_identifier",
  [sym_constant_identifier] = "constant_identifier",
  [sym_identifier] = "identifier",
  [sym_float_litteral] = "float_litteral",
  [sym_digit] = "digit",
  [sym_integer_literal] = "integer_literal",
  [sym__stringl] = "_stringl",
  [sym_source_file] = "source_file",
  [sym_module_nodes] = "module_nodes",
  [sym_enum_decl] = "enum_decl",
  [sym_struct_decl] = "struct_decl",
  [sym_external_func_decl] = "external_func_decl",
  [sym_syscall_decl] = "syscall_decl",
  [sym_const_decl] = "const_decl",
  [sym_enum_assoc] = "enum_assoc",
  [sym_ktype] = "ktype",
  [sym_ctype] = "ctype",
  [sym_external_fn_arg] = "external_fn_arg",
  [sym_stringl] = "stringl",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_enum_decl_repeat1] = "enum_decl_repeat1",
  [aux_sym_enum_decl_repeat2] = "enum_decl_repeat2",
  [aux_sym_struct_decl_repeat1] = "struct_decl_repeat1",
  [aux_sym_external_func_decl_repeat1] = "external_func_decl_repeat1",
  [aux_sym_enum_assoc_repeat1] = "enum_assoc_repeat1",
  [aux_sym_ktype_repeat1] = "ktype_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_external] = anon_sym_external,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_syscall] = anon_sym_syscall,
  [anon_sym_const] = anon_sym_const,
  [sym_operator_decl] = sym_operator_decl,
  [sym_function_decl] = sym_function_decl,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym__] = anon_sym__,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_module_identifier] = sym_module_identifier,
  [sym_constant_identifier] = sym_constant_identifier,
  [sym_identifier] = sym_identifier,
  [sym_float_litteral] = sym_float_litteral,
  [sym_digit] = sym_digit,
  [sym_integer_literal] = sym_integer_literal,
  [sym__stringl] = sym__stringl,
  [sym_source_file] = sym_source_file,
  [sym_module_nodes] = sym_module_nodes,
  [sym_enum_decl] = sym_enum_decl,
  [sym_struct_decl] = sym_struct_decl,
  [sym_external_func_decl] = sym_external_func_decl,
  [sym_syscall_decl] = sym_syscall_decl,
  [sym_const_decl] = sym_const_decl,
  [sym_enum_assoc] = sym_enum_assoc,
  [sym_ktype] = sym_ktype,
  [sym_ctype] = sym_ctype,
  [sym_external_fn_arg] = sym_external_fn_arg,
  [sym_stringl] = sym_stringl,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_enum_decl_repeat1] = aux_sym_enum_decl_repeat1,
  [aux_sym_enum_decl_repeat2] = aux_sym_enum_decl_repeat2,
  [aux_sym_struct_decl_repeat1] = aux_sym_struct_decl_repeat1,
  [aux_sym_external_func_decl_repeat1] = aux_sym_external_func_decl_repeat1,
  [aux_sym_enum_assoc_repeat1] = aux_sym_enum_assoc_repeat1,
  [aux_sym_ktype_repeat1] = aux_sym_ktype_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_external] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_syscall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [sym_operator_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_function_decl] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_module_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_float_litteral] = {
    .visible = true,
    .named = true,
  },
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__stringl] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_module_nodes] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_external_func_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_syscall_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_const_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_assoc] = {
    .visible = true,
    .named = true,
  },
  [sym_ktype] = {
    .visible = true,
    .named = true,
  },
  [sym_ctype] = {
    .visible = true,
    .named = true,
  },
  [sym_external_fn_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_stringl] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_decl_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_external_func_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_assoc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ktype_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_args = 1,
  field_assoc_type = 2,
  field_c_name = 3,
  field_const_decl = 4,
  field_enum_case_decl = 5,
  field_enum_cases = 6,
  field_enum_decl = 7,
  field_external_fn_decl = 8,
  field_external_fn_name = 9,
  field_field = 10,
  field_module_path = 11,
  field_name = 12,
  field_node_decl = 13,
  field_opcode = 14,
  field_parametric_type = 15,
  field_pointer = 16,
  field_return_type = 17,
  field_struct_decl = 18,
  field_syscall_decl = 19,
  field_variadic = 20,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_assoc_type] = "assoc_type",
  [field_c_name] = "c_name",
  [field_const_decl] = "const_decl",
  [field_enum_case_decl] = "enum_case_decl",
  [field_enum_cases] = "enum_cases",
  [field_enum_decl] = "enum_decl",
  [field_external_fn_decl] = "external_fn_decl",
  [field_external_fn_name] = "external_fn_name",
  [field_field] = "field",
  [field_module_path] = "module_path",
  [field_name] = "name",
  [field_node_decl] = "node_decl",
  [field_opcode] = "opcode",
  [field_parametric_type] = "parametric_type",
  [field_pointer] = "pointer",
  [field_return_type] = "return_type",
  [field_struct_decl] = "struct_decl",
  [field_syscall_decl] = "syscall_decl",
  [field_variadic] = "variadic",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 1},
  [12] = {.index = 12, .length = 2},
  [13] = {.index = 14, .length = 2},
  [14] = {.index = 16, .length = 2},
  [15] = {.index = 18, .length = 1},
  [16] = {.index = 19, .length = 3},
  [17] = {.index = 22, .length = 2},
  [18] = {.index = 24, .length = 2},
  [19] = {.index = 26, .length = 2},
  [20] = {.index = 28, .length = 2},
  [21] = {.index = 30, .length = 1},
  [22] = {.index = 31, .length = 3},
  [23] = {.index = 34, .length = 3},
  [24] = {.index = 37, .length = 2},
  [25] = {.index = 39, .length = 2},
  [26] = {.index = 41, .length = 4},
  [27] = {.index = 45, .length = 2},
  [28] = {.index = 47, .length = 4},
  [29] = {.index = 51, .length = 2},
  [30] = {.index = 53, .length = 3},
  [31] = {.index = 56, .length = 3},
  [32] = {.index = 59, .length = 3},
  [33] = {.index = 62, .length = 3},
  [34] = {.index = 65, .length = 4},
  [35] = {.index = 69, .length = 3},
  [36] = {.index = 72, .length = 3},
  [37] = {.index = 75, .length = 5},
  [38] = {.index = 80, .length = 5},
  [39] = {.index = 85, .length = 3},
  [40] = {.index = 88, .length = 5},
  [41] = {.index = 93, .length = 2},
  [42] = {.index = 95, .length = 3},
  [43] = {.index = 98, .length = 3},
  [44] = {.index = 101, .length = 4},
  [45] = {.index = 105, .length = 4},
  [46] = {.index = 109, .length = 4},
  [47] = {.index = 113, .length = 4},
  [48] = {.index = 117, .length = 4},
  [49] = {.index = 121, .length = 4},
  [50] = {.index = 125, .length = 6},
  [51] = {.index = 131, .length = 6},
  [52] = {.index = 137, .length = 4},
  [53] = {.index = 141, .length = 4},
  [54] = {.index = 145, .length = 5},
  [55] = {.index = 150, .length = 5},
  [56] = {.index = 155, .length = 5},
  [57] = {.index = 160, .length = 7},
  [58] = {.index = 167, .length = 4},
  [59] = {.index = 171, .length = 3},
  [60] = {.index = 174, .length = 5},
  [61] = {.index = 179, .length = 5},
  [62] = {.index = 184, .length = 5},
  [63] = {.index = 189, .length = 4},
  [64] = {.index = 193, .length = 6},
  [65] = {.index = 199, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_node_decl, 0},
  [1] =
    {field_enum_decl, 0},
  [2] =
    {field_struct_decl, 0},
  [3] =
    {field_external_fn_decl, 0},
  [4] =
    {field_syscall_decl, 0},
  [5] =
    {field_const_decl, 0},
  [6] =
    {field_node_decl, 0, .inherited = true},
  [7] =
    {field_node_decl, 0, .inherited = true},
    {field_node_decl, 1, .inherited = true},
  [9] =
    {field_name, 1},
  [10] =
    {field_enum_case_decl, 0},
  [11] =
    {field_external_fn_name, 1},
  [12] =
    {field_enum_cases, 3},
    {field_name, 1},
  [14] =
    {field_external_fn_name, 1},
    {field_return_type, 4},
  [16] =
    {field_args, 3},
    {field_external_fn_name, 1},
  [18] =
    {field_enum_cases, 1},
  [19] =
    {field_enum_cases, 3},
    {field_enum_cases, 4, .inherited = true},
    {field_name, 1},
  [22] =
    {field_enum_cases, 0, .inherited = true},
    {field_enum_cases, 1, .inherited = true},
  [24] =
    {field_c_name, 5},
    {field_external_fn_name, 1},
  [26] =
    {field_pointer, 0},
    {field_pointer, 1},
  [28] =
    {field_external_fn_name, 1},
    {field_variadic, 4},
  [30] =
    {field_args, 1},
  [31] =
    {field_args, 3},
    {field_external_fn_name, 1},
    {field_return_type, 5},
  [34] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_external_fn_name, 1},
  [37] =
    {field_args, 0, .inherited = true},
    {field_args, 1, .inherited = true},
  [39] =
    {field_name, 1},
    {field_opcode, 5},
  [41] =
    {field_name, 1},
    {field_parametric_type, 2},
    {field_parametric_type, 3},
    {field_parametric_type, 4},
  [45] =
    {field_assoc_type, 2},
    {field_enum_case_decl, 0},
  [47] =
    {field_field, 3},
    {field_field, 4},
    {field_field, 5},
    {field_name, 1},
  [51] =
    {field_module_path, 0},
    {field_module_path, 1},
  [53] =
    {field_c_name, 6},
    {field_external_fn_name, 1},
    {field_return_type, 4},
  [56] =
    {field_external_fn_name, 1},
    {field_return_type, 6},
    {field_variadic, 4},
  [59] =
    {field_args, 3},
    {field_c_name, 6},
    {field_external_fn_name, 1},
  [62] =
    {field_args, 3},
    {field_external_fn_name, 1},
    {field_variadic, 5},
  [65] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_external_fn_name, 1},
    {field_return_type, 6},
  [69] =
    {field_name, 1},
    {field_opcode, 6},
    {field_return_type, 4},
  [72] =
    {field_args, 3},
    {field_name, 1},
    {field_opcode, 6},
  [75] =
    {field_enum_cases, 6},
    {field_name, 1},
    {field_parametric_type, 2},
    {field_parametric_type, 3},
    {field_parametric_type, 4},
  [80] =
    {field_name, 1},
    {field_parametric_type, 2},
    {field_parametric_type, 3},
    {field_parametric_type, 4},
    {field_parametric_type, 5},
  [85] =
    {field_assoc_type, 2},
    {field_assoc_type, 3},
    {field_enum_case_decl, 0},
  [88] =
    {field_field, 3},
    {field_field, 4},
    {field_field, 5},
    {field_field, 6, .inherited = true},
    {field_name, 1},
  [93] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [95] =
    {field_module_path, 0},
    {field_module_path, 1},
    {field_module_path, 2},
  [98] =
    {field_c_name, 7},
    {field_external_fn_name, 1},
    {field_variadic, 4},
  [101] =
    {field_args, 3},
    {field_c_name, 7},
    {field_external_fn_name, 1},
    {field_return_type, 5},
  [105] =
    {field_args, 3},
    {field_external_fn_name, 1},
    {field_return_type, 7},
    {field_variadic, 5},
  [109] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_c_name, 7},
    {field_external_fn_name, 1},
  [113] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_external_fn_name, 1},
    {field_variadic, 6},
  [117] =
    {field_args, 3},
    {field_name, 1},
    {field_opcode, 7},
    {field_return_type, 5},
  [121] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_name, 1},
    {field_opcode, 7},
  [125] =
    {field_enum_cases, 6},
    {field_enum_cases, 7, .inherited = true},
    {field_name, 1},
    {field_parametric_type, 2},
    {field_parametric_type, 3},
    {field_parametric_type, 4},
  [131] =
    {field_enum_cases, 7},
    {field_name, 1},
    {field_parametric_type, 2},
    {field_parametric_type, 3},
    {field_parametric_type, 4},
    {field_parametric_type, 5},
  [137] =
    {field_c_name, 8},
    {field_external_fn_name, 1},
    {field_return_type, 6},
    {field_variadic, 4},
  [141] =
    {field_args, 3},
    {field_c_name, 8},
    {field_external_fn_name, 1},
    {field_variadic, 5},
  [145] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_c_name, 8},
    {field_external_fn_name, 1},
    {field_return_type, 6},
  [150] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_external_fn_name, 1},
    {field_return_type, 8},
    {field_variadic, 6},
  [155] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_name, 1},
    {field_opcode, 8},
    {field_return_type, 6},
  [160] =
    {field_enum_cases, 7},
    {field_enum_cases, 8, .inherited = true},
    {field_name, 1},
    {field_parametric_type, 2},
    {field_parametric_type, 3},
    {field_parametric_type, 4},
    {field_parametric_type, 5},
  [167] =
    {field_field, 6},
    {field_field, 7},
    {field_field, 8},
    {field_name, 1},
  [171] =
    {field_field, 1},
    {field_field, 2},
    {field_field, 3},
  [174] =
    {field_args, 3},
    {field_c_name, 9},
    {field_external_fn_name, 1},
    {field_return_type, 7},
    {field_variadic, 5},
  [179] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_c_name, 9},
    {field_external_fn_name, 1},
    {field_variadic, 6},
  [184] =
    {field_field, 6},
    {field_field, 7},
    {field_field, 8},
    {field_field, 9, .inherited = true},
    {field_name, 1},
  [189] =
    {field_field, 7},
    {field_field, 8},
    {field_field, 9},
    {field_name, 1},
  [193] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_c_name, 10},
    {field_external_fn_name, 1},
    {field_return_type, 8},
    {field_variadic, 6},
  [199] =
    {field_field, 7},
    {field_field, 8},
    {field_field, 9},
    {field_field, 10, .inherited = true},
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(45);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == ';') ADVANCE(61);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '_') ADVANCE(74);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('a' <= lookahead && lookahead <= '|')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '_') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(78);
      if (('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(60);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(70);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 39:
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '|') ADVANCE(113);
      END_STATE();
    case 40:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(119);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(120);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 43:
      if (eof) ADVANCE(45);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == ';') ADVANCE(61);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      END_STATE();
    case 44:
      if (eof) ADVANCE(45);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == ';') ADVANCE(61);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(77);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(70);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_external);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_syscall);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_syscall);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_operator_decl);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_operator_decl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_function_decl);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_function_decl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(6);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '"') ADVANCE(78);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_constant_identifier);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'x') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == 'y') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_float_litteral);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(113);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_float_litteral);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == '|') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_float_litteral);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          lookahead == '|') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_digit);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(40);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_digit);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(40);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == '|') ADVANCE(5);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(40);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 43},
  [2] = {.lex_state = 43},
  [3] = {.lex_state = 43},
  [4] = {.lex_state = 44},
  [5] = {.lex_state = 43},
  [6] = {.lex_state = 44},
  [7] = {.lex_state = 44},
  [8] = {.lex_state = 44},
  [9] = {.lex_state = 43},
  [10] = {.lex_state = 44},
  [11] = {.lex_state = 43},
  [12] = {.lex_state = 44},
  [13] = {.lex_state = 43},
  [14] = {.lex_state = 43},
  [15] = {.lex_state = 43},
  [16] = {.lex_state = 43},
  [17] = {.lex_state = 43},
  [18] = {.lex_state = 43},
  [19] = {.lex_state = 43},
  [20] = {.lex_state = 43},
  [21] = {.lex_state = 43},
  [22] = {.lex_state = 43},
  [23] = {.lex_state = 43},
  [24] = {.lex_state = 43},
  [25] = {.lex_state = 43},
  [26] = {.lex_state = 43},
  [27] = {.lex_state = 43},
  [28] = {.lex_state = 43},
  [29] = {.lex_state = 43},
  [30] = {.lex_state = 43},
  [31] = {.lex_state = 43},
  [32] = {.lex_state = 43},
  [33] = {.lex_state = 43},
  [34] = {.lex_state = 43},
  [35] = {.lex_state = 43},
  [36] = {.lex_state = 43},
  [37] = {.lex_state = 43},
  [38] = {.lex_state = 43},
  [39] = {.lex_state = 43},
  [40] = {.lex_state = 43},
  [41] = {.lex_state = 43},
  [42] = {.lex_state = 43},
  [43] = {.lex_state = 43},
  [44] = {.lex_state = 43},
  [45] = {.lex_state = 43},
  [46] = {.lex_state = 43},
  [47] = {.lex_state = 43},
  [48] = {.lex_state = 43},
  [49] = {.lex_state = 43},
  [50] = {.lex_state = 43},
  [51] = {.lex_state = 43},
  [52] = {.lex_state = 43},
  [53] = {.lex_state = 43},
  [54] = {.lex_state = 43},
  [55] = {.lex_state = 43},
  [56] = {.lex_state = 43},
  [57] = {.lex_state = 43},
  [58] = {.lex_state = 43},
  [59] = {.lex_state = 43},
  [60] = {.lex_state = 43},
  [61] = {.lex_state = 43},
  [62] = {.lex_state = 43},
  [63] = {.lex_state = 43},
  [64] = {.lex_state = 43},
  [65] = {.lex_state = 43},
  [66] = {.lex_state = 43},
  [67] = {.lex_state = 43},
  [68] = {.lex_state = 43},
  [69] = {.lex_state = 43},
  [70] = {.lex_state = 43},
  [71] = {.lex_state = 43},
  [72] = {.lex_state = 43},
  [73] = {.lex_state = 43},
  [74] = {.lex_state = 43},
  [75] = {.lex_state = 43},
  [76] = {.lex_state = 43},
  [77] = {.lex_state = 43},
  [78] = {.lex_state = 43},
  [79] = {.lex_state = 43},
  [80] = {.lex_state = 43},
  [81] = {.lex_state = 43},
  [82] = {.lex_state = 43},
  [83] = {.lex_state = 43},
  [84] = {.lex_state = 43},
  [85] = {.lex_state = 43},
  [86] = {.lex_state = 43},
  [87] = {.lex_state = 43},
  [88] = {.lex_state = 43},
  [89] = {.lex_state = 43},
  [90] = {.lex_state = 43},
  [91] = {.lex_state = 43},
  [92] = {.lex_state = 43},
  [93] = {.lex_state = 43},
  [94] = {.lex_state = 43},
  [95] = {.lex_state = 43},
  [96] = {.lex_state = 43},
  [97] = {.lex_state = 43},
  [98] = {.lex_state = 43},
  [99] = {.lex_state = 43},
  [100] = {.lex_state = 43},
  [101] = {.lex_state = 43},
  [102] = {.lex_state = 43},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 43},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 43},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 43},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 43},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 43},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 43},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 43},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 44},
  [191] = {.lex_state = 44},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 44},
  [199] = {.lex_state = 44},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 44},
  [206] = {.lex_state = 44},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 44},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 43},
  [212] = {.lex_state = 44},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 44},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 44},
  [219] = {.lex_state = 44},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 44},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 44},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 44},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 2},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 1},
  [234] = {.lex_state = 2},
};

enum {
  ts_external_token__stringl = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__stringl] = sym__stringl,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__stringl] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_external] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_syscall] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [sym_operator_decl] = ACTIONS(1),
    [sym_function_decl] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_module_identifier] = ACTIONS(1),
    [sym_constant_identifier] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_float_litteral] = ACTIONS(1),
    [sym_digit] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym__stringl] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(216),
    [sym_module_nodes] = STATE(68),
    [sym_enum_decl] = STATE(74),
    [sym_struct_decl] = STATE(78),
    [sym_external_func_decl] = STATE(82),
    [sym_syscall_decl] = STATE(85),
    [sym_const_decl] = STATE(89),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_struct] = ACTIONS(7),
    [anon_sym_external] = ACTIONS(9),
    [anon_sym_syscall] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(13),
    [sym_operator_decl] = ACTIONS(15),
    [sym_function_decl] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(5), 1,
      anon_sym_enum,
    ACTIONS(7), 1,
      anon_sym_struct,
    ACTIONS(9), 1,
      anon_sym_external,
    ACTIONS(11), 1,
      anon_sym_syscall,
    ACTIONS(13), 1,
      anon_sym_const,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(68), 1,
      sym_module_nodes,
    STATE(74), 1,
      sym_enum_decl,
    STATE(78), 1,
      sym_struct_decl,
    STATE(82), 1,
      sym_external_func_decl,
    STATE(85), 1,
      sym_syscall_decl,
    STATE(89), 1,
      sym_const_decl,
    ACTIONS(15), 2,
      sym_operator_decl,
      sym_function_decl,
  [44] = 14,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_enum,
    ACTIONS(24), 1,
      anon_sym_struct,
    ACTIONS(27), 1,
      anon_sym_external,
    ACTIONS(30), 1,
      anon_sym_syscall,
    ACTIONS(33), 1,
      anon_sym_const,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(68), 1,
      sym_module_nodes,
    STATE(74), 1,
      sym_enum_decl,
    STATE(78), 1,
      sym_struct_decl,
    STATE(82), 1,
      sym_external_func_decl,
    STATE(85), 1,
      sym_syscall_decl,
    STATE(89), 1,
      sym_const_decl,
    ACTIONS(36), 2,
      sym_operator_decl,
      sym_function_decl,
  [88] = 8,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_EQ,
    ACTIONS(45), 1,
      anon_sym_SEMI,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      sym_module_identifier,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(27), 1,
      sym_ctype,
    ACTIONS(41), 7,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [119] = 2,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 13,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [138] = 8,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      sym_module_identifier,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_EQ,
    ACTIONS(63), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      sym_ctype,
    ACTIONS(59), 7,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [169] = 8,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      sym_module_identifier,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      anon_sym_EQ,
    ACTIONS(71), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      sym_ctype,
    ACTIONS(67), 7,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [200] = 8,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      sym_module_identifier,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_EQ,
    ACTIONS(79), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      sym_ctype,
    ACTIONS(75), 7,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [231] = 2,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 13,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [250] = 8,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      sym_module_identifier,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      anon_sym_EQ,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    STATE(26), 1,
      sym_ctype,
    ACTIONS(87), 7,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [281] = 2,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 13,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [300] = 8,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      sym_module_identifier,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      anon_sym_EQ,
    ACTIONS(103), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym_ctype,
    ACTIONS(99), 7,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [331] = 1,
    ACTIONS(105), 13,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [347] = 1,
    ACTIONS(107), 13,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [363] = 1,
    ACTIONS(109), 13,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [379] = 1,
    ACTIONS(111), 13,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [395] = 1,
    ACTIONS(113), 13,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [411] = 1,
    ACTIONS(115), 13,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [427] = 1,
    ACTIONS(117), 13,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [443] = 1,
    ACTIONS(119), 12,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [458] = 1,
    ACTIONS(121), 12,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [473] = 1,
    ACTIONS(123), 12,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [488] = 1,
    ACTIONS(125), 12,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [503] = 3,
    ACTIONS(129), 1,
      anon_sym_EQ,
    ACTIONS(131), 1,
      anon_sym_SEMI,
    ACTIONS(127), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [520] = 3,
    ACTIONS(135), 1,
      anon_sym_EQ,
    ACTIONS(137), 1,
      anon_sym_SEMI,
    ACTIONS(133), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [537] = 3,
    ACTIONS(141), 1,
      anon_sym_EQ,
    ACTIONS(143), 1,
      anon_sym_SEMI,
    ACTIONS(139), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [554] = 3,
    ACTIONS(147), 1,
      anon_sym_EQ,
    ACTIONS(149), 1,
      anon_sym_SEMI,
    ACTIONS(145), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [571] = 3,
    ACTIONS(153), 1,
      anon_sym_EQ,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    ACTIONS(151), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [588] = 3,
    ACTIONS(159), 1,
      anon_sym_EQ,
    ACTIONS(161), 1,
      anon_sym_SEMI,
    ACTIONS(157), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [605] = 2,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    ACTIONS(163), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [619] = 2,
    ACTIONS(169), 1,
      anon_sym_SEMI,
    ACTIONS(167), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [633] = 2,
    ACTIONS(173), 1,
      anon_sym_SEMI,
    ACTIONS(171), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [647] = 2,
    ACTIONS(177), 1,
      anon_sym_SEMI,
    ACTIONS(175), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [661] = 2,
    ACTIONS(181), 1,
      anon_sym_SEMI,
    ACTIONS(179), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [675] = 2,
    ACTIONS(185), 1,
      anon_sym_SEMI,
    ACTIONS(183), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [689] = 2,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    ACTIONS(187), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [703] = 2,
    ACTIONS(193), 1,
      anon_sym_SEMI,
    ACTIONS(191), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [717] = 1,
    ACTIONS(195), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_SEMI,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [729] = 2,
    ACTIONS(199), 1,
      anon_sym_SEMI,
    ACTIONS(197), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [743] = 2,
    ACTIONS(203), 1,
      anon_sym_SEMI,
    ACTIONS(201), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [757] = 2,
    ACTIONS(207), 1,
      anon_sym_SEMI,
    ACTIONS(205), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [771] = 2,
    ACTIONS(211), 1,
      anon_sym_SEMI,
    ACTIONS(209), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [785] = 2,
    ACTIONS(215), 1,
      anon_sym_SEMI,
    ACTIONS(213), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [799] = 2,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(217), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [813] = 2,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(221), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [827] = 2,
    ACTIONS(227), 1,
      anon_sym_SEMI,
    ACTIONS(225), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [841] = 2,
    ACTIONS(231), 1,
      anon_sym_SEMI,
    ACTIONS(229), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [855] = 2,
    ACTIONS(235), 1,
      anon_sym_SEMI,
    ACTIONS(233), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [869] = 2,
    ACTIONS(239), 1,
      anon_sym_SEMI,
    ACTIONS(237), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [883] = 1,
    ACTIONS(241), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [894] = 1,
    ACTIONS(243), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [905] = 1,
    ACTIONS(245), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [916] = 1,
    ACTIONS(247), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [927] = 1,
    ACTIONS(249), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [938] = 1,
    ACTIONS(251), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [949] = 1,
    ACTIONS(253), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [960] = 1,
    ACTIONS(255), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [971] = 1,
    ACTIONS(257), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [982] = 1,
    ACTIONS(259), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [993] = 1,
    ACTIONS(261), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1004] = 1,
    ACTIONS(263), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1015] = 1,
    ACTIONS(265), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1026] = 1,
    ACTIONS(267), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1037] = 1,
    ACTIONS(269), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1048] = 1,
    ACTIONS(271), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1059] = 1,
    ACTIONS(273), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1070] = 1,
    ACTIONS(275), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1081] = 1,
    ACTIONS(277), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1092] = 1,
    ACTIONS(279), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1103] = 1,
    ACTIONS(281), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1114] = 1,
    ACTIONS(283), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1125] = 1,
    ACTIONS(285), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1136] = 1,
    ACTIONS(287), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1147] = 1,
    ACTIONS(289), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1158] = 1,
    ACTIONS(291), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1169] = 1,
    ACTIONS(293), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1180] = 1,
    ACTIONS(295), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1191] = 1,
    ACTIONS(297), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1202] = 1,
    ACTIONS(299), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1213] = 1,
    ACTIONS(301), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1224] = 1,
    ACTIONS(303), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1235] = 1,
    ACTIONS(305), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1246] = 1,
    ACTIONS(307), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1257] = 1,
    ACTIONS(309), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1268] = 1,
    ACTIONS(311), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1279] = 1,
    ACTIONS(313), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1290] = 1,
    ACTIONS(315), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1301] = 1,
    ACTIONS(317), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1312] = 1,
    ACTIONS(319), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1323] = 1,
    ACTIONS(321), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1334] = 1,
    ACTIONS(323), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1345] = 1,
    ACTIONS(325), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1356] = 1,
    ACTIONS(327), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1367] = 1,
    ACTIONS(329), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1378] = 1,
    ACTIONS(331), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1389] = 1,
    ACTIONS(333), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1400] = 1,
    ACTIONS(335), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1411] = 1,
    ACTIONS(337), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1422] = 1,
    ACTIONS(339), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1433] = 1,
    ACTIONS(341), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1444] = 1,
    ACTIONS(343), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1455] = 1,
    ACTIONS(345), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      anon_sym_const,
      sym_operator_decl,
      sym_function_decl,
  [1466] = 4,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    ACTIONS(349), 1,
      anon_sym_EQ,
    STATE(123), 1,
      sym_external_fn_arg,
    ACTIONS(351), 2,
      anon_sym__,
      sym_identifier,
  [1480] = 5,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      sym_module_identifier,
    ACTIONS(353), 1,
      anon_sym_EQ,
    ACTIONS(355), 1,
      sym_identifier,
    STATE(207), 1,
      sym_ctype,
  [1496] = 5,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      sym_module_identifier,
    ACTIONS(355), 1,
      sym_identifier,
    ACTIONS(357), 1,
      anon_sym_EQ,
    STATE(196), 1,
      sym_ctype,
  [1512] = 5,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      sym_module_identifier,
    ACTIONS(355), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_EQ,
    STATE(202), 1,
      sym_ctype,
  [1528] = 4,
    ACTIONS(361), 1,
      anon_sym_STAR,
    ACTIONS(363), 1,
      sym_module_identifier,
    ACTIONS(365), 1,
      sym_identifier,
    STATE(157), 1,
      sym_ktype,
  [1541] = 4,
    ACTIONS(361), 1,
      anon_sym_STAR,
    ACTIONS(363), 1,
      sym_module_identifier,
    ACTIONS(365), 1,
      sym_identifier,
    STATE(143), 1,
      sym_ktype,
  [1554] = 3,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      sym_external_fn_arg,
    ACTIONS(351), 2,
      anon_sym__,
      sym_identifier,
  [1565] = 4,
    ACTIONS(361), 1,
      anon_sym_STAR,
    ACTIONS(363), 1,
      sym_module_identifier,
    ACTIONS(365), 1,
      sym_identifier,
    STATE(137), 1,
      sym_ktype,
  [1578] = 4,
    ACTIONS(361), 1,
      anon_sym_STAR,
    ACTIONS(363), 1,
      sym_module_identifier,
    ACTIONS(365), 1,
      sym_identifier,
    STATE(175), 1,
      sym_ktype,
  [1591] = 4,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 1,
      sym_float_litteral,
    ACTIONS(373), 1,
      sym_integer_literal,
    STATE(42), 1,
      sym_stringl,
  [1604] = 4,
    ACTIONS(361), 1,
      anon_sym_STAR,
    ACTIONS(363), 1,
      sym_module_identifier,
    ACTIONS(365), 1,
      sym_identifier,
    STATE(19), 1,
      sym_ktype,
  [1617] = 4,
    ACTIONS(361), 1,
      anon_sym_STAR,
    ACTIONS(363), 1,
      sym_module_identifier,
    ACTIONS(365), 1,
      sym_identifier,
    STATE(152), 1,
      sym_ktype,
  [1630] = 4,
    ACTIONS(361), 1,
      anon_sym_STAR,
    ACTIONS(363), 1,
      sym_module_identifier,
    ACTIONS(365), 1,
      sym_identifier,
    STATE(166), 1,
      sym_ktype,
  [1643] = 3,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_external_func_decl_repeat1,
    ACTIONS(378), 2,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1654] = 4,
    ACTIONS(361), 1,
      anon_sym_STAR,
    ACTIONS(363), 1,
      sym_module_identifier,
    ACTIONS(365), 1,
      sym_identifier,
    STATE(131), 1,
      sym_ktype,
  [1667] = 4,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    ACTIONS(384), 1,
      anon_sym_EQ,
    STATE(116), 1,
      aux_sym_external_func_decl_repeat1,
  [1680] = 4,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      sym_module_identifier,
    ACTIONS(355), 1,
      sym_identifier,
    STATE(124), 1,
      sym_ctype,
  [1693] = 4,
    ACTIONS(361), 1,
      anon_sym_STAR,
    ACTIONS(363), 1,
      sym_module_identifier,
    ACTIONS(365), 1,
      sym_identifier,
    STATE(21), 1,
      sym_ktype,
  [1706] = 4,
    ACTIONS(361), 1,
      anon_sym_STAR,
    ACTIONS(363), 1,
      sym_module_identifier,
    ACTIONS(365), 1,
      sym_identifier,
    STATE(156), 1,
      sym_ktype,
  [1719] = 4,
    ACTIONS(361), 1,
      anon_sym_STAR,
    ACTIONS(363), 1,
      sym_module_identifier,
    ACTIONS(365), 1,
      sym_identifier,
    STATE(153), 1,
      sym_ktype,
  [1732] = 4,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    ACTIONS(388), 1,
      anon_sym_EQ,
    STATE(118), 1,
      aux_sym_external_func_decl_repeat1,
  [1745] = 1,
    ACTIONS(390), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1751] = 3,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    ACTIONS(394), 1,
      sym_identifier,
    STATE(140), 1,
      sym_enum_assoc,
  [1761] = 3,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      aux_sym_enum_assoc_repeat1,
  [1771] = 3,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_enum_decl_repeat1,
  [1781] = 3,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      aux_sym_struct_decl_repeat1,
  [1791] = 3,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(408), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      aux_sym_struct_decl_repeat1,
  [1801] = 3,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    STATE(154), 1,
      aux_sym_enum_decl_repeat2,
  [1811] = 3,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym_enum_assoc_repeat1,
  [1821] = 3,
    ACTIONS(416), 1,
      anon_sym_COLON_COLON,
    ACTIONS(419), 1,
      anon_sym_DOT,
    STATE(132), 1,
      aux_sym_ktype_repeat1,
  [1831] = 3,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      aux_sym_enum_assoc_repeat1,
  [1841] = 3,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_enum_decl_repeat1,
  [1851] = 3,
    ACTIONS(425), 1,
      anon_sym_COLON_COLON,
    ACTIONS(427), 1,
      anon_sym_DOT,
    STATE(161), 1,
      aux_sym_ktype_repeat1,
  [1861] = 2,
    STATE(165), 1,
      sym_external_fn_arg,
    ACTIONS(351), 2,
      anon_sym__,
      sym_identifier,
  [1869] = 3,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    STATE(129), 1,
      aux_sym_struct_decl_repeat1,
  [1879] = 3,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_enum_decl_repeat1,
  [1889] = 3,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      aux_sym_struct_decl_repeat1,
  [1899] = 3,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      aux_sym_enum_decl_repeat2,
  [1909] = 3,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_external_func_decl_repeat1,
  [1919] = 2,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1927] = 3,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      aux_sym_enum_assoc_repeat1,
  [1937] = 3,
    ACTIONS(394), 1,
      sym_identifier,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    STATE(163), 1,
      sym_enum_assoc,
  [1947] = 3,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_enum_decl_repeat1,
  [1957] = 3,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      aux_sym_external_func_decl_repeat1,
  [1967] = 3,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    STATE(154), 1,
      aux_sym_enum_decl_repeat2,
  [1977] = 3,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      aux_sym_enum_assoc_repeat1,
  [1987] = 3,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      aux_sym_enum_decl_repeat2,
  [1997] = 3,
    ACTIONS(400), 1,
      anon_sym_COMMA,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_enum_decl_repeat1,
  [2007] = 3,
    ACTIONS(425), 1,
      anon_sym_COLON_COLON,
    ACTIONS(462), 1,
      anon_sym_DOT,
    STATE(159), 1,
      aux_sym_ktype_repeat1,
  [2017] = 3,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      aux_sym_enum_assoc_repeat1,
  [2027] = 3,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      aux_sym_enum_assoc_repeat1,
  [2037] = 3,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
    STATE(154), 1,
      aux_sym_enum_decl_repeat2,
  [2047] = 3,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      aux_sym_enum_assoc_repeat1,
  [2057] = 3,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(478), 1,
      anon_sym_RBRACE,
    STATE(128), 1,
      aux_sym_struct_decl_repeat1,
  [2067] = 3,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
    STATE(139), 1,
      aux_sym_struct_decl_repeat1,
  [2077] = 3,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      aux_sym_enum_assoc_repeat1,
  [2087] = 3,
    ACTIONS(425), 1,
      anon_sym_COLON_COLON,
    ACTIONS(484), 1,
      anon_sym_DOT,
    STATE(132), 1,
      aux_sym_ktype_repeat1,
  [2097] = 3,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      aux_sym_struct_decl_repeat1,
  [2107] = 3,
    ACTIONS(425), 1,
      anon_sym_COLON_COLON,
    ACTIONS(491), 1,
      anon_sym_DOT,
    STATE(132), 1,
      aux_sym_ktype_repeat1,
  [2117] = 3,
    ACTIONS(394), 1,
      sym_identifier,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      sym_enum_assoc,
  [2127] = 3,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      aux_sym_enum_decl_repeat2,
  [2137] = 3,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(497), 1,
      anon_sym_RBRACE,
    STATE(154), 1,
      aux_sym_enum_decl_repeat2,
  [2147] = 1,
    ACTIONS(499), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [2153] = 1,
    ACTIONS(476), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2158] = 2,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_stringl,
  [2165] = 1,
    ACTIONS(419), 2,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
  [2170] = 2,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      sym_stringl,
  [2177] = 2,
    ACTIONS(394), 1,
      sym_identifier,
    STATE(182), 1,
      sym_enum_assoc,
  [2184] = 2,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_stringl,
  [2191] = 2,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_stringl,
  [2198] = 2,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym_stringl,
  [2205] = 2,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      sym_stringl,
  [2212] = 1,
    ACTIONS(501), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2217] = 2,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_stringl,
  [2224] = 2,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym_stringl,
  [2231] = 1,
    ACTIONS(450), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2236] = 2,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_stringl,
  [2243] = 1,
    ACTIONS(503), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2248] = 2,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_stringl,
  [2255] = 1,
    ACTIONS(505), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2260] = 2,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      sym_stringl,
  [2267] = 1,
    ACTIONS(507), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2272] = 2,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
  [2279] = 2,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      sym_stringl,
  [2286] = 2,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
  [2293] = 1,
    ACTIONS(517), 1,
      anon_sym_EQ,
  [2297] = 1,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
  [2301] = 1,
    ACTIONS(521), 1,
      anon_sym_COLON,
  [2305] = 1,
    ACTIONS(523), 1,
      anon_sym_COLON,
  [2309] = 1,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
  [2313] = 1,
    ACTIONS(527), 1,
      sym_identifier,
  [2317] = 1,
    ACTIONS(529), 1,
      sym_identifier,
  [2321] = 1,
    ACTIONS(531), 1,
      anon_sym_LPAREN,
  [2325] = 1,
    ACTIONS(533), 1,
      anon_sym_EQ,
  [2329] = 1,
    ACTIONS(535), 1,
      sym_identifier,
  [2333] = 1,
    ACTIONS(537), 1,
      sym_integer_literal,
  [2337] = 1,
    ACTIONS(539), 1,
      anon_sym_COLON,
  [2341] = 1,
    ACTIONS(541), 1,
      sym_identifier,
  [2345] = 1,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
  [2349] = 1,
    ACTIONS(545), 1,
      anon_sym_EQ,
  [2353] = 1,
    ACTIONS(547), 1,
      anon_sym_LPAREN,
  [2357] = 1,
    ACTIONS(549), 1,
      anon_sym_DQUOTE,
  [2361] = 1,
    ACTIONS(551), 1,
      sym_integer_literal,
  [2365] = 1,
    ACTIONS(553), 1,
      anon_sym_DOT_DOT_DOT,
  [2369] = 1,
    ACTIONS(555), 1,
      anon_sym_EQ,
  [2373] = 1,
    ACTIONS(557), 1,
      sym_integer_literal,
  [2377] = 1,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
  [2381] = 1,
    ACTIONS(561), 1,
      sym_identifier,
  [2385] = 1,
    ACTIONS(563), 1,
      sym_module_identifier,
  [2389] = 1,
    ACTIONS(565), 1,
      sym_integer_literal,
  [2393] = 1,
    ACTIONS(567), 1,
      sym_identifier,
  [2397] = 1,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
  [2401] = 1,
    ACTIONS(571), 1,
      anon_sym_COLON,
  [2405] = 1,
    ACTIONS(573), 1,
      ts_builtin_sym_end,
  [2409] = 1,
    ACTIONS(575), 1,
      sym_identifier,
  [2413] = 1,
    ACTIONS(577), 1,
      sym_integer_literal,
  [2417] = 1,
    ACTIONS(579), 1,
      anon_sym_DOT_DOT_DOT,
  [2421] = 1,
    ACTIONS(581), 1,
      anon_sym_LBRACE,
  [2425] = 1,
    ACTIONS(583), 1,
      sym_identifier,
  [2429] = 1,
    ACTIONS(585), 1,
      anon_sym_COLON,
  [2433] = 1,
    ACTIONS(587), 1,
      sym_identifier,
  [2437] = 1,
    ACTIONS(589), 1,
      anon_sym_DOT_DOT_DOT,
  [2441] = 1,
    ACTIONS(591), 1,
      sym_identifier,
  [2445] = 1,
    ACTIONS(593), 1,
      sym_integer_literal,
  [2449] = 1,
    ACTIONS(595), 1,
      anon_sym_LBRACE,
  [2453] = 1,
    ACTIONS(597), 1,
      sym_constant_identifier,
  [2457] = 1,
    ACTIONS(599), 1,
      sym_identifier,
  [2461] = 1,
    ACTIONS(601), 1,
      sym_identifier,
  [2465] = 1,
    ACTIONS(603), 1,
      sym_identifier,
  [2469] = 1,
    ACTIONS(605), 1,
      sym_identifier,
  [2473] = 1,
    ACTIONS(607), 1,
      sym__stringl,
  [2477] = 1,
    ACTIONS(609), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 119,
  [SMALL_STATE(6)] = 138,
  [SMALL_STATE(7)] = 169,
  [SMALL_STATE(8)] = 200,
  [SMALL_STATE(9)] = 231,
  [SMALL_STATE(10)] = 250,
  [SMALL_STATE(11)] = 281,
  [SMALL_STATE(12)] = 300,
  [SMALL_STATE(13)] = 331,
  [SMALL_STATE(14)] = 347,
  [SMALL_STATE(15)] = 363,
  [SMALL_STATE(16)] = 379,
  [SMALL_STATE(17)] = 395,
  [SMALL_STATE(18)] = 411,
  [SMALL_STATE(19)] = 427,
  [SMALL_STATE(20)] = 443,
  [SMALL_STATE(21)] = 458,
  [SMALL_STATE(22)] = 473,
  [SMALL_STATE(23)] = 488,
  [SMALL_STATE(24)] = 503,
  [SMALL_STATE(25)] = 520,
  [SMALL_STATE(26)] = 537,
  [SMALL_STATE(27)] = 554,
  [SMALL_STATE(28)] = 571,
  [SMALL_STATE(29)] = 588,
  [SMALL_STATE(30)] = 605,
  [SMALL_STATE(31)] = 619,
  [SMALL_STATE(32)] = 633,
  [SMALL_STATE(33)] = 647,
  [SMALL_STATE(34)] = 661,
  [SMALL_STATE(35)] = 675,
  [SMALL_STATE(36)] = 689,
  [SMALL_STATE(37)] = 703,
  [SMALL_STATE(38)] = 717,
  [SMALL_STATE(39)] = 729,
  [SMALL_STATE(40)] = 743,
  [SMALL_STATE(41)] = 757,
  [SMALL_STATE(42)] = 771,
  [SMALL_STATE(43)] = 785,
  [SMALL_STATE(44)] = 799,
  [SMALL_STATE(45)] = 813,
  [SMALL_STATE(46)] = 827,
  [SMALL_STATE(47)] = 841,
  [SMALL_STATE(48)] = 855,
  [SMALL_STATE(49)] = 869,
  [SMALL_STATE(50)] = 883,
  [SMALL_STATE(51)] = 894,
  [SMALL_STATE(52)] = 905,
  [SMALL_STATE(53)] = 916,
  [SMALL_STATE(54)] = 927,
  [SMALL_STATE(55)] = 938,
  [SMALL_STATE(56)] = 949,
  [SMALL_STATE(57)] = 960,
  [SMALL_STATE(58)] = 971,
  [SMALL_STATE(59)] = 982,
  [SMALL_STATE(60)] = 993,
  [SMALL_STATE(61)] = 1004,
  [SMALL_STATE(62)] = 1015,
  [SMALL_STATE(63)] = 1026,
  [SMALL_STATE(64)] = 1037,
  [SMALL_STATE(65)] = 1048,
  [SMALL_STATE(66)] = 1059,
  [SMALL_STATE(67)] = 1070,
  [SMALL_STATE(68)] = 1081,
  [SMALL_STATE(69)] = 1092,
  [SMALL_STATE(70)] = 1103,
  [SMALL_STATE(71)] = 1114,
  [SMALL_STATE(72)] = 1125,
  [SMALL_STATE(73)] = 1136,
  [SMALL_STATE(74)] = 1147,
  [SMALL_STATE(75)] = 1158,
  [SMALL_STATE(76)] = 1169,
  [SMALL_STATE(77)] = 1180,
  [SMALL_STATE(78)] = 1191,
  [SMALL_STATE(79)] = 1202,
  [SMALL_STATE(80)] = 1213,
  [SMALL_STATE(81)] = 1224,
  [SMALL_STATE(82)] = 1235,
  [SMALL_STATE(83)] = 1246,
  [SMALL_STATE(84)] = 1257,
  [SMALL_STATE(85)] = 1268,
  [SMALL_STATE(86)] = 1279,
  [SMALL_STATE(87)] = 1290,
  [SMALL_STATE(88)] = 1301,
  [SMALL_STATE(89)] = 1312,
  [SMALL_STATE(90)] = 1323,
  [SMALL_STATE(91)] = 1334,
  [SMALL_STATE(92)] = 1345,
  [SMALL_STATE(93)] = 1356,
  [SMALL_STATE(94)] = 1367,
  [SMALL_STATE(95)] = 1378,
  [SMALL_STATE(96)] = 1389,
  [SMALL_STATE(97)] = 1400,
  [SMALL_STATE(98)] = 1411,
  [SMALL_STATE(99)] = 1422,
  [SMALL_STATE(100)] = 1433,
  [SMALL_STATE(101)] = 1444,
  [SMALL_STATE(102)] = 1455,
  [SMALL_STATE(103)] = 1466,
  [SMALL_STATE(104)] = 1480,
  [SMALL_STATE(105)] = 1496,
  [SMALL_STATE(106)] = 1512,
  [SMALL_STATE(107)] = 1528,
  [SMALL_STATE(108)] = 1541,
  [SMALL_STATE(109)] = 1554,
  [SMALL_STATE(110)] = 1565,
  [SMALL_STATE(111)] = 1578,
  [SMALL_STATE(112)] = 1591,
  [SMALL_STATE(113)] = 1604,
  [SMALL_STATE(114)] = 1617,
  [SMALL_STATE(115)] = 1630,
  [SMALL_STATE(116)] = 1643,
  [SMALL_STATE(117)] = 1654,
  [SMALL_STATE(118)] = 1667,
  [SMALL_STATE(119)] = 1680,
  [SMALL_STATE(120)] = 1693,
  [SMALL_STATE(121)] = 1706,
  [SMALL_STATE(122)] = 1719,
  [SMALL_STATE(123)] = 1732,
  [SMALL_STATE(124)] = 1745,
  [SMALL_STATE(125)] = 1751,
  [SMALL_STATE(126)] = 1761,
  [SMALL_STATE(127)] = 1771,
  [SMALL_STATE(128)] = 1781,
  [SMALL_STATE(129)] = 1791,
  [SMALL_STATE(130)] = 1801,
  [SMALL_STATE(131)] = 1811,
  [SMALL_STATE(132)] = 1821,
  [SMALL_STATE(133)] = 1831,
  [SMALL_STATE(134)] = 1841,
  [SMALL_STATE(135)] = 1851,
  [SMALL_STATE(136)] = 1861,
  [SMALL_STATE(137)] = 1869,
  [SMALL_STATE(138)] = 1879,
  [SMALL_STATE(139)] = 1889,
  [SMALL_STATE(140)] = 1899,
  [SMALL_STATE(141)] = 1909,
  [SMALL_STATE(142)] = 1919,
  [SMALL_STATE(143)] = 1927,
  [SMALL_STATE(144)] = 1937,
  [SMALL_STATE(145)] = 1947,
  [SMALL_STATE(146)] = 1957,
  [SMALL_STATE(147)] = 1967,
  [SMALL_STATE(148)] = 1977,
  [SMALL_STATE(149)] = 1987,
  [SMALL_STATE(150)] = 1997,
  [SMALL_STATE(151)] = 2007,
  [SMALL_STATE(152)] = 2017,
  [SMALL_STATE(153)] = 2027,
  [SMALL_STATE(154)] = 2037,
  [SMALL_STATE(155)] = 2047,
  [SMALL_STATE(156)] = 2057,
  [SMALL_STATE(157)] = 2067,
  [SMALL_STATE(158)] = 2077,
  [SMALL_STATE(159)] = 2087,
  [SMALL_STATE(160)] = 2097,
  [SMALL_STATE(161)] = 2107,
  [SMALL_STATE(162)] = 2117,
  [SMALL_STATE(163)] = 2127,
  [SMALL_STATE(164)] = 2137,
  [SMALL_STATE(165)] = 2147,
  [SMALL_STATE(166)] = 2153,
  [SMALL_STATE(167)] = 2158,
  [SMALL_STATE(168)] = 2165,
  [SMALL_STATE(169)] = 2170,
  [SMALL_STATE(170)] = 2177,
  [SMALL_STATE(171)] = 2184,
  [SMALL_STATE(172)] = 2191,
  [SMALL_STATE(173)] = 2198,
  [SMALL_STATE(174)] = 2205,
  [SMALL_STATE(175)] = 2212,
  [SMALL_STATE(176)] = 2217,
  [SMALL_STATE(177)] = 2224,
  [SMALL_STATE(178)] = 2231,
  [SMALL_STATE(179)] = 2236,
  [SMALL_STATE(180)] = 2243,
  [SMALL_STATE(181)] = 2248,
  [SMALL_STATE(182)] = 2255,
  [SMALL_STATE(183)] = 2260,
  [SMALL_STATE(184)] = 2267,
  [SMALL_STATE(185)] = 2272,
  [SMALL_STATE(186)] = 2279,
  [SMALL_STATE(187)] = 2286,
  [SMALL_STATE(188)] = 2293,
  [SMALL_STATE(189)] = 2297,
  [SMALL_STATE(190)] = 2301,
  [SMALL_STATE(191)] = 2305,
  [SMALL_STATE(192)] = 2309,
  [SMALL_STATE(193)] = 2313,
  [SMALL_STATE(194)] = 2317,
  [SMALL_STATE(195)] = 2321,
  [SMALL_STATE(196)] = 2325,
  [SMALL_STATE(197)] = 2329,
  [SMALL_STATE(198)] = 2333,
  [SMALL_STATE(199)] = 2337,
  [SMALL_STATE(200)] = 2341,
  [SMALL_STATE(201)] = 2345,
  [SMALL_STATE(202)] = 2349,
  [SMALL_STATE(203)] = 2353,
  [SMALL_STATE(204)] = 2357,
  [SMALL_STATE(205)] = 2361,
  [SMALL_STATE(206)] = 2365,
  [SMALL_STATE(207)] = 2369,
  [SMALL_STATE(208)] = 2373,
  [SMALL_STATE(209)] = 2377,
  [SMALL_STATE(210)] = 2381,
  [SMALL_STATE(211)] = 2385,
  [SMALL_STATE(212)] = 2389,
  [SMALL_STATE(213)] = 2393,
  [SMALL_STATE(214)] = 2397,
  [SMALL_STATE(215)] = 2401,
  [SMALL_STATE(216)] = 2405,
  [SMALL_STATE(217)] = 2409,
  [SMALL_STATE(218)] = 2413,
  [SMALL_STATE(219)] = 2417,
  [SMALL_STATE(220)] = 2421,
  [SMALL_STATE(221)] = 2425,
  [SMALL_STATE(222)] = 2429,
  [SMALL_STATE(223)] = 2433,
  [SMALL_STATE(224)] = 2437,
  [SMALL_STATE(225)] = 2441,
  [SMALL_STATE(226)] = 2445,
  [SMALL_STATE(227)] = 2449,
  [SMALL_STATE(228)] = 2453,
  [SMALL_STATE(229)] = 2457,
  [SMALL_STATE(230)] = 2461,
  [SMALL_STATE(231)] = 2465,
  [SMALL_STATE(232)] = 2469,
  [SMALL_STATE(233)] = 2473,
  [SMALL_STATE(234)] = 2477,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 7),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 8),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 8), SHIFT_REPEAT(225),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 8), SHIFT_REPEAT(234),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 8), SHIFT_REPEAT(230),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 8), SHIFT_REPEAT(210),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 8), SHIFT_REPEAT(228),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 8), SHIFT_REPEAT(61),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 6, .production_id = 20),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_func_decl, 6, .production_id = 20),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 3, .production_id = 29),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 4, .production_id = 11),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_func_decl, 4, .production_id = 11),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 6, .production_id = 23),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_func_decl, 6, .production_id = 23),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 5, .production_id = 14),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_func_decl, 5, .production_id = 14),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 7, .production_id = 33),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_func_decl, 7, .production_id = 33),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 4, .production_id = 42),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 47),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_func_decl, 8, .production_id = 47),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 7, .production_id = 29),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 6, .production_id = 29),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 7, .production_id = 42),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 8, .production_id = 42),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 2, .production_id = 19),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 3, .production_id = 29),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 2, .production_id = 19),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 4, .production_id = 42),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 6, .production_id = 22),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 9, .production_id = 55),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 45),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 7, .production_id = 31),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 5, .production_id = 13),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 7, .production_id = 34),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 9, .production_id = 54),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 7, .production_id = 36),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 7, .production_id = 35),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 7, .production_id = 32),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 11, .production_id = 64),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 43),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 7, .production_id = 30),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 44),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringl, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 46),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 8, .production_id = 48),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 8, .production_id = 49),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_decl, 4, .production_id = 9),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 6, .production_id = 18),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 9, .production_id = 52),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 9, .production_id = 53),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 9, .production_id = 56),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 10, .production_id = 60),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 6, .production_id = 25),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 10, .production_id = 61),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 34),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 9, .production_id = 45),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 7, .production_id = 18),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 12, .production_id = 64),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 12, .production_id = 65),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 11, .production_id = 61),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 11, .production_id = 60),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 11, .production_id = 63),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 7, .production_id = 23),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 11, .production_id = 62),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 5, .production_id = 12),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_nodes, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 10, .production_id = 56),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 10, .production_id = 55),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 7, .production_id = 28),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 10, .production_id = 54),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 5, .production_id = 11),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 4, .production_id = 9),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 10, .production_id = 53),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 7, .production_id = 25),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 10, .production_id = 52),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 10, .production_id = 58),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 7, .production_id = 20),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_nodes, 1, .production_id = 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 8, .production_id = 37),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 8, .production_id = 38),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 10, .production_id = 57),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_nodes, 1, .production_id = 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_decl, 5, .production_id = 9),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 9, .production_id = 49),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 9, .production_id = 48),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_nodes, 1, .production_id = 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 9, .production_id = 47),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 8, .production_id = 40),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_nodes, 1, .production_id = 5),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 9, .production_id = 46),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 7, .production_id = 22),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 6, .production_id = 16),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_nodes, 1, .production_id = 6),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 9, .production_id = 44),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 9, .production_id = 43),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 30),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 7, .production_id = 26),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 31),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 9, .production_id = 51),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 9, .production_id = 50),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 6, .production_id = 13),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 32),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 8, .production_id = 36),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 8, .production_id = 35),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 6, .production_id = 14),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 33),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_external_func_decl_repeat1, 2, .production_id = 24), SHIFT_REPEAT(136),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_external_func_decl_repeat1, 2, .production_id = 24),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_fn_arg, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ktype_repeat1, 2), SHIFT_REPEAT(211),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ktype_repeat1, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_assoc, 1, .production_id = 10),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2), SHIFT_REPEAT(232),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat2, 2, .production_id = 17), SHIFT_REPEAT(170),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat2, 2, .production_id = 17),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_assoc_repeat1, 2), SHIFT_REPEAT(115),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_assoc_repeat1, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_decl_repeat1, 2, .production_id = 41), SHIFT_REPEAT(231),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_decl_repeat1, 2, .production_id = 41),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_external_func_decl_repeat1, 2, .production_id = 21),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_decl_repeat1, 4, .production_id = 59),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_assoc, 5, .production_id = 39),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat2, 2, .production_id = 15),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_assoc, 4, .production_id = 27),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [573] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_Kosu_external_scanner_create(void);
void tree_sitter_Kosu_external_scanner_destroy(void *);
bool tree_sitter_Kosu_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_Kosu_external_scanner_serialize(void *, char *);
void tree_sitter_Kosu_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Kosu(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_Kosu_external_scanner_create,
      tree_sitter_Kosu_external_scanner_destroy,
      tree_sitter_Kosu_external_scanner_scan,
      tree_sitter_Kosu_external_scanner_serialize,
      tree_sitter_Kosu_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
