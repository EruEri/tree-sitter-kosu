#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_enum = 1,
  anon_sym_LPAREN = 2,
  anon_sym_COMMA = 3,
  anon_sym_RPAREN = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  sym_struct_decl = 7,
  sym_external_func_decl = 8,
  sym_operator_decl = 9,
  sym_syscall_decl = 10,
  sym_function_decl = 11,
  sym_const_decl = 12,
  anon_sym_STAR = 13,
  sym_module_path = 14,
  sym_identifier = 15,
  sym_source_file = 16,
  sym_module_nodes = 17,
  sym_enum_decl = 18,
  sym_enum_assoc = 19,
  sym_ktype = 20,
  aux_sym_source_file_repeat1 = 21,
  aux_sym_enum_decl_repeat1 = 22,
  aux_sym_enum_decl_repeat2 = 23,
  aux_sym_enum_assoc_repeat1 = 24,
  aux_sym_ktype_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_enum] = "enum",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_struct_decl] = "struct_decl",
  [sym_external_func_decl] = "external_func_decl",
  [sym_operator_decl] = "operator_decl",
  [sym_syscall_decl] = "syscall_decl",
  [sym_function_decl] = "function_decl",
  [sym_const_decl] = "const_decl",
  [anon_sym_STAR] = "*",
  [sym_module_path] = "module_path",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_module_nodes] = "module_nodes",
  [sym_enum_decl] = "enum_decl",
  [sym_enum_assoc] = "enum_assoc",
  [sym_ktype] = "ktype",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_enum_decl_repeat1] = "enum_decl_repeat1",
  [aux_sym_enum_decl_repeat2] = "enum_decl_repeat2",
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
  [sym_struct_decl] = sym_struct_decl,
  [sym_external_func_decl] = sym_external_func_decl,
  [sym_operator_decl] = sym_operator_decl,
  [sym_syscall_decl] = sym_syscall_decl,
  [sym_function_decl] = sym_function_decl,
  [sym_const_decl] = sym_const_decl,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_module_path] = sym_module_path,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_module_nodes] = sym_module_nodes,
  [sym_enum_decl] = sym_enum_decl,
  [sym_enum_assoc] = sym_enum_assoc,
  [sym_ktype] = sym_ktype,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_enum_decl_repeat1] = aux_sym_enum_decl_repeat1,
  [aux_sym_enum_decl_repeat2] = aux_sym_enum_decl_repeat2,
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
  [sym_struct_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_external_func_decl] = {
    .visible = true,
    .named = true,
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_module_path] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
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
  [sym_enum_assoc] = {
    .visible = true,
    .named = true,
  },
  [sym_ktype] = {
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
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(18);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(1);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(6);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 32:
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(48);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_struct_decl);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_external_func_decl);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_operator_decl);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_syscall_decl);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_function_decl);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_const_decl);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_module_path);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(48);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 32},
  [23] = {.lex_state = 32},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 32},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 32},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 32},
  [49] = {.lex_state = 32},
  [50] = {.lex_state = 32},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 32},
  [54] = {.lex_state = 0},
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
    [sym_struct_decl] = ACTIONS(1),
    [sym_external_func_decl] = ACTIONS(1),
    [sym_operator_decl] = ACTIONS(1),
    [sym_syscall_decl] = ACTIONS(1),
    [sym_function_decl] = ACTIONS(1),
    [sym_const_decl] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_module_path] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(54),
    [sym_module_nodes] = STATE(2),
    [sym_enum_decl] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_enum] = ACTIONS(5),
    [sym_struct_decl] = ACTIONS(7),
    [sym_external_func_decl] = ACTIONS(7),
    [sym_operator_decl] = ACTIONS(7),
    [sym_syscall_decl] = ACTIONS(7),
    [sym_function_decl] = ACTIONS(7),
    [sym_const_decl] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_enum,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_enum_decl,
    STATE(3), 2,
      sym_module_nodes,
      aux_sym_source_file_repeat1,
    ACTIONS(7), 6,
      sym_struct_decl,
      sym_external_func_decl,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [22] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_enum,
    STATE(5), 1,
      sym_enum_decl,
    STATE(3), 2,
      sym_module_nodes,
      aux_sym_source_file_repeat1,
    ACTIONS(16), 6,
      sym_struct_decl,
      sym_external_func_decl,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [44] = 1,
    ACTIONS(19), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      sym_struct_decl,
      sym_external_func_decl,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [55] = 1,
    ACTIONS(21), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      sym_struct_decl,
      sym_external_func_decl,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [66] = 1,
    ACTIONS(23), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      sym_struct_decl,
      sym_external_func_decl,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [77] = 1,
    ACTIONS(25), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      sym_struct_decl,
      sym_external_func_decl,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [88] = 1,
    ACTIONS(27), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      sym_struct_decl,
      sym_external_func_decl,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [99] = 1,
    ACTIONS(29), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      sym_struct_decl,
      sym_external_func_decl,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [110] = 1,
    ACTIONS(31), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      sym_struct_decl,
      sym_external_func_decl,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [121] = 1,
    ACTIONS(33), 8,
      ts_builtin_sym_end,
      anon_sym_enum,
      sym_struct_decl,
      sym_external_func_decl,
      sym_operator_decl,
      sym_syscall_decl,
      sym_function_decl,
      sym_const_decl,
  [132] = 5,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    ACTIONS(37), 1,
      anon_sym_STAR,
    ACTIONS(40), 1,
      sym_module_path,
    STATE(12), 1,
      aux_sym_ktype_repeat1,
    STATE(52), 1,
      sym_ktype,
  [148] = 5,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      sym_module_path,
    STATE(12), 1,
      aux_sym_ktype_repeat1,
    STATE(52), 1,
      sym_ktype,
  [164] = 4,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      sym_module_path,
    STATE(13), 1,
      aux_sym_ktype_repeat1,
    STATE(52), 1,
      sym_ktype,
  [177] = 4,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      sym_module_path,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_ktype,
  [190] = 3,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_enum_assoc_repeat1,
  [200] = 3,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      sym_module_path,
    STATE(41), 1,
      sym_ktype,
  [210] = 3,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_enum_decl_repeat1,
  [220] = 1,
    ACTIONS(35), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_module_path,
  [226] = 3,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_enum_decl_repeat2,
  [236] = 3,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_enum_decl_repeat2,
  [246] = 3,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(33), 1,
      sym_enum_assoc,
  [256] = 3,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_enum_assoc,
  [266] = 3,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      aux_sym_enum_decl_repeat1,
  [276] = 3,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      aux_sym_enum_assoc_repeat1,
  [286] = 3,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      sym_module_path,
    STATE(37), 1,
      sym_ktype,
  [296] = 3,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      aux_sym_enum_decl_repeat1,
  [306] = 3,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym_enum_assoc_repeat1,
  [316] = 3,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_enum_decl_repeat2,
  [326] = 3,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_enum_decl_repeat2,
  [336] = 3,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_enum_decl_repeat2,
  [346] = 2,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [354] = 3,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_enum_decl_repeat2,
  [364] = 3,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym_enum_assoc,
  [374] = 3,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_enum_decl_repeat2,
  [384] = 2,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(102), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [392] = 1,
    ACTIONS(102), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [397] = 1,
    ACTIONS(104), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [402] = 2,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(40), 1,
      sym_enum_assoc,
  [409] = 1,
    ACTIONS(90), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [414] = 1,
    ACTIONS(79), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [419] = 1,
    ACTIONS(106), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [424] = 1,
    ACTIONS(108), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [429] = 2,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
  [436] = 1,
    ACTIONS(74), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [441] = 1,
    ACTIONS(114), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [446] = 1,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
  [450] = 1,
    ACTIONS(118), 1,
      sym_identifier,
  [454] = 1,
    ACTIONS(120), 1,
      sym_identifier,
  [458] = 1,
    ACTIONS(122), 1,
      sym_identifier,
  [462] = 1,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
  [466] = 1,
    ACTIONS(126), 1,
      anon_sym_COMMA,
  [470] = 1,
    ACTIONS(128), 1,
      sym_identifier,
  [474] = 1,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 55,
  [SMALL_STATE(6)] = 66,
  [SMALL_STATE(7)] = 77,
  [SMALL_STATE(8)] = 88,
  [SMALL_STATE(9)] = 99,
  [SMALL_STATE(10)] = 110,
  [SMALL_STATE(11)] = 121,
  [SMALL_STATE(12)] = 132,
  [SMALL_STATE(13)] = 148,
  [SMALL_STATE(14)] = 164,
  [SMALL_STATE(15)] = 177,
  [SMALL_STATE(16)] = 190,
  [SMALL_STATE(17)] = 200,
  [SMALL_STATE(18)] = 210,
  [SMALL_STATE(19)] = 220,
  [SMALL_STATE(20)] = 226,
  [SMALL_STATE(21)] = 236,
  [SMALL_STATE(22)] = 246,
  [SMALL_STATE(23)] = 256,
  [SMALL_STATE(24)] = 266,
  [SMALL_STATE(25)] = 276,
  [SMALL_STATE(26)] = 286,
  [SMALL_STATE(27)] = 296,
  [SMALL_STATE(28)] = 306,
  [SMALL_STATE(29)] = 316,
  [SMALL_STATE(30)] = 326,
  [SMALL_STATE(31)] = 336,
  [SMALL_STATE(32)] = 346,
  [SMALL_STATE(33)] = 354,
  [SMALL_STATE(34)] = 364,
  [SMALL_STATE(35)] = 374,
  [SMALL_STATE(36)] = 384,
  [SMALL_STATE(37)] = 392,
  [SMALL_STATE(38)] = 397,
  [SMALL_STATE(39)] = 402,
  [SMALL_STATE(40)] = 409,
  [SMALL_STATE(41)] = 414,
  [SMALL_STATE(42)] = 419,
  [SMALL_STATE(43)] = 424,
  [SMALL_STATE(44)] = 429,
  [SMALL_STATE(45)] = 436,
  [SMALL_STATE(46)] = 441,
  [SMALL_STATE(47)] = 446,
  [SMALL_STATE(48)] = 450,
  [SMALL_STATE(49)] = 454,
  [SMALL_STATE(50)] = 458,
  [SMALL_STATE(51)] = 462,
  [SMALL_STATE(52)] = 466,
  [SMALL_STATE(53)] = 470,
  [SMALL_STATE(54)] = 474,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 5, .production_id = 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_nodes, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 10, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 9, .production_id = 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 8, .production_id = 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 4, .production_id = 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 7, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 6, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ktype_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ktype_repeat1, 2), SHIFT_REPEAT(26),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ktype_repeat1, 2), SHIFT_REPEAT(50),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2), SHIFT_REPEAT(48),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_assoc_repeat1, 2), SHIFT_REPEAT(17),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_assoc_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat2, 2), SHIFT_REPEAT(39),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat2, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_assoc, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_assoc, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_assoc, 5),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_assoc, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 5),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [130] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
