#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 229
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 65

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
  sym_operator_decl = 14,
  sym_function_decl = 15,
  sym_const_decl = 16,
  anon_sym_COLON_COLON = 17,
  anon_sym_DOT = 18,
  anon_sym_STAR = 19,
  anon_sym__ = 20,
  anon_sym_DQUOTE = 21,
  sym_module_identifier = 22,
  sym_identifier = 23,
  sym_integer_literal = 24,
  sym__stringl = 25,
  sym_source_file = 26,
  sym_module_nodes = 27,
  sym_enum_decl = 28,
  sym_struct_decl = 29,
  sym_external_func_decl = 30,
  sym_syscall_decl = 31,
  sym_enum_assoc = 32,
  sym_ktype = 33,
  sym_ctype = 34,
  sym_external_fn_arg = 35,
  sym_stringl = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_enum_decl_repeat1 = 38,
  aux_sym_enum_decl_repeat2 = 39,
  aux_sym_struct_decl_repeat1 = 40,
  aux_sym_external_func_decl_repeat1 = 41,
  aux_sym_enum_assoc_repeat1 = 42,
  aux_sym_ktype_repeat1 = 43,
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
  [sym_operator_decl] = "operator_decl",
  [sym_function_decl] = "function_decl",
  [sym_const_decl] = "const_decl",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DOT] = ".",
  [anon_sym_STAR] = "*",
  [anon_sym__] = "_",
  [anon_sym_DQUOTE] = "\"",
  [sym_module_identifier] = "module_identifier",
  [sym_identifier] = "identifier",
  [sym_integer_literal] = "integer_literal",
  [sym__stringl] = "_stringl",
  [sym_source_file] = "source_file",
  [sym_module_nodes] = "module_nodes",
  [sym_enum_decl] = "enum_decl",
  [sym_struct_decl] = "struct_decl",
  [sym_external_func_decl] = "external_func_decl",
  [sym_syscall_decl] = "syscall_decl",
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
  [sym_operator_decl] = sym_operator_decl,
  [sym_function_decl] = sym_function_decl,
  [sym_const_decl] = sym_const_decl,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym__] = anon_sym__,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_module_identifier] = sym_module_identifier,
  [sym_identifier] = sym_identifier,
  [sym_integer_literal] = sym_integer_literal,
  [sym__stringl] = sym__stringl,
  [sym_source_file] = sym_source_file,
  [sym_module_nodes] = sym_module_nodes,
  [sym_enum_decl] = sym_enum_decl,
  [sym_struct_decl] = sym_struct_decl,
  [sym_external_func_decl] = sym_external_func_decl,
  [sym_syscall_decl] = sym_syscall_decl,
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
  [sym_operator_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_function_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_const_decl] = {
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
  [sym_identifier] = {
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
  field_enum_case_decl = 4,
  field_enum_cases = 5,
  field_enum_decl = 6,
  field_external_fn_decl = 7,
  field_external_fn_name = 8,
  field_field = 9,
  field_module_path = 10,
  field_name = 11,
  field_node_decl = 12,
  field_opcode = 13,
  field_parametric_type = 14,
  field_pointer = 15,
  field_return_type = 16,
  field_struct_decl = 17,
  field_syscall_decl = 18,
  field_variadic = 19,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_assoc_type] = "assoc_type",
  [field_c_name] = "c_name",
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
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 2},
  [12] = {.index = 13, .length = 2},
  [13] = {.index = 15, .length = 2},
  [14] = {.index = 17, .length = 1},
  [15] = {.index = 18, .length = 3},
  [16] = {.index = 21, .length = 2},
  [17] = {.index = 23, .length = 2},
  [18] = {.index = 25, .length = 2},
  [19] = {.index = 27, .length = 2},
  [20] = {.index = 29, .length = 1},
  [21] = {.index = 30, .length = 3},
  [22] = {.index = 33, .length = 3},
  [23] = {.index = 36, .length = 2},
  [24] = {.index = 38, .length = 2},
  [25] = {.index = 40, .length = 4},
  [26] = {.index = 44, .length = 2},
  [27] = {.index = 46, .length = 4},
  [28] = {.index = 50, .length = 2},
  [29] = {.index = 52, .length = 3},
  [30] = {.index = 55, .length = 3},
  [31] = {.index = 58, .length = 3},
  [32] = {.index = 61, .length = 3},
  [33] = {.index = 64, .length = 4},
  [34] = {.index = 68, .length = 3},
  [35] = {.index = 71, .length = 3},
  [36] = {.index = 74, .length = 5},
  [37] = {.index = 79, .length = 5},
  [38] = {.index = 84, .length = 3},
  [39] = {.index = 87, .length = 5},
  [40] = {.index = 92, .length = 2},
  [41] = {.index = 94, .length = 3},
  [42] = {.index = 97, .length = 3},
  [43] = {.index = 100, .length = 4},
  [44] = {.index = 104, .length = 4},
  [45] = {.index = 108, .length = 4},
  [46] = {.index = 112, .length = 4},
  [47] = {.index = 116, .length = 4},
  [48] = {.index = 120, .length = 4},
  [49] = {.index = 124, .length = 6},
  [50] = {.index = 130, .length = 6},
  [51] = {.index = 136, .length = 4},
  [52] = {.index = 140, .length = 4},
  [53] = {.index = 144, .length = 5},
  [54] = {.index = 149, .length = 5},
  [55] = {.index = 154, .length = 5},
  [56] = {.index = 159, .length = 7},
  [57] = {.index = 166, .length = 4},
  [58] = {.index = 170, .length = 3},
  [59] = {.index = 173, .length = 5},
  [60] = {.index = 178, .length = 5},
  [61] = {.index = 183, .length = 5},
  [62] = {.index = 188, .length = 4},
  [63] = {.index = 192, .length = 6},
  [64] = {.index = 198, .length = 5},
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
    {field_node_decl, 0, .inherited = true},
  [6] =
    {field_node_decl, 0, .inherited = true},
    {field_node_decl, 1, .inherited = true},
  [8] =
    {field_name, 1},
  [9] =
    {field_enum_case_decl, 0},
  [10] =
    {field_external_fn_name, 1},
  [11] =
    {field_enum_cases, 3},
    {field_name, 1},
  [13] =
    {field_external_fn_name, 1},
    {field_return_type, 4},
  [15] =
    {field_args, 3},
    {field_external_fn_name, 1},
  [17] =
    {field_enum_cases, 1},
  [18] =
    {field_enum_cases, 3},
    {field_enum_cases, 4, .inherited = true},
    {field_name, 1},
  [21] =
    {field_enum_cases, 0, .inherited = true},
    {field_enum_cases, 1, .inherited = true},
  [23] =
    {field_c_name, 5},
    {field_external_fn_name, 1},
  [25] =
    {field_pointer, 0},
    {field_pointer, 1},
  [27] =
    {field_external_fn_name, 1},
    {field_variadic, 4},
  [29] =
    {field_args, 1},
  [30] =
    {field_args, 3},
    {field_external_fn_name, 1},
    {field_return_type, 5},
  [33] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_external_fn_name, 1},
  [36] =
    {field_args, 0, .inherited = true},
    {field_args, 1, .inherited = true},
  [38] =
    {field_name, 1},
    {field_opcode, 5},
  [40] =
    {field_name, 1},
    {field_parametric_type, 2},
    {field_parametric_type, 3},
    {field_parametric_type, 4},
  [44] =
    {field_assoc_type, 2},
    {field_enum_case_decl, 0},
  [46] =
    {field_field, 3},
    {field_field, 4},
    {field_field, 5},
    {field_name, 1},
  [50] =
    {field_module_path, 0},
    {field_module_path, 1},
  [52] =
    {field_c_name, 6},
    {field_external_fn_name, 1},
    {field_return_type, 4},
  [55] =
    {field_external_fn_name, 1},
    {field_return_type, 6},
    {field_variadic, 4},
  [58] =
    {field_args, 3},
    {field_c_name, 6},
    {field_external_fn_name, 1},
  [61] =
    {field_args, 3},
    {field_external_fn_name, 1},
    {field_variadic, 5},
  [64] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_external_fn_name, 1},
    {field_return_type, 6},
  [68] =
    {field_name, 1},
    {field_opcode, 6},
    {field_return_type, 4},
  [71] =
    {field_args, 3},
    {field_name, 1},
    {field_opcode, 6},
  [74] =
    {field_enum_cases, 6},
    {field_name, 1},
    {field_parametric_type, 2},
    {field_parametric_type, 3},
    {field_parametric_type, 4},
  [79] =
    {field_name, 1},
    {field_parametric_type, 2},
    {field_parametric_type, 3},
    {field_parametric_type, 4},
    {field_parametric_type, 5},
  [84] =
    {field_assoc_type, 2},
    {field_assoc_type, 3},
    {field_enum_case_decl, 0},
  [87] =
    {field_field, 3},
    {field_field, 4},
    {field_field, 5},
    {field_field, 6, .inherited = true},
    {field_name, 1},
  [92] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [94] =
    {field_module_path, 0},
    {field_module_path, 1},
    {field_module_path, 2},
  [97] =
    {field_c_name, 7},
    {field_external_fn_name, 1},
    {field_variadic, 4},
  [100] =
    {field_args, 3},
    {field_c_name, 7},
    {field_external_fn_name, 1},
    {field_return_type, 5},
  [104] =
    {field_args, 3},
    {field_external_fn_name, 1},
    {field_return_type, 7},
    {field_variadic, 5},
  [108] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_c_name, 7},
    {field_external_fn_name, 1},
  [112] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_external_fn_name, 1},
    {field_variadic, 6},
  [116] =
    {field_args, 3},
    {field_name, 1},
    {field_opcode, 7},
    {field_return_type, 5},
  [120] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_name, 1},
    {field_opcode, 7},
  [124] =
    {field_enum_cases, 6},
    {field_enum_cases, 7, .inherited = true},
    {field_name, 1},
    {field_parametric_type, 2},
    {field_parametric_type, 3},
    {field_parametric_type, 4},
  [130] =
    {field_enum_cases, 7},
    {field_name, 1},
    {field_parametric_type, 2},
    {field_parametric_type, 3},
    {field_parametric_type, 4},
    {field_parametric_type, 5},
  [136] =
    {field_c_name, 8},
    {field_external_fn_name, 1},
    {field_return_type, 6},
    {field_variadic, 4},
  [140] =
    {field_args, 3},
    {field_c_name, 8},
    {field_external_fn_name, 1},
    {field_variadic, 5},
  [144] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_c_name, 8},
    {field_external_fn_name, 1},
    {field_return_type, 6},
  [149] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_external_fn_name, 1},
    {field_return_type, 8},
    {field_variadic, 6},
  [154] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_name, 1},
    {field_opcode, 8},
    {field_return_type, 6},
  [159] =
    {field_enum_cases, 7},
    {field_enum_cases, 8, .inherited = true},
    {field_name, 1},
    {field_parametric_type, 2},
    {field_parametric_type, 3},
    {field_parametric_type, 4},
    {field_parametric_type, 5},
  [166] =
    {field_field, 6},
    {field_field, 7},
    {field_field, 8},
    {field_name, 1},
  [170] =
    {field_field, 1},
    {field_field, 2},
    {field_field, 3},
  [173] =
    {field_args, 3},
    {field_c_name, 9},
    {field_external_fn_name, 1},
    {field_return_type, 7},
    {field_variadic, 5},
  [178] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_c_name, 9},
    {field_external_fn_name, 1},
    {field_variadic, 6},
  [183] =
    {field_field, 6},
    {field_field, 7},
    {field_field, 8},
    {field_field, 9, .inherited = true},
    {field_name, 1},
  [188] =
    {field_field, 7},
    {field_field, 8},
    {field_field, 9},
    {field_name, 1},
  [192] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_c_name, 10},
    {field_external_fn_name, 1},
    {field_return_type, 8},
    {field_variadic, 6},
  [198] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '0') ADVANCE(106);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '_') ADVANCE(71);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('a' <= lookahead && lookahead <= '|')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(73);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '_') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(73);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(67);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'y') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 37:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(107);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 40:
      if (eof) ADVANCE(42);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(73);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(67);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_external);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_syscall);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_syscall);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_operator_decl);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_operator_decl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_function_decl);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_function_decl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_const_decl);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_const_decl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'x') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == 'y') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'o') ADVANCE(38);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(37);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 40},
  [3] = {.lex_state = 41},
  [4] = {.lex_state = 40},
  [5] = {.lex_state = 41},
  [6] = {.lex_state = 41},
  [7] = {.lex_state = 40},
  [8] = {.lex_state = 41},
  [9] = {.lex_state = 41},
  [10] = {.lex_state = 40},
  [11] = {.lex_state = 40},
  [12] = {.lex_state = 41},
  [13] = {.lex_state = 40},
  [14] = {.lex_state = 40},
  [15] = {.lex_state = 40},
  [16] = {.lex_state = 40},
  [17] = {.lex_state = 40},
  [18] = {.lex_state = 40},
  [19] = {.lex_state = 40},
  [20] = {.lex_state = 40},
  [21] = {.lex_state = 40},
  [22] = {.lex_state = 40},
  [23] = {.lex_state = 40},
  [24] = {.lex_state = 40},
  [25] = {.lex_state = 40},
  [26] = {.lex_state = 40},
  [27] = {.lex_state = 40},
  [28] = {.lex_state = 40},
  [29] = {.lex_state = 40},
  [30] = {.lex_state = 40},
  [31] = {.lex_state = 40},
  [32] = {.lex_state = 40},
  [33] = {.lex_state = 40},
  [34] = {.lex_state = 40},
  [35] = {.lex_state = 40},
  [36] = {.lex_state = 40},
  [37] = {.lex_state = 40},
  [38] = {.lex_state = 40},
  [39] = {.lex_state = 40},
  [40] = {.lex_state = 40},
  [41] = {.lex_state = 40},
  [42] = {.lex_state = 40},
  [43] = {.lex_state = 40},
  [44] = {.lex_state = 40},
  [45] = {.lex_state = 40},
  [46] = {.lex_state = 40},
  [47] = {.lex_state = 40},
  [48] = {.lex_state = 40},
  [49] = {.lex_state = 40},
  [50] = {.lex_state = 40},
  [51] = {.lex_state = 40},
  [52] = {.lex_state = 40},
  [53] = {.lex_state = 40},
  [54] = {.lex_state = 40},
  [55] = {.lex_state = 40},
  [56] = {.lex_state = 40},
  [57] = {.lex_state = 40},
  [58] = {.lex_state = 40},
  [59] = {.lex_state = 40},
  [60] = {.lex_state = 40},
  [61] = {.lex_state = 40},
  [62] = {.lex_state = 40},
  [63] = {.lex_state = 40},
  [64] = {.lex_state = 40},
  [65] = {.lex_state = 40},
  [66] = {.lex_state = 40},
  [67] = {.lex_state = 40},
  [68] = {.lex_state = 40},
  [69] = {.lex_state = 40},
  [70] = {.lex_state = 40},
  [71] = {.lex_state = 40},
  [72] = {.lex_state = 40},
  [73] = {.lex_state = 40},
  [74] = {.lex_state = 40},
  [75] = {.lex_state = 40},
  [76] = {.lex_state = 40},
  [77] = {.lex_state = 40},
  [78] = {.lex_state = 40},
  [79] = {.lex_state = 40},
  [80] = {.lex_state = 40},
  [81] = {.lex_state = 40},
  [82] = {.lex_state = 40},
  [83] = {.lex_state = 40},
  [84] = {.lex_state = 40},
  [85] = {.lex_state = 40},
  [86] = {.lex_state = 40},
  [87] = {.lex_state = 40},
  [88] = {.lex_state = 40},
  [89] = {.lex_state = 40},
  [90] = {.lex_state = 40},
  [91] = {.lex_state = 40},
  [92] = {.lex_state = 40},
  [93] = {.lex_state = 40},
  [94] = {.lex_state = 40},
  [95] = {.lex_state = 40},
  [96] = {.lex_state = 40},
  [97] = {.lex_state = 40},
  [98] = {.lex_state = 40},
  [99] = {.lex_state = 40},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 40},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 40},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 40},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 40},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 40},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 40},
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
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 41},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0, .external_lex_state = 1},
  [200] = {.lex_state = 41},
  [201] = {.lex_state = 41},
  [202] = {.lex_state = 41},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 41},
  [207] = {.lex_state = 41},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 41},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 41},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 2},
  [228] = {.lex_state = 2},
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
    [sym_operator_decl] = ACTIONS(1),
    [sym_function_decl] = ACTIONS(1),
    [sym_const_decl] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_module_identifier] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym__stringl] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(224),
    [sym_module_nodes] = STATE(92),
    [sym_enum_decl] = STATE(91),
    [sym_struct_decl] = STATE(85),
    [sym_external_func_decl] = STATE(79),
    [sym_syscall_decl] = STATE(77),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_struct] = ACTIONS(7),
    [anon_sym_external] = ACTIONS(9),
    [anon_sym_syscall] = ACTIONS(11),
    [sym_operator_decl] = ACTIONS(13),
    [sym_function_decl] = ACTIONS(13),
    [sym_const_decl] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(20), 1,
      anon_sym_struct,
    ACTIONS(23), 1,
      anon_sym_external,
    ACTIONS(26), 1,
      anon_sym_syscall,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(77), 1,
      sym_syscall_decl,
    STATE(79), 1,
      sym_external_func_decl,
    STATE(85), 1,
      sym_struct_decl,
    STATE(91), 1,
      sym_enum_decl,
    STATE(92), 1,
      sym_module_nodes,
    ACTIONS(29), 3,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [39] = 8,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      anon_sym_EQ,
    ACTIONS(38), 1,
      anon_sym_SEMI,
    ACTIONS(40), 1,
      anon_sym_STAR,
    ACTIONS(42), 1,
      sym_module_identifier,
    ACTIONS(44), 1,
      sym_identifier,
    STATE(28), 1,
      sym_ctype,
    ACTIONS(34), 7,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [70] = 2,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(46), 13,
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
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [89] = 8,
    ACTIONS(40), 1,
      anon_sym_STAR,
    ACTIONS(42), 1,
      sym_module_identifier,
    ACTIONS(44), 1,
      sym_identifier,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      anon_sym_EQ,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      sym_ctype,
    ACTIONS(52), 7,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [120] = 8,
    ACTIONS(40), 1,
      anon_sym_STAR,
    ACTIONS(42), 1,
      sym_module_identifier,
    ACTIONS(44), 1,
      sym_identifier,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      anon_sym_EQ,
    ACTIONS(64), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym_ctype,
    ACTIONS(60), 7,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [151] = 12,
    ACTIONS(5), 1,
      anon_sym_enum,
    ACTIONS(7), 1,
      anon_sym_struct,
    ACTIONS(9), 1,
      anon_sym_external,
    ACTIONS(11), 1,
      anon_sym_syscall,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(77), 1,
      sym_syscall_decl,
    STATE(79), 1,
      sym_external_func_decl,
    STATE(85), 1,
      sym_struct_decl,
    STATE(91), 1,
      sym_enum_decl,
    STATE(92), 1,
      sym_module_nodes,
    ACTIONS(13), 3,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [190] = 8,
    ACTIONS(40), 1,
      anon_sym_STAR,
    ACTIONS(42), 1,
      sym_module_identifier,
    ACTIONS(44), 1,
      sym_identifier,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      anon_sym_EQ,
    ACTIONS(74), 1,
      anon_sym_SEMI,
    STATE(26), 1,
      sym_ctype,
    ACTIONS(70), 7,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [221] = 8,
    ACTIONS(40), 1,
      anon_sym_STAR,
    ACTIONS(42), 1,
      sym_module_identifier,
    ACTIONS(44), 1,
      sym_identifier,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 1,
      anon_sym_EQ,
    ACTIONS(82), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_ctype,
    ACTIONS(78), 7,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [252] = 2,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 13,
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
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [271] = 2,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 13,
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
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [290] = 8,
    ACTIONS(40), 1,
      anon_sym_STAR,
    ACTIONS(42), 1,
      sym_module_identifier,
    ACTIONS(44), 1,
      sym_identifier,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      anon_sym_EQ,
    ACTIONS(98), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      sym_ctype,
    ACTIONS(94), 7,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [321] = 1,
    ACTIONS(100), 13,
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
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [337] = 1,
    ACTIONS(102), 13,
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
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [353] = 1,
    ACTIONS(104), 13,
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
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [369] = 1,
    ACTIONS(106), 13,
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
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [385] = 1,
    ACTIONS(108), 13,
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
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [401] = 1,
    ACTIONS(110), 13,
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
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [417] = 1,
    ACTIONS(112), 13,
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
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [433] = 1,
    ACTIONS(114), 12,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [448] = 1,
    ACTIONS(116), 12,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [463] = 1,
    ACTIONS(118), 12,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [478] = 1,
    ACTIONS(120), 12,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [493] = 3,
    ACTIONS(124), 1,
      anon_sym_EQ,
    ACTIONS(126), 1,
      anon_sym_SEMI,
    ACTIONS(122), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [510] = 3,
    ACTIONS(130), 1,
      anon_sym_EQ,
    ACTIONS(132), 1,
      anon_sym_SEMI,
    ACTIONS(128), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [527] = 3,
    ACTIONS(136), 1,
      anon_sym_EQ,
    ACTIONS(138), 1,
      anon_sym_SEMI,
    ACTIONS(134), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [544] = 3,
    ACTIONS(142), 1,
      anon_sym_EQ,
    ACTIONS(144), 1,
      anon_sym_SEMI,
    ACTIONS(140), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [561] = 3,
    ACTIONS(148), 1,
      anon_sym_EQ,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    ACTIONS(146), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [578] = 3,
    ACTIONS(154), 1,
      anon_sym_EQ,
    ACTIONS(156), 1,
      anon_sym_SEMI,
    ACTIONS(152), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [595] = 2,
    ACTIONS(160), 1,
      anon_sym_SEMI,
    ACTIONS(158), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [609] = 2,
    ACTIONS(164), 1,
      anon_sym_SEMI,
    ACTIONS(162), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [623] = 2,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    ACTIONS(166), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [637] = 2,
    ACTIONS(172), 1,
      anon_sym_SEMI,
    ACTIONS(170), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [651] = 2,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    ACTIONS(174), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [665] = 2,
    ACTIONS(180), 1,
      anon_sym_SEMI,
    ACTIONS(178), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [679] = 2,
    ACTIONS(184), 1,
      anon_sym_SEMI,
    ACTIONS(182), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [693] = 2,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    ACTIONS(186), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [707] = 1,
    ACTIONS(190), 9,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_SEMI,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [719] = 2,
    ACTIONS(194), 1,
      anon_sym_SEMI,
    ACTIONS(192), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [733] = 2,
    ACTIONS(198), 1,
      anon_sym_SEMI,
    ACTIONS(196), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [747] = 2,
    ACTIONS(202), 1,
      anon_sym_SEMI,
    ACTIONS(200), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [761] = 2,
    ACTIONS(206), 1,
      anon_sym_SEMI,
    ACTIONS(204), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [775] = 2,
    ACTIONS(210), 1,
      anon_sym_SEMI,
    ACTIONS(208), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [789] = 2,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    ACTIONS(212), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [803] = 2,
    ACTIONS(218), 1,
      anon_sym_SEMI,
    ACTIONS(216), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [817] = 2,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    ACTIONS(220), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [831] = 2,
    ACTIONS(226), 1,
      anon_sym_SEMI,
    ACTIONS(224), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [845] = 2,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(228), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [859] = 1,
    ACTIONS(232), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [870] = 1,
    ACTIONS(234), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [881] = 1,
    ACTIONS(236), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [892] = 1,
    ACTIONS(238), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [903] = 1,
    ACTIONS(240), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [914] = 1,
    ACTIONS(242), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [925] = 1,
    ACTIONS(244), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [936] = 1,
    ACTIONS(246), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [947] = 1,
    ACTIONS(248), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [958] = 1,
    ACTIONS(250), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [969] = 1,
    ACTIONS(252), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [980] = 1,
    ACTIONS(254), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [991] = 1,
    ACTIONS(256), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1002] = 1,
    ACTIONS(258), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1013] = 1,
    ACTIONS(260), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1024] = 1,
    ACTIONS(262), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1035] = 1,
    ACTIONS(264), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1046] = 1,
    ACTIONS(266), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1057] = 1,
    ACTIONS(268), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1068] = 1,
    ACTIONS(270), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1079] = 1,
    ACTIONS(272), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1090] = 1,
    ACTIONS(274), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1101] = 1,
    ACTIONS(276), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1112] = 1,
    ACTIONS(278), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1123] = 1,
    ACTIONS(280), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1134] = 1,
    ACTIONS(282), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1145] = 1,
    ACTIONS(284), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1156] = 1,
    ACTIONS(286), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1167] = 1,
    ACTIONS(288), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1178] = 1,
    ACTIONS(290), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1189] = 1,
    ACTIONS(292), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1200] = 1,
    ACTIONS(294), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1211] = 1,
    ACTIONS(296), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1222] = 1,
    ACTIONS(298), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1233] = 1,
    ACTIONS(300), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1244] = 1,
    ACTIONS(302), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1255] = 1,
    ACTIONS(304), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1266] = 1,
    ACTIONS(306), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1277] = 1,
    ACTIONS(308), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1288] = 1,
    ACTIONS(310), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1299] = 1,
    ACTIONS(312), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1310] = 1,
    ACTIONS(314), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1321] = 1,
    ACTIONS(316), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1332] = 1,
    ACTIONS(318), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1343] = 1,
    ACTIONS(320), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1354] = 1,
    ACTIONS(322), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1365] = 1,
    ACTIONS(324), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1376] = 1,
    ACTIONS(326), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1387] = 1,
    ACTIONS(328), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1398] = 1,
    ACTIONS(330), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1409] = 1,
    ACTIONS(332), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_syscall,
      sym_operator_decl,
      sym_function_decl,
      sym_const_decl,
  [1420] = 5,
    ACTIONS(40), 1,
      anon_sym_STAR,
    ACTIONS(42), 1,
      sym_module_identifier,
    ACTIONS(334), 1,
      anon_sym_EQ,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(190), 1,
      sym_ctype,
  [1436] = 4,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    ACTIONS(340), 1,
      anon_sym_EQ,
    STATE(105), 1,
      sym_external_fn_arg,
    ACTIONS(342), 2,
      anon_sym__,
      sym_identifier,
  [1450] = 5,
    ACTIONS(40), 1,
      anon_sym_STAR,
    ACTIONS(42), 1,
      sym_module_identifier,
    ACTIONS(336), 1,
      sym_identifier,
    ACTIONS(344), 1,
      anon_sym_EQ,
    STATE(222), 1,
      sym_ctype,
  [1466] = 5,
    ACTIONS(40), 1,
      anon_sym_STAR,
    ACTIONS(42), 1,
      sym_module_identifier,
    ACTIONS(336), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_EQ,
    STATE(208), 1,
      sym_ctype,
  [1482] = 4,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    ACTIONS(352), 1,
      anon_sym_EQ,
    STATE(109), 1,
      aux_sym_external_func_decl_repeat1,
  [1495] = 4,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    ACTIONS(356), 1,
      anon_sym_EQ,
    STATE(104), 1,
      aux_sym_external_func_decl_repeat1,
  [1508] = 4,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      sym_module_identifier,
    ACTIONS(362), 1,
      sym_identifier,
    STATE(181), 1,
      sym_ktype,
  [1521] = 3,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      sym_external_fn_arg,
    ACTIONS(342), 2,
      anon_sym__,
      sym_identifier,
  [1532] = 4,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      sym_module_identifier,
    ACTIONS(362), 1,
      sym_identifier,
    STATE(121), 1,
      sym_ktype,
  [1545] = 3,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_external_func_decl_repeat1,
    ACTIONS(369), 2,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1556] = 4,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      sym_module_identifier,
    ACTIONS(362), 1,
      sym_identifier,
    STATE(15), 1,
      sym_ktype,
  [1569] = 4,
    ACTIONS(40), 1,
      anon_sym_STAR,
    ACTIONS(42), 1,
      sym_module_identifier,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(134), 1,
      sym_ctype,
  [1582] = 4,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      sym_module_identifier,
    ACTIONS(362), 1,
      sym_identifier,
    STATE(131), 1,
      sym_ktype,
  [1595] = 4,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      sym_module_identifier,
    ACTIONS(362), 1,
      sym_identifier,
    STATE(144), 1,
      sym_ktype,
  [1608] = 4,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      sym_module_identifier,
    ACTIONS(362), 1,
      sym_identifier,
    STATE(129), 1,
      sym_ktype,
  [1621] = 4,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      sym_module_identifier,
    ACTIONS(362), 1,
      sym_identifier,
    STATE(173), 1,
      sym_ktype,
  [1634] = 4,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      sym_module_identifier,
    ACTIONS(362), 1,
      sym_identifier,
    STATE(22), 1,
      sym_ktype,
  [1647] = 4,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      sym_module_identifier,
    ACTIONS(362), 1,
      sym_identifier,
    STATE(154), 1,
      sym_ktype,
  [1660] = 4,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      sym_module_identifier,
    ACTIONS(362), 1,
      sym_identifier,
    STATE(160), 1,
      sym_ktype,
  [1673] = 4,
    ACTIONS(358), 1,
      anon_sym_STAR,
    ACTIONS(360), 1,
      sym_module_identifier,
    ACTIONS(362), 1,
      sym_identifier,
    STATE(145), 1,
      sym_ktype,
  [1686] = 1,
    ACTIONS(371), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1692] = 3,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      aux_sym_enum_assoc_repeat1,
  [1702] = 3,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      aux_sym_enum_decl_repeat1,
  [1712] = 3,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    ACTIONS(383), 1,
      sym_identifier,
    STATE(142), 1,
      sym_enum_assoc,
  [1722] = 2,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1730] = 3,
    ACTIONS(389), 1,
      anon_sym_COLON_COLON,
    ACTIONS(392), 1,
      anon_sym_DOT,
    STATE(125), 1,
      aux_sym_ktype_repeat1,
  [1740] = 3,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    STATE(140), 1,
      aux_sym_enum_decl_repeat2,
  [1750] = 3,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      aux_sym_enum_decl_repeat2,
  [1760] = 3,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      aux_sym_enum_decl_repeat1,
  [1770] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      aux_sym_struct_decl_repeat1,
  [1780] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    STATE(153), 1,
      aux_sym_struct_decl_repeat1,
  [1790] = 3,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      aux_sym_enum_assoc_repeat1,
  [1800] = 3,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_external_func_decl_repeat1,
  [1810] = 3,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym_enum_decl_repeat1,
  [1820] = 1,
    ACTIONS(414), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1826] = 3,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      aux_sym_enum_decl_repeat2,
  [1836] = 3,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym_enum_decl_repeat1,
  [1846] = 3,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym_enum_decl_repeat1,
  [1856] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    STATE(153), 1,
      aux_sym_struct_decl_repeat1,
  [1866] = 3,
    ACTIONS(427), 1,
      anon_sym_COLON_COLON,
    ACTIONS(429), 1,
      anon_sym_DOT,
    STATE(125), 1,
      aux_sym_ktype_repeat1,
  [1876] = 3,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(431), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      aux_sym_enum_decl_repeat2,
  [1886] = 3,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      aux_sym_enum_assoc_repeat1,
  [1896] = 3,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      aux_sym_enum_decl_repeat2,
  [1906] = 3,
    ACTIONS(383), 1,
      sym_identifier,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    STATE(127), 1,
      sym_enum_assoc,
  [1916] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(439), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      aux_sym_struct_decl_repeat1,
  [1926] = 3,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      aux_sym_enum_assoc_repeat1,
  [1936] = 3,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      aux_sym_enum_assoc_repeat1,
  [1946] = 3,
    ACTIONS(427), 1,
      anon_sym_COLON_COLON,
    ACTIONS(445), 1,
      anon_sym_DOT,
    STATE(139), 1,
      aux_sym_ktype_repeat1,
  [1956] = 3,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      aux_sym_enum_assoc_repeat1,
  [1966] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    STATE(153), 1,
      aux_sym_struct_decl_repeat1,
  [1976] = 3,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      aux_sym_enum_assoc_repeat1,
  [1986] = 3,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(456), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      aux_sym_enum_decl_repeat2,
  [1996] = 3,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      aux_sym_enum_assoc_repeat1,
  [2006] = 3,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
    STATE(153), 1,
      aux_sym_struct_decl_repeat1,
  [2016] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
    STATE(138), 1,
      aux_sym_struct_decl_repeat1,
  [2026] = 2,
    STATE(120), 1,
      sym_external_fn_arg,
    ACTIONS(342), 2,
      anon_sym__,
      sym_identifier,
  [2034] = 3,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_external_func_decl_repeat1,
  [2044] = 3,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      aux_sym_enum_decl_repeat2,
  [2054] = 3,
    ACTIONS(383), 1,
      sym_identifier,
    ACTIONS(474), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      sym_enum_assoc,
  [2064] = 3,
    ACTIONS(427), 1,
      anon_sym_COLON_COLON,
    ACTIONS(476), 1,
      anon_sym_DOT,
    STATE(125), 1,
      aux_sym_ktype_repeat1,
  [2074] = 3,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_enum_assoc_repeat1,
  [2084] = 3,
    ACTIONS(427), 1,
      anon_sym_COLON_COLON,
    ACTIONS(480), 1,
      anon_sym_DOT,
    STATE(159), 1,
      aux_sym_ktype_repeat1,
  [2094] = 2,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_stringl,
  [2101] = 2,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym_stringl,
  [2108] = 2,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      sym_stringl,
  [2115] = 2,
    ACTIONS(484), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
  [2122] = 2,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
  [2129] = 1,
    ACTIONS(492), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2134] = 1,
    ACTIONS(423), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2139] = 2,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      sym_stringl,
  [2146] = 1,
    ACTIONS(392), 2,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
  [2151] = 2,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym_stringl,
  [2158] = 2,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      sym_stringl,
  [2165] = 1,
    ACTIONS(494), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2170] = 2,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      sym_stringl,
  [2177] = 2,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      sym_stringl,
  [2184] = 2,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      sym_stringl,
  [2191] = 2,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_stringl,
  [2198] = 1,
    ACTIONS(496), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2203] = 2,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      sym_stringl,
  [2210] = 1,
    ACTIONS(498), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2215] = 1,
    ACTIONS(450), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2220] = 2,
    ACTIONS(383), 1,
      sym_identifier,
    STATE(178), 1,
      sym_enum_assoc,
  [2227] = 2,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_stringl,
  [2234] = 1,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
  [2238] = 1,
    ACTIONS(502), 1,
      sym_integer_literal,
  [2242] = 1,
    ACTIONS(504), 1,
      anon_sym_COLON,
  [2246] = 1,
    ACTIONS(506), 1,
      sym_identifier,
  [2250] = 1,
    ACTIONS(508), 1,
      sym_module_identifier,
  [2254] = 1,
    ACTIONS(510), 1,
      sym_identifier,
  [2258] = 1,
    ACTIONS(512), 1,
      anon_sym_EQ,
  [2262] = 1,
    ACTIONS(514), 1,
      sym_integer_literal,
  [2266] = 1,
    ACTIONS(516), 1,
      anon_sym_LBRACE,
  [2270] = 1,
    ACTIONS(518), 1,
      sym_integer_literal,
  [2274] = 1,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
  [2278] = 1,
    ACTIONS(522), 1,
      anon_sym_LBRACE,
  [2282] = 1,
    ACTIONS(524), 1,
      sym_identifier,
  [2286] = 1,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
  [2290] = 1,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
  [2294] = 1,
    ACTIONS(530), 1,
      sym__stringl,
  [2298] = 1,
    ACTIONS(532), 1,
      anon_sym_DOT_DOT_DOT,
  [2302] = 1,
    ACTIONS(534), 1,
      anon_sym_COLON,
  [2306] = 1,
    ACTIONS(536), 1,
      anon_sym_DOT_DOT_DOT,
  [2310] = 1,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
  [2314] = 1,
    ACTIONS(540), 1,
      sym_integer_literal,
  [2318] = 1,
    ACTIONS(542), 1,
      sym_identifier,
  [2322] = 1,
    ACTIONS(544), 1,
      anon_sym_COLON,
  [2326] = 1,
    ACTIONS(546), 1,
      anon_sym_COLON,
  [2330] = 1,
    ACTIONS(548), 1,
      anon_sym_EQ,
  [2334] = 1,
    ACTIONS(550), 1,
      sym_integer_literal,
  [2338] = 1,
    ACTIONS(552), 1,
      sym_identifier,
  [2342] = 1,
    ACTIONS(554), 1,
      anon_sym_DOT_DOT_DOT,
  [2346] = 1,
    ACTIONS(556), 1,
      sym_integer_literal,
  [2350] = 1,
    ACTIONS(558), 1,
      sym_identifier,
  [2354] = 1,
    ACTIONS(560), 1,
      sym_identifier,
  [2358] = 1,
    ACTIONS(562), 1,
      sym_identifier,
  [2362] = 1,
    ACTIONS(564), 1,
      anon_sym_DQUOTE,
  [2366] = 1,
    ACTIONS(566), 1,
      sym_identifier,
  [2370] = 1,
    ACTIONS(568), 1,
      sym_identifier,
  [2374] = 1,
    ACTIONS(570), 1,
      sym_identifier,
  [2378] = 1,
    ACTIONS(572), 1,
      anon_sym_LPAREN,
  [2382] = 1,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
  [2386] = 1,
    ACTIONS(576), 1,
      anon_sym_EQ,
  [2390] = 1,
    ACTIONS(578), 1,
      sym_identifier,
  [2394] = 1,
    ACTIONS(580), 1,
      ts_builtin_sym_end,
  [2398] = 1,
    ACTIONS(582), 1,
      anon_sym_COLON,
  [2402] = 1,
    ACTIONS(584), 1,
      sym_identifier,
  [2406] = 1,
    ACTIONS(586), 1,
      sym_identifier,
  [2410] = 1,
    ACTIONS(588), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 89,
  [SMALL_STATE(6)] = 120,
  [SMALL_STATE(7)] = 151,
  [SMALL_STATE(8)] = 190,
  [SMALL_STATE(9)] = 221,
  [SMALL_STATE(10)] = 252,
  [SMALL_STATE(11)] = 271,
  [SMALL_STATE(12)] = 290,
  [SMALL_STATE(13)] = 321,
  [SMALL_STATE(14)] = 337,
  [SMALL_STATE(15)] = 353,
  [SMALL_STATE(16)] = 369,
  [SMALL_STATE(17)] = 385,
  [SMALL_STATE(18)] = 401,
  [SMALL_STATE(19)] = 417,
  [SMALL_STATE(20)] = 433,
  [SMALL_STATE(21)] = 448,
  [SMALL_STATE(22)] = 463,
  [SMALL_STATE(23)] = 478,
  [SMALL_STATE(24)] = 493,
  [SMALL_STATE(25)] = 510,
  [SMALL_STATE(26)] = 527,
  [SMALL_STATE(27)] = 544,
  [SMALL_STATE(28)] = 561,
  [SMALL_STATE(29)] = 578,
  [SMALL_STATE(30)] = 595,
  [SMALL_STATE(31)] = 609,
  [SMALL_STATE(32)] = 623,
  [SMALL_STATE(33)] = 637,
  [SMALL_STATE(34)] = 651,
  [SMALL_STATE(35)] = 665,
  [SMALL_STATE(36)] = 679,
  [SMALL_STATE(37)] = 693,
  [SMALL_STATE(38)] = 707,
  [SMALL_STATE(39)] = 719,
  [SMALL_STATE(40)] = 733,
  [SMALL_STATE(41)] = 747,
  [SMALL_STATE(42)] = 761,
  [SMALL_STATE(43)] = 775,
  [SMALL_STATE(44)] = 789,
  [SMALL_STATE(45)] = 803,
  [SMALL_STATE(46)] = 817,
  [SMALL_STATE(47)] = 831,
  [SMALL_STATE(48)] = 845,
  [SMALL_STATE(49)] = 859,
  [SMALL_STATE(50)] = 870,
  [SMALL_STATE(51)] = 881,
  [SMALL_STATE(52)] = 892,
  [SMALL_STATE(53)] = 903,
  [SMALL_STATE(54)] = 914,
  [SMALL_STATE(55)] = 925,
  [SMALL_STATE(56)] = 936,
  [SMALL_STATE(57)] = 947,
  [SMALL_STATE(58)] = 958,
  [SMALL_STATE(59)] = 969,
  [SMALL_STATE(60)] = 980,
  [SMALL_STATE(61)] = 991,
  [SMALL_STATE(62)] = 1002,
  [SMALL_STATE(63)] = 1013,
  [SMALL_STATE(64)] = 1024,
  [SMALL_STATE(65)] = 1035,
  [SMALL_STATE(66)] = 1046,
  [SMALL_STATE(67)] = 1057,
  [SMALL_STATE(68)] = 1068,
  [SMALL_STATE(69)] = 1079,
  [SMALL_STATE(70)] = 1090,
  [SMALL_STATE(71)] = 1101,
  [SMALL_STATE(72)] = 1112,
  [SMALL_STATE(73)] = 1123,
  [SMALL_STATE(74)] = 1134,
  [SMALL_STATE(75)] = 1145,
  [SMALL_STATE(76)] = 1156,
  [SMALL_STATE(77)] = 1167,
  [SMALL_STATE(78)] = 1178,
  [SMALL_STATE(79)] = 1189,
  [SMALL_STATE(80)] = 1200,
  [SMALL_STATE(81)] = 1211,
  [SMALL_STATE(82)] = 1222,
  [SMALL_STATE(83)] = 1233,
  [SMALL_STATE(84)] = 1244,
  [SMALL_STATE(85)] = 1255,
  [SMALL_STATE(86)] = 1266,
  [SMALL_STATE(87)] = 1277,
  [SMALL_STATE(88)] = 1288,
  [SMALL_STATE(89)] = 1299,
  [SMALL_STATE(90)] = 1310,
  [SMALL_STATE(91)] = 1321,
  [SMALL_STATE(92)] = 1332,
  [SMALL_STATE(93)] = 1343,
  [SMALL_STATE(94)] = 1354,
  [SMALL_STATE(95)] = 1365,
  [SMALL_STATE(96)] = 1376,
  [SMALL_STATE(97)] = 1387,
  [SMALL_STATE(98)] = 1398,
  [SMALL_STATE(99)] = 1409,
  [SMALL_STATE(100)] = 1420,
  [SMALL_STATE(101)] = 1436,
  [SMALL_STATE(102)] = 1450,
  [SMALL_STATE(103)] = 1466,
  [SMALL_STATE(104)] = 1482,
  [SMALL_STATE(105)] = 1495,
  [SMALL_STATE(106)] = 1508,
  [SMALL_STATE(107)] = 1521,
  [SMALL_STATE(108)] = 1532,
  [SMALL_STATE(109)] = 1545,
  [SMALL_STATE(110)] = 1556,
  [SMALL_STATE(111)] = 1569,
  [SMALL_STATE(112)] = 1582,
  [SMALL_STATE(113)] = 1595,
  [SMALL_STATE(114)] = 1608,
  [SMALL_STATE(115)] = 1621,
  [SMALL_STATE(116)] = 1634,
  [SMALL_STATE(117)] = 1647,
  [SMALL_STATE(118)] = 1660,
  [SMALL_STATE(119)] = 1673,
  [SMALL_STATE(120)] = 1686,
  [SMALL_STATE(121)] = 1692,
  [SMALL_STATE(122)] = 1702,
  [SMALL_STATE(123)] = 1712,
  [SMALL_STATE(124)] = 1722,
  [SMALL_STATE(125)] = 1730,
  [SMALL_STATE(126)] = 1740,
  [SMALL_STATE(127)] = 1750,
  [SMALL_STATE(128)] = 1760,
  [SMALL_STATE(129)] = 1770,
  [SMALL_STATE(130)] = 1780,
  [SMALL_STATE(131)] = 1790,
  [SMALL_STATE(132)] = 1800,
  [SMALL_STATE(133)] = 1810,
  [SMALL_STATE(134)] = 1820,
  [SMALL_STATE(135)] = 1826,
  [SMALL_STATE(136)] = 1836,
  [SMALL_STATE(137)] = 1846,
  [SMALL_STATE(138)] = 1856,
  [SMALL_STATE(139)] = 1866,
  [SMALL_STATE(140)] = 1876,
  [SMALL_STATE(141)] = 1886,
  [SMALL_STATE(142)] = 1896,
  [SMALL_STATE(143)] = 1906,
  [SMALL_STATE(144)] = 1916,
  [SMALL_STATE(145)] = 1926,
  [SMALL_STATE(146)] = 1936,
  [SMALL_STATE(147)] = 1946,
  [SMALL_STATE(148)] = 1956,
  [SMALL_STATE(149)] = 1966,
  [SMALL_STATE(150)] = 1976,
  [SMALL_STATE(151)] = 1986,
  [SMALL_STATE(152)] = 1996,
  [SMALL_STATE(153)] = 2006,
  [SMALL_STATE(154)] = 2016,
  [SMALL_STATE(155)] = 2026,
  [SMALL_STATE(156)] = 2034,
  [SMALL_STATE(157)] = 2044,
  [SMALL_STATE(158)] = 2054,
  [SMALL_STATE(159)] = 2064,
  [SMALL_STATE(160)] = 2074,
  [SMALL_STATE(161)] = 2084,
  [SMALL_STATE(162)] = 2094,
  [SMALL_STATE(163)] = 2101,
  [SMALL_STATE(164)] = 2108,
  [SMALL_STATE(165)] = 2115,
  [SMALL_STATE(166)] = 2122,
  [SMALL_STATE(167)] = 2129,
  [SMALL_STATE(168)] = 2134,
  [SMALL_STATE(169)] = 2139,
  [SMALL_STATE(170)] = 2146,
  [SMALL_STATE(171)] = 2151,
  [SMALL_STATE(172)] = 2158,
  [SMALL_STATE(173)] = 2165,
  [SMALL_STATE(174)] = 2170,
  [SMALL_STATE(175)] = 2177,
  [SMALL_STATE(176)] = 2184,
  [SMALL_STATE(177)] = 2191,
  [SMALL_STATE(178)] = 2198,
  [SMALL_STATE(179)] = 2203,
  [SMALL_STATE(180)] = 2210,
  [SMALL_STATE(181)] = 2215,
  [SMALL_STATE(182)] = 2220,
  [SMALL_STATE(183)] = 2227,
  [SMALL_STATE(184)] = 2234,
  [SMALL_STATE(185)] = 2238,
  [SMALL_STATE(186)] = 2242,
  [SMALL_STATE(187)] = 2246,
  [SMALL_STATE(188)] = 2250,
  [SMALL_STATE(189)] = 2254,
  [SMALL_STATE(190)] = 2258,
  [SMALL_STATE(191)] = 2262,
  [SMALL_STATE(192)] = 2266,
  [SMALL_STATE(193)] = 2270,
  [SMALL_STATE(194)] = 2274,
  [SMALL_STATE(195)] = 2278,
  [SMALL_STATE(196)] = 2282,
  [SMALL_STATE(197)] = 2286,
  [SMALL_STATE(198)] = 2290,
  [SMALL_STATE(199)] = 2294,
  [SMALL_STATE(200)] = 2298,
  [SMALL_STATE(201)] = 2302,
  [SMALL_STATE(202)] = 2306,
  [SMALL_STATE(203)] = 2310,
  [SMALL_STATE(204)] = 2314,
  [SMALL_STATE(205)] = 2318,
  [SMALL_STATE(206)] = 2322,
  [SMALL_STATE(207)] = 2326,
  [SMALL_STATE(208)] = 2330,
  [SMALL_STATE(209)] = 2334,
  [SMALL_STATE(210)] = 2338,
  [SMALL_STATE(211)] = 2342,
  [SMALL_STATE(212)] = 2346,
  [SMALL_STATE(213)] = 2350,
  [SMALL_STATE(214)] = 2354,
  [SMALL_STATE(215)] = 2358,
  [SMALL_STATE(216)] = 2362,
  [SMALL_STATE(217)] = 2366,
  [SMALL_STATE(218)] = 2370,
  [SMALL_STATE(219)] = 2374,
  [SMALL_STATE(220)] = 2378,
  [SMALL_STATE(221)] = 2382,
  [SMALL_STATE(222)] = 2386,
  [SMALL_STATE(223)] = 2390,
  [SMALL_STATE(224)] = 2394,
  [SMALL_STATE(225)] = 2398,
  [SMALL_STATE(226)] = 2402,
  [SMALL_STATE(227)] = 2406,
  [SMALL_STATE(228)] = 2410,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 7),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 7), SHIFT_REPEAT(215),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 7), SHIFT_REPEAT(228),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 7), SHIFT_REPEAT(227),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 7), SHIFT_REPEAT(226),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 7), SHIFT_REPEAT(96),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 46),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_func_decl, 8, .production_id = 46),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 4, .production_id = 10),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_func_decl, 4, .production_id = 10),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 6, .production_id = 22),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_func_decl, 6, .production_id = 22),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 6),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 7, .production_id = 32),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_func_decl, 7, .production_id = 32),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 6, .production_id = 19),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_func_decl, 6, .production_id = 19),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 4, .production_id = 41),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 3, .production_id = 28),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 5, .production_id = 13),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_func_decl, 5, .production_id = 13),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 7, .production_id = 28),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 2, .production_id = 18),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 8, .production_id = 41),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 6, .production_id = 28),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 7, .production_id = 41),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 4, .production_id = 41),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 3, .production_id = 28),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 2, .production_id = 18),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 5, .production_id = 12),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 7, .production_id = 33),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 44),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 7, .production_id = 30),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 9, .production_id = 54),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 6, .production_id = 21),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 9, .production_id = 55),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 10, .production_id = 60),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 7, .production_id = 31),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 10, .production_id = 59),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 7, .production_id = 34),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 7, .production_id = 35),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 6, .production_id = 17),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 9, .production_id = 51),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringl, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 11, .production_id = 63),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 42),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 7, .production_id = 29),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 43),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 9, .production_id = 53),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 6, .production_id = 24),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 45),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 8, .production_id = 47),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 9, .production_id = 52),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 8, .production_id = 48),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 9, .production_id = 45),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 8, .production_id = 39),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 9, .production_id = 43),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 9, .production_id = 42),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 5, .production_id = 10),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 7, .production_id = 27),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 9, .production_id = 50),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 9, .production_id = 49),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 12, .production_id = 63),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 11, .production_id = 62),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 8, .production_id = 35),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 8, .production_id = 34),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 12, .production_id = 64),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 11, .production_id = 59),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 33),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 10, .production_id = 55),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 5, .production_id = 11),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 32),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 11, .production_id = 61),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 31),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 11, .production_id = 60),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 30),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 9, .production_id = 46),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 6, .production_id = 15),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 29),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 9, .production_id = 47),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 9, .production_id = 48),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 9, .production_id = 44),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_nodes, 1, .production_id = 5),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 7, .production_id = 17),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_nodes, 1, .production_id = 4),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 8, .production_id = 37),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 8, .production_id = 36),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 10, .production_id = 56),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 10, .production_id = 57),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 6, .production_id = 12),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_nodes, 1, .production_id = 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syscall_decl, 7, .production_id = 24),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 10, .production_id = 51),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 7, .production_id = 22),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 6, .production_id = 13),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 10, .production_id = 52),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_nodes, 1, .production_id = 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 7, .production_id = 21),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 4, .production_id = 8),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 10, .production_id = 53),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_nodes, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 7, .production_id = 19),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 10, .production_id = 54),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 7, .production_id = 25),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_external_func_decl_repeat1, 2, .production_id = 23), SHIFT_REPEAT(155),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_external_func_decl_repeat1, 2, .production_id = 23),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_external_func_decl_repeat1, 2, .production_id = 20),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_assoc, 1, .production_id = 9),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ktype_repeat1, 2), SHIFT_REPEAT(188),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ktype_repeat1, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_fn_arg, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2), SHIFT_REPEAT(196),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_assoc_repeat1, 2), SHIFT_REPEAT(106),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_assoc_repeat1, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_decl_repeat1, 2, .production_id = 40), SHIFT_REPEAT(217),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_decl_repeat1, 2, .production_id = 40),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat2, 2, .production_id = 16), SHIFT_REPEAT(182),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat2, 2, .production_id = 16),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_assoc, 4, .production_id = 26),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_decl_repeat1, 4, .production_id = 58),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat2, 2, .production_id = 14),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_assoc, 5, .production_id = 38),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [580] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
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
