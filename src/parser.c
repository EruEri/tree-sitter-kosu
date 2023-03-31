#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 175
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 58

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
  sym_operator_decl = 12,
  sym_syscall_decl = 13,
  sym_function_decl = 14,
  sym_const_decl = 15,
  anon_sym_COLON_COLON = 16,
  anon_sym_DOT = 17,
  anon_sym_STAR = 18,
  anon_sym__ = 19,
  anon_sym_DQUOTE = 20,
  sym_module_identifier = 21,
  sym_identifier = 22,
  sym__stringl = 23,
  sym_source_file = 24,
  sym_module_nodes = 25,
  sym_enum_decl = 26,
  sym_struct_decl = 27,
  sym_external_func_decl = 28,
  sym_enum_assoc = 29,
  sym_ktype = 30,
  sym_ctype = 31,
  sym_external_fn_arg = 32,
  sym_stringl = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_enum_decl_repeat1 = 35,
  aux_sym_enum_decl_repeat2 = 36,
  aux_sym_struct_decl_repeat1 = 37,
  aux_sym_external_func_decl_repeat1 = 38,
  aux_sym_enum_assoc_repeat1 = 39,
  aux_sym_ktype_repeat1 = 40,
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
  [sym_operator_decl] = "operator_decl",
  [sym_syscall_decl] = "syscall_decl",
  [sym_function_decl] = "function_decl",
  [sym_const_decl] = "const_decl",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DOT] = ".",
  [anon_sym_STAR] = "*",
  [anon_sym__] = "_",
  [anon_sym_DQUOTE] = "\"",
  [sym_module_identifier] = "module_identifier",
  [sym_identifier] = "identifier",
  [sym__stringl] = "_stringl",
  [sym_source_file] = "source_file",
  [sym_module_nodes] = "module_nodes",
  [sym_enum_decl] = "enum_decl",
  [sym_struct_decl] = "struct_decl",
  [sym_external_func_decl] = "external_func_decl",
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
  [sym_operator_decl] = sym_operator_decl,
  [sym_syscall_decl] = sym_syscall_decl,
  [sym_function_decl] = sym_function_decl,
  [sym_const_decl] = sym_const_decl,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym__] = anon_sym__,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_module_identifier] = sym_module_identifier,
  [sym_identifier] = sym_identifier,
  [sym__stringl] = sym__stringl,
  [sym_source_file] = sym_source_file,
  [sym_module_nodes] = sym_module_nodes,
  [sym_enum_decl] = sym_enum_decl,
  [sym_struct_decl] = sym_struct_decl,
  [sym_external_func_decl] = sym_external_func_decl,
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
  [sym_operator_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_syscall_decl] = {
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
  field_parametric_type = 13,
  field_pointer = 14,
  field_return_type = 15,
  field_struct_decl = 16,
  field_variadic = 17,
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
  [field_parametric_type] = "parametric_type",
  [field_pointer] = "pointer",
  [field_return_type] = "return_type",
  [field_struct_decl] = "struct_decl",
  [field_variadic] = "variadic",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 2},
  [11] = {.index = 12, .length = 2},
  [12] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 3},
  [15] = {.index = 20, .length = 2},
  [16] = {.index = 22, .length = 2},
  [17] = {.index = 24, .length = 2},
  [18] = {.index = 26, .length = 2},
  [19] = {.index = 28, .length = 1},
  [20] = {.index = 29, .length = 3},
  [21] = {.index = 32, .length = 3},
  [22] = {.index = 35, .length = 2},
  [23] = {.index = 37, .length = 4},
  [24] = {.index = 41, .length = 2},
  [25] = {.index = 43, .length = 4},
  [26] = {.index = 47, .length = 2},
  [27] = {.index = 49, .length = 3},
  [28] = {.index = 52, .length = 3},
  [29] = {.index = 55, .length = 3},
  [30] = {.index = 58, .length = 3},
  [31] = {.index = 61, .length = 4},
  [32] = {.index = 65, .length = 5},
  [33] = {.index = 70, .length = 5},
  [34] = {.index = 75, .length = 3},
  [35] = {.index = 78, .length = 5},
  [36] = {.index = 83, .length = 2},
  [37] = {.index = 85, .length = 3},
  [38] = {.index = 88, .length = 3},
  [39] = {.index = 91, .length = 4},
  [40] = {.index = 95, .length = 4},
  [41] = {.index = 99, .length = 4},
  [42] = {.index = 103, .length = 4},
  [43] = {.index = 107, .length = 6},
  [44] = {.index = 113, .length = 6},
  [45] = {.index = 119, .length = 4},
  [46] = {.index = 123, .length = 4},
  [47] = {.index = 127, .length = 5},
  [48] = {.index = 132, .length = 5},
  [49] = {.index = 137, .length = 7},
  [50] = {.index = 144, .length = 4},
  [51] = {.index = 148, .length = 3},
  [52] = {.index = 151, .length = 5},
  [53] = {.index = 156, .length = 5},
  [54] = {.index = 161, .length = 5},
  [55] = {.index = 166, .length = 4},
  [56] = {.index = 170, .length = 6},
  [57] = {.index = 176, .length = 5},
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
    {field_node_decl, 0, .inherited = true},
  [5] =
    {field_node_decl, 0, .inherited = true},
    {field_node_decl, 1, .inherited = true},
  [7] =
    {field_name, 1},
  [8] =
    {field_enum_case_decl, 0},
  [9] =
    {field_external_fn_name, 1},
  [10] =
    {field_enum_cases, 3},
    {field_name, 1},
  [12] =
    {field_external_fn_name, 1},
    {field_return_type, 4},
  [14] =
    {field_args, 3},
    {field_external_fn_name, 1},
  [16] =
    {field_enum_cases, 1},
  [17] =
    {field_enum_cases, 3},
    {field_enum_cases, 4, .inherited = true},
    {field_name, 1},
  [20] =
    {field_enum_cases, 0, .inherited = true},
    {field_enum_cases, 1, .inherited = true},
  [22] =
    {field_c_name, 5},
    {field_external_fn_name, 1},
  [24] =
    {field_pointer, 0},
    {field_pointer, 1},
  [26] =
    {field_external_fn_name, 1},
    {field_variadic, 4},
  [28] =
    {field_args, 1},
  [29] =
    {field_args, 3},
    {field_external_fn_name, 1},
    {field_return_type, 5},
  [32] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_external_fn_name, 1},
  [35] =
    {field_args, 0, .inherited = true},
    {field_args, 1, .inherited = true},
  [37] =
    {field_name, 1},
    {field_parametric_type, 2},
    {field_parametric_type, 3},
    {field_parametric_type, 4},
  [41] =
    {field_assoc_type, 2},
    {field_enum_case_decl, 0},
  [43] =
    {field_field, 3},
    {field_field, 4},
    {field_field, 5},
    {field_name, 1},
  [47] =
    {field_module_path, 0},
    {field_module_path, 1},
  [49] =
    {field_c_name, 6},
    {field_external_fn_name, 1},
    {field_return_type, 4},
  [52] =
    {field_external_fn_name, 1},
    {field_return_type, 6},
    {field_variadic, 4},
  [55] =
    {field_args, 3},
    {field_c_name, 6},
    {field_external_fn_name, 1},
  [58] =
    {field_args, 3},
    {field_external_fn_name, 1},
    {field_variadic, 5},
  [61] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_external_fn_name, 1},
    {field_return_type, 6},
  [65] =
    {field_enum_cases, 6},
    {field_name, 1},
    {field_parametric_type, 2},
    {field_parametric_type, 3},
    {field_parametric_type, 4},
  [70] =
    {field_name, 1},
    {field_parametric_type, 2},
    {field_parametric_type, 3},
    {field_parametric_type, 4},
    {field_parametric_type, 5},
  [75] =
    {field_assoc_type, 2},
    {field_assoc_type, 3},
    {field_enum_case_decl, 0},
  [78] =
    {field_field, 3},
    {field_field, 4},
    {field_field, 5},
    {field_field, 6, .inherited = true},
    {field_name, 1},
  [83] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [85] =
    {field_module_path, 0},
    {field_module_path, 1},
    {field_module_path, 2},
  [88] =
    {field_c_name, 7},
    {field_external_fn_name, 1},
    {field_variadic, 4},
  [91] =
    {field_args, 3},
    {field_c_name, 7},
    {field_external_fn_name, 1},
    {field_return_type, 5},
  [95] =
    {field_args, 3},
    {field_external_fn_name, 1},
    {field_return_type, 7},
    {field_variadic, 5},
  [99] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_c_name, 7},
    {field_external_fn_name, 1},
  [103] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_external_fn_name, 1},
    {field_variadic, 6},
  [107] =
    {field_enum_cases, 6},
    {field_enum_cases, 7, .inherited = true},
    {field_name, 1},
    {field_parametric_type, 2},
    {field_parametric_type, 3},
    {field_parametric_type, 4},
  [113] =
    {field_enum_cases, 7},
    {field_name, 1},
    {field_parametric_type, 2},
    {field_parametric_type, 3},
    {field_parametric_type, 4},
    {field_parametric_type, 5},
  [119] =
    {field_c_name, 8},
    {field_external_fn_name, 1},
    {field_return_type, 6},
    {field_variadic, 4},
  [123] =
    {field_args, 3},
    {field_c_name, 8},
    {field_external_fn_name, 1},
    {field_variadic, 5},
  [127] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_c_name, 8},
    {field_external_fn_name, 1},
    {field_return_type, 6},
  [132] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_external_fn_name, 1},
    {field_return_type, 8},
    {field_variadic, 6},
  [137] =
    {field_enum_cases, 7},
    {field_enum_cases, 8, .inherited = true},
    {field_name, 1},
    {field_parametric_type, 2},
    {field_parametric_type, 3},
    {field_parametric_type, 4},
    {field_parametric_type, 5},
  [144] =
    {field_field, 6},
    {field_field, 7},
    {field_field, 8},
    {field_name, 1},
  [148] =
    {field_field, 1},
    {field_field, 2},
    {field_field, 3},
  [151] =
    {field_args, 3},
    {field_c_name, 9},
    {field_external_fn_name, 1},
    {field_return_type, 7},
    {field_variadic, 5},
  [156] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_c_name, 9},
    {field_external_fn_name, 1},
    {field_variadic, 6},
  [161] =
    {field_field, 6},
    {field_field, 7},
    {field_field, 8},
    {field_field, 9, .inherited = true},
    {field_name, 1},
  [166] =
    {field_field, 7},
    {field_field, 8},
    {field_field, 9},
    {field_name, 1},
  [170] =
    {field_args, 3},
    {field_args, 4, .inherited = true},
    {field_c_name, 10},
    {field_external_fn_name, 1},
    {field_return_type, 8},
    {field_variadic, 6},
  [176] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= '|')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(69);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(69);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(54);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(63);
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
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(59);
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
      if (lookahead == 'r') ADVANCE(55);
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
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(47);
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
      if (eof) ADVANCE(39);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(69);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(63);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_external);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_operator_decl);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_operator_decl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_syscall_decl);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_syscall_decl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_function_decl);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_function_decl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_const_decl);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_const_decl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 'x') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'y') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(101);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 38},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 38},
  [5] = {.lex_state = 38},
  [6] = {.lex_state = 38},
  [7] = {.lex_state = 38},
  [8] = {.lex_state = 37},
  [9] = {.lex_state = 38},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 37},
  [22] = {.lex_state = 37},
  [23] = {.lex_state = 37},
  [24] = {.lex_state = 37},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 37},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 37},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 37},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 37},
  [41] = {.lex_state = 37},
  [42] = {.lex_state = 37},
  [43] = {.lex_state = 37},
  [44] = {.lex_state = 37},
  [45] = {.lex_state = 37},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 37},
  [48] = {.lex_state = 37},
  [49] = {.lex_state = 37},
  [50] = {.lex_state = 37},
  [51] = {.lex_state = 37},
  [52] = {.lex_state = 37},
  [53] = {.lex_state = 37},
  [54] = {.lex_state = 37},
  [55] = {.lex_state = 37},
  [56] = {.lex_state = 37},
  [57] = {.lex_state = 37},
  [58] = {.lex_state = 37},
  [59] = {.lex_state = 37},
  [60] = {.lex_state = 37},
  [61] = {.lex_state = 37},
  [62] = {.lex_state = 37},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 37},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 37},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 37},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 37},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 37},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 37},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 38},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 38},
  [144] = {.lex_state = 38},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 38},
  [147] = {.lex_state = 38},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 38},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 38},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 38},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0, .external_lex_state = 1},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 2},
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
    [sym_operator_decl] = ACTIONS(1),
    [sym_syscall_decl] = ACTIONS(1),
    [sym_function_decl] = ACTIONS(1),
    [sym_const_decl] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_module_identifier] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__stringl] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(171),
    [sym_module_nodes] = STATE(62),
    [sym_enum_decl] = STATE(60),
    [sym_struct_decl] = STATE(58),
    [sym_external_func_decl] = STATE(57),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_enum] = ACTIONS(5),
    [anon_sym_struct] = ACTIONS(7),
    [anon_sym_external] = ACTIONS(9),
    [sym_operator_decl] = ACTIONS(11),
    [sym_syscall_decl] = ACTIONS(11),
    [sym_function_decl] = ACTIONS(11),
    [sym_const_decl] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_EQ,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      sym_module_identifier,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(25), 1,
      sym_ctype,
    ACTIONS(15), 7,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [28] = 2,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 12,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [46] = 7,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      sym_module_identifier,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_EQ,
    STATE(29), 1,
      sym_ctype,
    ACTIONS(31), 7,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [74] = 7,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      sym_module_identifier,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_EQ,
    STATE(27), 1,
      sym_ctype,
    ACTIONS(37), 7,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [102] = 7,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      sym_module_identifier,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_EQ,
    STATE(24), 1,
      sym_ctype,
    ACTIONS(43), 7,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [130] = 7,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      sym_module_identifier,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_EQ,
    STATE(26), 1,
      sym_ctype,
    ACTIONS(49), 7,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [158] = 2,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 12,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [176] = 7,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      sym_module_identifier,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_EQ,
    STATE(28), 1,
      sym_ctype,
    ACTIONS(59), 7,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [204] = 2,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 12,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [222] = 10,
    ACTIONS(5), 1,
      anon_sym_enum,
    ACTIONS(7), 1,
      anon_sym_struct,
    ACTIONS(9), 1,
      anon_sym_external,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      aux_sym_source_file_repeat1,
    STATE(57), 1,
      sym_external_func_decl,
    STATE(58), 1,
      sym_struct_decl,
    STATE(60), 1,
      sym_enum_decl,
    STATE(62), 1,
      sym_module_nodes,
    ACTIONS(11), 4,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [256] = 10,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_enum,
    ACTIONS(74), 1,
      anon_sym_struct,
    ACTIONS(77), 1,
      anon_sym_external,
    STATE(12), 1,
      aux_sym_source_file_repeat1,
    STATE(57), 1,
      sym_external_func_decl,
    STATE(58), 1,
      sym_struct_decl,
    STATE(60), 1,
      sym_enum_decl,
    STATE(62), 1,
      sym_module_nodes,
    ACTIONS(80), 4,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [290] = 1,
    ACTIONS(83), 12,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [305] = 1,
    ACTIONS(85), 12,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [320] = 1,
    ACTIONS(87), 12,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [335] = 1,
    ACTIONS(89), 12,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [350] = 1,
    ACTIONS(91), 12,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [365] = 1,
    ACTIONS(93), 12,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [380] = 1,
    ACTIONS(95), 12,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [395] = 1,
    ACTIONS(97), 11,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [409] = 1,
    ACTIONS(99), 11,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [423] = 1,
    ACTIONS(101), 11,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [437] = 1,
    ACTIONS(103), 11,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_struct,
      anon_sym_external,
      anon_sym_EQ,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [451] = 2,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(105), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [465] = 2,
    ACTIONS(111), 1,
      anon_sym_EQ,
    ACTIONS(109), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [479] = 2,
    ACTIONS(115), 1,
      anon_sym_EQ,
    ACTIONS(113), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [493] = 2,
    ACTIONS(119), 1,
      anon_sym_EQ,
    ACTIONS(117), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [507] = 2,
    ACTIONS(123), 1,
      anon_sym_EQ,
    ACTIONS(121), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [521] = 2,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(125), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [535] = 1,
    ACTIONS(129), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [546] = 1,
    ACTIONS(131), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [557] = 1,
    ACTIONS(133), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [568] = 1,
    ACTIONS(135), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [579] = 1,
    ACTIONS(137), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [590] = 1,
    ACTIONS(139), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [601] = 1,
    ACTIONS(141), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [612] = 1,
    ACTIONS(143), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [623] = 1,
    ACTIONS(145), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [634] = 1,
    ACTIONS(147), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [645] = 1,
    ACTIONS(149), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [656] = 1,
    ACTIONS(151), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [667] = 1,
    ACTIONS(153), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [678] = 1,
    ACTIONS(155), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [689] = 1,
    ACTIONS(157), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [700] = 1,
    ACTIONS(159), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [711] = 1,
    ACTIONS(161), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [722] = 1,
    ACTIONS(163), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [733] = 1,
    ACTIONS(165), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [744] = 1,
    ACTIONS(167), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [755] = 1,
    ACTIONS(169), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [766] = 1,
    ACTIONS(171), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [777] = 1,
    ACTIONS(173), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [788] = 1,
    ACTIONS(175), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [799] = 1,
    ACTIONS(177), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [810] = 1,
    ACTIONS(179), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [821] = 1,
    ACTIONS(181), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [832] = 1,
    ACTIONS(183), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [843] = 1,
    ACTIONS(185), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [854] = 1,
    ACTIONS(187), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [865] = 1,
    ACTIONS(189), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [876] = 1,
    ACTIONS(191), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [887] = 1,
    ACTIONS(193), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      anon_sym_struct,
      anon_sym_external,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [898] = 4,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    ACTIONS(197), 1,
      anon_sym_EQ,
    STATE(68), 1,
      sym_external_fn_arg,
    ACTIONS(199), 2,
      anon_sym__,
      sym_identifier,
  [912] = 4,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(203), 1,
      sym_module_identifier,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(20), 1,
      sym_ktype,
  [925] = 4,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(203), 1,
      sym_module_identifier,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(117), 1,
      sym_ktype,
  [938] = 4,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(203), 1,
      sym_module_identifier,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(135), 1,
      sym_ktype,
  [951] = 4,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(203), 1,
      sym_module_identifier,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(95), 1,
      sym_ktype,
  [964] = 4,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    ACTIONS(211), 1,
      anon_sym_EQ,
    STATE(74), 1,
      aux_sym_external_func_decl_repeat1,
  [977] = 4,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(203), 1,
      sym_module_identifier,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(109), 1,
      sym_ktype,
  [990] = 4,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(203), 1,
      sym_module_identifier,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(82), 1,
      sym_ktype,
  [1003] = 4,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(203), 1,
      sym_module_identifier,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(106), 1,
      sym_ktype,
  [1016] = 4,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(203), 1,
      sym_module_identifier,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(85), 1,
      sym_ktype,
  [1029] = 4,
    ACTIONS(19), 1,
      anon_sym_STAR,
    ACTIONS(21), 1,
      sym_module_identifier,
    ACTIONS(213), 1,
      sym_identifier,
    STATE(83), 1,
      sym_ctype,
  [1042] = 4,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    ACTIONS(217), 1,
      anon_sym_EQ,
    STATE(78), 1,
      aux_sym_external_func_decl_repeat1,
  [1055] = 4,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(203), 1,
      sym_module_identifier,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(130), 1,
      sym_ktype,
  [1068] = 4,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(203), 1,
      sym_module_identifier,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(14), 1,
      sym_ktype,
  [1081] = 4,
    ACTIONS(201), 1,
      anon_sym_STAR,
    ACTIONS(203), 1,
      sym_module_identifier,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(110), 1,
      sym_ktype,
  [1094] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_external_func_decl_repeat1,
    ACTIONS(222), 2,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1105] = 3,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    STATE(88), 1,
      sym_enum_assoc,
  [1115] = 3,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      aux_sym_enum_decl_repeat2,
  [1125] = 3,
    ACTIONS(232), 1,
      anon_sym_COLON_COLON,
    ACTIONS(234), 1,
      anon_sym_DOT,
    STATE(102), 1,
      aux_sym_ktype_repeat1,
  [1135] = 3,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      aux_sym_enum_assoc_repeat1,
  [1145] = 1,
    ACTIONS(240), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1151] = 1,
    ACTIONS(242), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [1157] = 3,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      aux_sym_struct_decl_repeat1,
  [1167] = 3,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_enum_assoc_repeat1,
  [1177] = 3,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      sym_enum_assoc,
  [1187] = 3,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_enum_decl_repeat2,
  [1197] = 3,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(114), 1,
      sym_enum_assoc,
  [1207] = 3,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_enum_assoc_repeat1,
  [1217] = 3,
    ACTIONS(232), 1,
      anon_sym_COLON_COLON,
    ACTIONS(258), 1,
      anon_sym_DOT,
    STATE(102), 1,
      aux_sym_ktype_repeat1,
  [1227] = 3,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_enum_decl_repeat2,
  [1237] = 3,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_enum_assoc_repeat1,
  [1247] = 3,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_enum_assoc_repeat1,
  [1257] = 3,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    STATE(113), 1,
      aux_sym_struct_decl_repeat1,
  [1267] = 3,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      aux_sym_struct_decl_repeat1,
  [1277] = 3,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      aux_sym_struct_decl_repeat1,
  [1287] = 3,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_enum_decl_repeat1,
  [1297] = 3,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_enum_decl_repeat2,
  [1307] = 3,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_enum_decl_repeat1,
  [1317] = 2,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1325] = 3,
    ACTIONS(290), 1,
      anon_sym_COLON_COLON,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(102), 1,
      aux_sym_ktype_repeat1,
  [1335] = 3,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_enum_decl_repeat1,
  [1345] = 3,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_enum_decl_repeat2,
  [1355] = 3,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_enum_decl_repeat1,
  [1365] = 3,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      aux_sym_struct_decl_repeat1,
  [1375] = 3,
    ACTIONS(232), 1,
      anon_sym_COLON_COLON,
    ACTIONS(303), 1,
      anon_sym_DOT,
    STATE(91), 1,
      aux_sym_ktype_repeat1,
  [1385] = 3,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      aux_sym_struct_decl_repeat1,
  [1395] = 3,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_enum_assoc_repeat1,
  [1405] = 3,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_enum_assoc_repeat1,
  [1415] = 2,
    STATE(84), 1,
      sym_external_fn_arg,
    ACTIONS(199), 2,
      anon_sym__,
      sym_identifier,
  [1423] = 3,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_enum_decl_repeat2,
  [1433] = 3,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      aux_sym_struct_decl_repeat1,
  [1443] = 3,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    STATE(99), 1,
      aux_sym_enum_decl_repeat2,
  [1453] = 3,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_enum_decl_repeat1,
  [1463] = 3,
    ACTIONS(232), 1,
      anon_sym_COLON_COLON,
    ACTIONS(322), 1,
      anon_sym_DOT,
    STATE(81), 1,
      aux_sym_ktype_repeat1,
  [1473] = 3,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_enum_assoc_repeat1,
  [1483] = 3,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_enum_assoc_repeat1,
  [1493] = 2,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_stringl,
  [1500] = 2,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_stringl,
  [1507] = 1,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1512] = 2,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      sym_stringl,
  [1519] = 2,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym_stringl,
  [1526] = 2,
    ACTIONS(226), 1,
      sym_identifier,
    STATE(131), 1,
      sym_enum_assoc,
  [1533] = 2,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      sym_stringl,
  [1540] = 1,
    ACTIONS(284), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1545] = 2,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_stringl,
  [1552] = 2,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      sym_stringl,
  [1559] = 2,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_LBRACE,
  [1566] = 1,
    ACTIONS(329), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1571] = 1,
    ACTIONS(339), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1576] = 2,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_LBRACE,
  [1583] = 2,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      sym_stringl,
  [1590] = 1,
    ACTIONS(293), 2,
      anon_sym_COLON_COLON,
      anon_sym_DOT,
  [1595] = 1,
    ACTIONS(345), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1600] = 1,
    ACTIONS(347), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1605] = 2,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym_stringl,
  [1612] = 2,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      sym_stringl,
  [1619] = 2,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_stringl,
  [1626] = 2,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      sym_stringl,
  [1633] = 1,
    ACTIONS(349), 1,
      anon_sym_COLON,
  [1637] = 1,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
  [1641] = 1,
    ACTIONS(353), 1,
      anon_sym_COLON,
  [1645] = 1,
    ACTIONS(355), 1,
      anon_sym_COLON,
  [1649] = 1,
    ACTIONS(357), 1,
      sym_identifier,
  [1653] = 1,
    ACTIONS(359), 1,
      anon_sym_COLON,
  [1657] = 1,
    ACTIONS(361), 1,
      anon_sym_DOT_DOT_DOT,
  [1661] = 1,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
  [1665] = 1,
    ACTIONS(365), 1,
      anon_sym_COLON,
  [1669] = 1,
    ACTIONS(367), 1,
      sym_identifier,
  [1673] = 1,
    ACTIONS(369), 1,
      sym_identifier,
  [1677] = 1,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
  [1681] = 1,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
  [1685] = 1,
    ACTIONS(375), 1,
      anon_sym_DOT_DOT_DOT,
  [1689] = 1,
    ACTIONS(377), 1,
      anon_sym_LBRACE,
  [1693] = 1,
    ACTIONS(379), 1,
      sym_identifier,
  [1697] = 1,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
  [1701] = 1,
    ACTIONS(383), 1,
      sym_identifier,
  [1705] = 1,
    ACTIONS(385), 1,
      sym_identifier,
  [1709] = 1,
    ACTIONS(387), 1,
      sym_identifier,
  [1713] = 1,
    ACTIONS(389), 1,
      sym_identifier,
  [1717] = 1,
    ACTIONS(391), 1,
      sym_identifier,
  [1721] = 1,
    ACTIONS(393), 1,
      sym_identifier,
  [1725] = 1,
    ACTIONS(395), 1,
      anon_sym_DOT_DOT_DOT,
  [1729] = 1,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
  [1733] = 1,
    ACTIONS(399), 1,
      sym_identifier,
  [1737] = 1,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
  [1741] = 1,
    ACTIONS(403), 1,
      sym_identifier,
  [1745] = 1,
    ACTIONS(405), 1,
      sym_module_identifier,
  [1749] = 1,
    ACTIONS(407), 1,
      sym__stringl,
  [1753] = 1,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
  [1757] = 1,
    ACTIONS(411), 1,
      anon_sym_LBRACE,
  [1761] = 1,
    ACTIONS(413), 1,
      sym_identifier,
  [1765] = 1,
    ACTIONS(415), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 74,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 130,
  [SMALL_STATE(8)] = 158,
  [SMALL_STATE(9)] = 176,
  [SMALL_STATE(10)] = 204,
  [SMALL_STATE(11)] = 222,
  [SMALL_STATE(12)] = 256,
  [SMALL_STATE(13)] = 290,
  [SMALL_STATE(14)] = 305,
  [SMALL_STATE(15)] = 320,
  [SMALL_STATE(16)] = 335,
  [SMALL_STATE(17)] = 350,
  [SMALL_STATE(18)] = 365,
  [SMALL_STATE(19)] = 380,
  [SMALL_STATE(20)] = 395,
  [SMALL_STATE(21)] = 409,
  [SMALL_STATE(22)] = 423,
  [SMALL_STATE(23)] = 437,
  [SMALL_STATE(24)] = 451,
  [SMALL_STATE(25)] = 465,
  [SMALL_STATE(26)] = 479,
  [SMALL_STATE(27)] = 493,
  [SMALL_STATE(28)] = 507,
  [SMALL_STATE(29)] = 521,
  [SMALL_STATE(30)] = 535,
  [SMALL_STATE(31)] = 546,
  [SMALL_STATE(32)] = 557,
  [SMALL_STATE(33)] = 568,
  [SMALL_STATE(34)] = 579,
  [SMALL_STATE(35)] = 590,
  [SMALL_STATE(36)] = 601,
  [SMALL_STATE(37)] = 612,
  [SMALL_STATE(38)] = 623,
  [SMALL_STATE(39)] = 634,
  [SMALL_STATE(40)] = 645,
  [SMALL_STATE(41)] = 656,
  [SMALL_STATE(42)] = 667,
  [SMALL_STATE(43)] = 678,
  [SMALL_STATE(44)] = 689,
  [SMALL_STATE(45)] = 700,
  [SMALL_STATE(46)] = 711,
  [SMALL_STATE(47)] = 722,
  [SMALL_STATE(48)] = 733,
  [SMALL_STATE(49)] = 744,
  [SMALL_STATE(50)] = 755,
  [SMALL_STATE(51)] = 766,
  [SMALL_STATE(52)] = 777,
  [SMALL_STATE(53)] = 788,
  [SMALL_STATE(54)] = 799,
  [SMALL_STATE(55)] = 810,
  [SMALL_STATE(56)] = 821,
  [SMALL_STATE(57)] = 832,
  [SMALL_STATE(58)] = 843,
  [SMALL_STATE(59)] = 854,
  [SMALL_STATE(60)] = 865,
  [SMALL_STATE(61)] = 876,
  [SMALL_STATE(62)] = 887,
  [SMALL_STATE(63)] = 898,
  [SMALL_STATE(64)] = 912,
  [SMALL_STATE(65)] = 925,
  [SMALL_STATE(66)] = 938,
  [SMALL_STATE(67)] = 951,
  [SMALL_STATE(68)] = 964,
  [SMALL_STATE(69)] = 977,
  [SMALL_STATE(70)] = 990,
  [SMALL_STATE(71)] = 1003,
  [SMALL_STATE(72)] = 1016,
  [SMALL_STATE(73)] = 1029,
  [SMALL_STATE(74)] = 1042,
  [SMALL_STATE(75)] = 1055,
  [SMALL_STATE(76)] = 1068,
  [SMALL_STATE(77)] = 1081,
  [SMALL_STATE(78)] = 1094,
  [SMALL_STATE(79)] = 1105,
  [SMALL_STATE(80)] = 1115,
  [SMALL_STATE(81)] = 1125,
  [SMALL_STATE(82)] = 1135,
  [SMALL_STATE(83)] = 1145,
  [SMALL_STATE(84)] = 1151,
  [SMALL_STATE(85)] = 1157,
  [SMALL_STATE(86)] = 1167,
  [SMALL_STATE(87)] = 1177,
  [SMALL_STATE(88)] = 1187,
  [SMALL_STATE(89)] = 1197,
  [SMALL_STATE(90)] = 1207,
  [SMALL_STATE(91)] = 1217,
  [SMALL_STATE(92)] = 1227,
  [SMALL_STATE(93)] = 1237,
  [SMALL_STATE(94)] = 1247,
  [SMALL_STATE(95)] = 1257,
  [SMALL_STATE(96)] = 1267,
  [SMALL_STATE(97)] = 1277,
  [SMALL_STATE(98)] = 1287,
  [SMALL_STATE(99)] = 1297,
  [SMALL_STATE(100)] = 1307,
  [SMALL_STATE(101)] = 1317,
  [SMALL_STATE(102)] = 1325,
  [SMALL_STATE(103)] = 1335,
  [SMALL_STATE(104)] = 1345,
  [SMALL_STATE(105)] = 1355,
  [SMALL_STATE(106)] = 1365,
  [SMALL_STATE(107)] = 1375,
  [SMALL_STATE(108)] = 1385,
  [SMALL_STATE(109)] = 1395,
  [SMALL_STATE(110)] = 1405,
  [SMALL_STATE(111)] = 1415,
  [SMALL_STATE(112)] = 1423,
  [SMALL_STATE(113)] = 1433,
  [SMALL_STATE(114)] = 1443,
  [SMALL_STATE(115)] = 1453,
  [SMALL_STATE(116)] = 1463,
  [SMALL_STATE(117)] = 1473,
  [SMALL_STATE(118)] = 1483,
  [SMALL_STATE(119)] = 1493,
  [SMALL_STATE(120)] = 1500,
  [SMALL_STATE(121)] = 1507,
  [SMALL_STATE(122)] = 1512,
  [SMALL_STATE(123)] = 1519,
  [SMALL_STATE(124)] = 1526,
  [SMALL_STATE(125)] = 1533,
  [SMALL_STATE(126)] = 1540,
  [SMALL_STATE(127)] = 1545,
  [SMALL_STATE(128)] = 1552,
  [SMALL_STATE(129)] = 1559,
  [SMALL_STATE(130)] = 1566,
  [SMALL_STATE(131)] = 1571,
  [SMALL_STATE(132)] = 1576,
  [SMALL_STATE(133)] = 1583,
  [SMALL_STATE(134)] = 1590,
  [SMALL_STATE(135)] = 1595,
  [SMALL_STATE(136)] = 1600,
  [SMALL_STATE(137)] = 1605,
  [SMALL_STATE(138)] = 1612,
  [SMALL_STATE(139)] = 1619,
  [SMALL_STATE(140)] = 1626,
  [SMALL_STATE(141)] = 1633,
  [SMALL_STATE(142)] = 1637,
  [SMALL_STATE(143)] = 1641,
  [SMALL_STATE(144)] = 1645,
  [SMALL_STATE(145)] = 1649,
  [SMALL_STATE(146)] = 1653,
  [SMALL_STATE(147)] = 1657,
  [SMALL_STATE(148)] = 1661,
  [SMALL_STATE(149)] = 1665,
  [SMALL_STATE(150)] = 1669,
  [SMALL_STATE(151)] = 1673,
  [SMALL_STATE(152)] = 1677,
  [SMALL_STATE(153)] = 1681,
  [SMALL_STATE(154)] = 1685,
  [SMALL_STATE(155)] = 1689,
  [SMALL_STATE(156)] = 1693,
  [SMALL_STATE(157)] = 1697,
  [SMALL_STATE(158)] = 1701,
  [SMALL_STATE(159)] = 1705,
  [SMALL_STATE(160)] = 1709,
  [SMALL_STATE(161)] = 1713,
  [SMALL_STATE(162)] = 1717,
  [SMALL_STATE(163)] = 1721,
  [SMALL_STATE(164)] = 1725,
  [SMALL_STATE(165)] = 1729,
  [SMALL_STATE(166)] = 1733,
  [SMALL_STATE(167)] = 1737,
  [SMALL_STATE(168)] = 1741,
  [SMALL_STATE(169)] = 1745,
  [SMALL_STATE(170)] = 1749,
  [SMALL_STATE(171)] = 1753,
  [SMALL_STATE(172)] = 1757,
  [SMALL_STATE(173)] = 1761,
  [SMALL_STATE(174)] = 1765,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 7, .production_id = 30),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_func_decl, 7, .production_id = 30),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 4, .production_id = 37),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 4, .production_id = 9),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_func_decl, 4, .production_id = 9),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 42),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_func_decl, 8, .production_id = 42),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 6, .production_id = 21),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_func_decl, 6, .production_id = 21),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 5, .production_id = 12),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_func_decl, 5, .production_id = 12),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 6, .production_id = 18),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_external_func_decl, 6, .production_id = 18),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 3, .production_id = 26),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(158),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(174),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(173),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 6), SHIFT_REPEAT(39),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 8, .production_id = 37),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 2, .production_id = 17),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 6, .production_id = 26),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 7, .production_id = 37),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 7, .production_id = 26),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 5),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 2, .production_id = 17),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 3, .production_id = 26),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 4, .production_id = 37),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 7, .production_id = 31),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 40),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 6, .production_id = 20),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 9, .production_id = 48),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 7, .production_id = 28),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 5, .production_id = 11),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 41),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 7, .production_id = 25),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 9, .production_id = 44),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 9, .production_id = 43),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 12, .production_id = 57),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 4, .production_id = 7),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 5, .production_id = 10),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 39),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 8, .production_id = 38),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_nodes, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringl, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 8, .production_id = 35),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 10, .production_id = 50),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 10, .production_id = 52),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 10, .production_id = 53),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 10, .production_id = 49),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 8, .production_id = 33),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 8, .production_id = 32),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 7, .production_id = 23),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 11, .production_id = 54),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 11, .production_id = 55),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 7, .production_id = 29),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 9, .production_id = 46),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 7, .production_id = 27),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 11, .production_id = 56),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 9, .production_id = 45),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 9, .production_id = 47),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_nodes, 1, .production_id = 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_nodes, 1, .production_id = 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_func_decl, 6, .production_id = 16),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_nodes, 1, .production_id = 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 6, .production_id = 14),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_external_func_decl_repeat1, 2, .production_id = 22), SHIFT_REPEAT(111),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_external_func_decl_repeat1, 2, .production_id = 22),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_fn_arg, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_external_func_decl_repeat1, 2, .production_id = 19),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat2, 2, .production_id = 15), SHIFT_REPEAT(124),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat2, 2, .production_id = 15),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2), SHIFT_REPEAT(145),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_assoc, 1, .production_id = 8),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ktype_repeat1, 2), SHIFT_REPEAT(169),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ktype_repeat1, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_decl_repeat1, 2, .production_id = 36), SHIFT_REPEAT(159),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_decl_repeat1, 2, .production_id = 36),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_assoc_repeat1, 2), SHIFT_REPEAT(75),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_assoc_repeat1, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_assoc, 5, .production_id = 34),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat2, 2, .production_id = 13),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_decl_repeat1, 4, .production_id = 51),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_assoc, 4, .production_id = 24),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [409] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
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
