#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_enum = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_LBRACE = 4,
  anon_sym_COMMA = 5,
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
  sym_generic_list = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_enum_decl_repeat1 = 23,
  aux_sym_enum_assoc_repeat1 = 24,
  aux_sym_ktype_repeat1 = 25,
  aux_sym_generic_list_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_enum] = "enum",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
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
  [sym_generic_list] = "generic_list",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_enum_decl_repeat1] = "enum_decl_repeat1",
  [aux_sym_enum_assoc_repeat1] = "enum_assoc_repeat1",
  [aux_sym_ktype_repeat1] = "ktype_repeat1",
  [aux_sym_generic_list_repeat1] = "generic_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_generic_list] = sym_generic_list,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_enum_decl_repeat1] = aux_sym_enum_decl_repeat1,
  [aux_sym_enum_assoc_repeat1] = aux_sym_enum_assoc_repeat1,
  [aux_sym_ktype_repeat1] = aux_sym_ktype_repeat1,
  [aux_sym_generic_list_repeat1] = aux_sym_generic_list_repeat1,
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
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym_generic_list] = {
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
  [aux_sym_enum_assoc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ktype_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_generic_list_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|') ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(2);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 'x') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == 'y') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(6);
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
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COMMA);
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
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_source_file] = STATE(41),
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
  [99] = 5,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(31), 1,
      anon_sym_STAR,
    ACTIONS(34), 1,
      sym_module_path,
    STATE(9), 1,
      aux_sym_ktype_repeat1,
    STATE(40), 1,
      sym_ktype,
  [115] = 5,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(39), 1,
      anon_sym_STAR,
    ACTIONS(41), 1,
      sym_module_path,
    STATE(9), 1,
      aux_sym_ktype_repeat1,
    STATE(40), 1,
      sym_ktype,
  [131] = 5,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      anon_sym_STAR,
    ACTIONS(48), 1,
      sym_module_path,
    STATE(11), 1,
      aux_sym_enum_assoc_repeat1,
    STATE(24), 1,
      sym_ktype,
  [147] = 5,
    ACTIONS(39), 1,
      anon_sym_STAR,
    ACTIONS(41), 1,
      sym_module_path,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_enum_assoc_repeat1,
    STATE(24), 1,
      sym_ktype,
  [163] = 4,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(14), 1,
      aux_sym_enum_decl_repeat1,
    STATE(38), 1,
      sym_enum_assoc,
  [176] = 4,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(14), 1,
      aux_sym_enum_decl_repeat1,
    STATE(38), 1,
      sym_enum_assoc,
  [189] = 4,
    ACTIONS(39), 1,
      anon_sym_STAR,
    ACTIONS(41), 1,
      sym_module_path,
    STATE(10), 1,
      aux_sym_ktype_repeat1,
    STATE(40), 1,
      sym_ktype,
  [202] = 4,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      aux_sym_enum_decl_repeat1,
    STATE(38), 1,
      sym_enum_assoc,
  [215] = 4,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym_enum_decl_repeat1,
    STATE(38), 1,
      sym_enum_assoc,
  [228] = 2,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      sym_module_path,
  [237] = 4,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym_enum_decl_repeat1,
    STATE(38), 1,
      sym_enum_assoc,
  [250] = 4,
    ACTIONS(39), 1,
      anon_sym_STAR,
    ACTIONS(41), 1,
      sym_module_path,
    STATE(12), 1,
      aux_sym_enum_assoc_repeat1,
    STATE(24), 1,
      sym_ktype,
  [263] = 3,
    ACTIONS(72), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_generic_list_repeat1,
    STATE(37), 1,
      sym_generic_list,
  [273] = 3,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    ACTIONS(76), 1,
      sym_identifier,
    STATE(22), 1,
      aux_sym_generic_list_repeat1,
  [283] = 3,
    ACTIONS(39), 1,
      anon_sym_STAR,
    ACTIONS(41), 1,
      sym_module_path,
    STATE(27), 1,
      sym_ktype,
  [293] = 2,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(82), 2,
      anon_sym_STAR,
      sym_module_path,
  [301] = 3,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_generic_list_repeat1,
  [311] = 2,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(86), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [319] = 1,
    ACTIONS(68), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      sym_module_path,
  [325] = 1,
    ACTIONS(43), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      sym_module_path,
  [331] = 1,
    ACTIONS(29), 3,
      anon_sym_RPAREN,
      anon_sym_STAR,
      sym_module_path,
  [337] = 1,
    ACTIONS(90), 3,
      anon_sym_COMMA,
      anon_sym_STAR,
      sym_module_path,
  [343] = 1,
    ACTIONS(57), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [348] = 2,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_COMMA,
  [355] = 1,
    ACTIONS(74), 2,
      anon_sym_RPAREN,
      sym_identifier,
  [360] = 2,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
  [367] = 1,
    ACTIONS(100), 1,
      sym_identifier,
  [371] = 1,
    ACTIONS(102), 1,
      sym_identifier,
  [375] = 1,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
  [379] = 1,
    ACTIONS(106), 1,
      anon_sym_COMMA,
  [383] = 1,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
  [387] = 1,
    ACTIONS(110), 1,
      anon_sym_COMMA,
  [391] = 1,
    ACTIONS(112), 1,
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
  [SMALL_STATE(10)] = 115,
  [SMALL_STATE(11)] = 131,
  [SMALL_STATE(12)] = 147,
  [SMALL_STATE(13)] = 163,
  [SMALL_STATE(14)] = 176,
  [SMALL_STATE(15)] = 189,
  [SMALL_STATE(16)] = 202,
  [SMALL_STATE(17)] = 215,
  [SMALL_STATE(18)] = 228,
  [SMALL_STATE(19)] = 237,
  [SMALL_STATE(20)] = 250,
  [SMALL_STATE(21)] = 263,
  [SMALL_STATE(22)] = 273,
  [SMALL_STATE(23)] = 283,
  [SMALL_STATE(24)] = 293,
  [SMALL_STATE(25)] = 301,
  [SMALL_STATE(26)] = 311,
  [SMALL_STATE(27)] = 319,
  [SMALL_STATE(28)] = 325,
  [SMALL_STATE(29)] = 331,
  [SMALL_STATE(30)] = 337,
  [SMALL_STATE(31)] = 343,
  [SMALL_STATE(32)] = 348,
  [SMALL_STATE(33)] = 355,
  [SMALL_STATE(34)] = 360,
  [SMALL_STATE(35)] = 367,
  [SMALL_STATE(36)] = 371,
  [SMALL_STATE(37)] = 375,
  [SMALL_STATE(38)] = 379,
  [SMALL_STATE(39)] = 383,
  [SMALL_STATE(40)] = 387,
  [SMALL_STATE(41)] = 391,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_nodes, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 8),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 7),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_decl, 5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ktype_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ktype_repeat1, 2), SHIFT_REPEAT(23),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ktype_repeat1, 2), SHIFT_REPEAT(36),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_assoc_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_assoc_repeat1, 2), SHIFT_REPEAT(23),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_assoc_repeat1, 2), SHIFT_REPEAT(36),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_assoc, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_decl_repeat1, 2), SHIFT_REPEAT(32),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_list_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_list_repeat1, 2), SHIFT_REPEAT(26),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_assoc_repeat1, 1), SHIFT_REPEAT(28),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_assoc_repeat1, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_list, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_list_repeat1, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ktype, 5),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_assoc, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [112] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
