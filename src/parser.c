#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_AT = 1,
  anon_sym_BSLASHSexpr_LBRACE = 2,
  aux_sym_rinline_token1 = 3,
  anon_sym_RBRACE = 4,
  aux_sym__renv_sig_options_token1 = 5,
  anon_sym_COMMA = 6,
  aux_sym_renv_key_pair_token1 = 7,
  sym_renv_val = 8,
  sym__latex_word = 9,
  sym_renv_sig_beg = 10,
  sym_renv_sig_end = 11,
  sym_renv_content = 12,
  sym_source_file = 13,
  sym_rchunk = 14,
  sym_rinline = 15,
  sym__renv_sig_options = 16,
  sym_renv_key_pair = 17,
  sym_renv_key = 18,
  sym_latex = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym__renv_sig_options_repeat1 = 21,
  aux_sym_latex_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT] = "@",
  [anon_sym_BSLASHSexpr_LBRACE] = "\\Sexpr{",
  [aux_sym_rinline_token1] = "renv_content",
  [anon_sym_RBRACE] = "}",
  [aux_sym__renv_sig_options_token1] = "_renv_sig_options_token1",
  [anon_sym_COMMA] = ",",
  [aux_sym_renv_key_pair_token1] = "renv_key_pair_token1",
  [sym_renv_val] = "renv_val",
  [sym__latex_word] = "_latex_word",
  [sym_renv_sig_beg] = "renv_sig_beg",
  [sym_renv_sig_end] = "renv_sig_end",
  [sym_renv_content] = "renv_content",
  [sym_source_file] = "source_file",
  [sym_rchunk] = "rchunk",
  [sym_rinline] = "rinline",
  [sym__renv_sig_options] = "_renv_sig_options",
  [sym_renv_key_pair] = "renv_key_pair",
  [sym_renv_key] = "renv_key",
  [sym_latex] = "latex",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__renv_sig_options_repeat1] = "_renv_sig_options_repeat1",
  [aux_sym_latex_repeat1] = "latex_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_BSLASHSexpr_LBRACE] = anon_sym_BSLASHSexpr_LBRACE,
  [aux_sym_rinline_token1] = sym_renv_content,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__renv_sig_options_token1] = aux_sym__renv_sig_options_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_renv_key_pair_token1] = aux_sym_renv_key_pair_token1,
  [sym_renv_val] = sym_renv_val,
  [sym__latex_word] = sym__latex_word,
  [sym_renv_sig_beg] = sym_renv_sig_beg,
  [sym_renv_sig_end] = sym_renv_sig_end,
  [sym_renv_content] = sym_renv_content,
  [sym_source_file] = sym_source_file,
  [sym_rchunk] = sym_rchunk,
  [sym_rinline] = sym_rinline,
  [sym__renv_sig_options] = sym__renv_sig_options,
  [sym_renv_key_pair] = sym_renv_key_pair,
  [sym_renv_key] = sym_renv_key,
  [sym_latex] = sym_latex,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__renv_sig_options_repeat1] = aux_sym__renv_sig_options_repeat1,
  [aux_sym_latex_repeat1] = aux_sym_latex_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHSexpr_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_rinline_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__renv_sig_options_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_renv_key_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_renv_val] = {
    .visible = true,
    .named = true,
  },
  [sym__latex_word] = {
    .visible = false,
    .named = true,
  },
  [sym_renv_sig_beg] = {
    .visible = true,
    .named = true,
  },
  [sym_renv_sig_end] = {
    .visible = true,
    .named = true,
  },
  [sym_renv_content] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_rchunk] = {
    .visible = true,
    .named = true,
  },
  [sym_rinline] = {
    .visible = true,
    .named = true,
  },
  [sym__renv_sig_options] = {
    .visible = false,
    .named = true,
  },
  [sym_renv_key_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_renv_key] = {
    .visible = true,
    .named = true,
  },
  [sym_latex] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__renv_sig_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_latex_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_label = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_label] = "label",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_label, 0},
  [1] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 'S') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'x') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == '{') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '>') ADVANCE(21);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_BSLASHSexpr_LBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_rinline_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_rinline_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__renv_sig_options_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__renv_sig_options_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_renv_key_pair_token1);
      if (lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_renv_val);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '>') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_renv_val);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '>') ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 3},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 3},
  [13] = {.lex_state = 0, .external_lex_state = 3},
  [14] = {.lex_state = 0, .external_lex_state = 3},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0, .external_lex_state = 4},
  [17] = {.lex_state = 0, .external_lex_state = 4},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 0, .external_lex_state = 3},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 0, .external_lex_state = 3},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0, .external_lex_state = 3},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
};

enum {
  ts_external_token__latex_word = 0,
  ts_external_token_renv_sig_beg = 1,
  ts_external_token_renv_sig_end = 2,
  ts_external_token_renv_content = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__latex_word] = sym__latex_word,
  [ts_external_token_renv_sig_beg] = sym_renv_sig_beg,
  [ts_external_token_renv_sig_end] = sym_renv_sig_end,
  [ts_external_token_renv_content] = sym_renv_content,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__latex_word] = true,
    [ts_external_token_renv_sig_beg] = true,
    [ts_external_token_renv_sig_end] = true,
    [ts_external_token_renv_content] = true,
  },
  [2] = {
    [ts_external_token__latex_word] = true,
    [ts_external_token_renv_sig_beg] = true,
  },
  [3] = {
    [ts_external_token_renv_sig_end] = true,
  },
  [4] = {
    [ts_external_token_renv_content] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_BSLASHSexpr_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym__renv_sig_options_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_renv_key_pair_token1] = ACTIONS(1),
    [sym__latex_word] = ACTIONS(1),
    [sym_renv_sig_beg] = ACTIONS(1),
    [sym_renv_sig_end] = ACTIONS(1),
    [sym_renv_content] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(29),
    [sym_rchunk] = STATE(2),
    [sym_rinline] = STATE(2),
    [sym_latex] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_latex_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_BSLASHSexpr_LBRACE] = ACTIONS(5),
    [sym__latex_word] = ACTIONS(7),
    [sym_renv_sig_beg] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      anon_sym_BSLASHSexpr_LBRACE,
    ACTIONS(7), 1,
      sym__latex_word,
    ACTIONS(9), 1,
      sym_renv_sig_beg,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_latex_repeat1,
    STATE(3), 4,
      sym_rchunk,
      sym_rinline,
      sym_latex,
      aux_sym_source_file_repeat1,
  [22] = 6,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_BSLASHSexpr_LBRACE,
    ACTIONS(18), 1,
      sym__latex_word,
    ACTIONS(21), 1,
      sym_renv_sig_beg,
    STATE(5), 1,
      aux_sym_latex_repeat1,
    STATE(3), 4,
      sym_rchunk,
      sym_rinline,
      sym_latex,
      aux_sym_source_file_repeat1,
  [44] = 5,
    ACTIONS(24), 1,
      aux_sym__renv_sig_options_token1,
    ACTIONS(26), 1,
      sym_renv_sig_end,
    STATE(13), 1,
      sym_renv_key_pair,
    STATE(25), 1,
      sym_renv_key,
    STATE(26), 1,
      sym__renv_sig_options,
  [60] = 3,
    ACTIONS(30), 1,
      sym__latex_word,
    STATE(6), 1,
      aux_sym_latex_repeat1,
    ACTIONS(28), 3,
      sym_renv_sig_beg,
      ts_builtin_sym_end,
      anon_sym_BSLASHSexpr_LBRACE,
  [72] = 3,
    ACTIONS(34), 1,
      sym__latex_word,
    STATE(6), 1,
      aux_sym_latex_repeat1,
    ACTIONS(32), 3,
      sym_renv_sig_beg,
      ts_builtin_sym_end,
      anon_sym_BSLASHSexpr_LBRACE,
  [84] = 1,
    ACTIONS(37), 4,
      sym__latex_word,
      sym_renv_sig_beg,
      ts_builtin_sym_end,
      anon_sym_BSLASHSexpr_LBRACE,
  [91] = 1,
    ACTIONS(39), 4,
      sym__latex_word,
      sym_renv_sig_beg,
      ts_builtin_sym_end,
      anon_sym_BSLASHSexpr_LBRACE,
  [98] = 1,
    ACTIONS(41), 4,
      sym__latex_word,
      sym_renv_sig_beg,
      ts_builtin_sym_end,
      anon_sym_BSLASHSexpr_LBRACE,
  [105] = 1,
    ACTIONS(43), 4,
      sym__latex_word,
      sym_renv_sig_beg,
      ts_builtin_sym_end,
      anon_sym_BSLASHSexpr_LBRACE,
  [112] = 1,
    ACTIONS(45), 4,
      sym__latex_word,
      sym_renv_sig_beg,
      ts_builtin_sym_end,
      anon_sym_BSLASHSexpr_LBRACE,
  [119] = 3,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(50), 1,
      sym_renv_sig_end,
    STATE(12), 1,
      aux_sym__renv_sig_options_repeat1,
  [129] = 3,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    ACTIONS(54), 1,
      sym_renv_sig_end,
    STATE(14), 1,
      aux_sym__renv_sig_options_repeat1,
  [139] = 3,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    ACTIONS(56), 1,
      sym_renv_sig_end,
    STATE(12), 1,
      aux_sym__renv_sig_options_repeat1,
  [149] = 3,
    ACTIONS(58), 1,
      aux_sym__renv_sig_options_token1,
    STATE(19), 1,
      sym_renv_key_pair,
    STATE(25), 1,
      sym_renv_key,
  [159] = 2,
    ACTIONS(60), 1,
      anon_sym_AT,
    ACTIONS(62), 1,
      sym_renv_content,
  [166] = 2,
    ACTIONS(64), 1,
      anon_sym_AT,
    ACTIONS(66), 1,
      sym_renv_content,
  [173] = 2,
    ACTIONS(68), 1,
      aux_sym_rinline_token1,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
  [180] = 1,
    ACTIONS(50), 2,
      sym_renv_sig_end,
      anon_sym_COMMA,
  [185] = 2,
    ACTIONS(72), 1,
      aux_sym_renv_key_pair_token1,
    ACTIONS(74), 1,
      sym_renv_sig_end,
  [192] = 1,
    ACTIONS(76), 2,
      sym_renv_sig_end,
      anon_sym_COMMA,
  [197] = 1,
    ACTIONS(64), 1,
      anon_sym_AT,
  [201] = 1,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
  [205] = 1,
    ACTIONS(80), 1,
      sym_renv_val,
  [209] = 1,
    ACTIONS(82), 1,
      aux_sym_renv_key_pair_token1,
  [213] = 1,
    ACTIONS(84), 1,
      sym_renv_sig_end,
  [217] = 1,
    ACTIONS(86), 1,
      anon_sym_AT,
  [221] = 1,
    ACTIONS(72), 1,
      aux_sym_renv_key_pair_token1,
  [225] = 1,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 84,
  [SMALL_STATE(8)] = 91,
  [SMALL_STATE(9)] = 98,
  [SMALL_STATE(10)] = 105,
  [SMALL_STATE(11)] = 112,
  [SMALL_STATE(12)] = 119,
  [SMALL_STATE(13)] = 129,
  [SMALL_STATE(14)] = 139,
  [SMALL_STATE(15)] = 149,
  [SMALL_STATE(16)] = 159,
  [SMALL_STATE(17)] = 166,
  [SMALL_STATE(18)] = 173,
  [SMALL_STATE(19)] = 180,
  [SMALL_STATE(20)] = 185,
  [SMALL_STATE(21)] = 192,
  [SMALL_STATE(22)] = 197,
  [SMALL_STATE(23)] = 201,
  [SMALL_STATE(24)] = 205,
  [SMALL_STATE(25)] = 209,
  [SMALL_STATE(26)] = 213,
  [SMALL_STATE(27)] = 217,
  [SMALL_STATE(28)] = 221,
  [SMALL_STATE(29)] = 225,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_latex, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_latex_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_latex_repeat1, 2), SHIFT_REPEAT(6),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rchunk, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rchunk, 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rchunk, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rinline, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rinline, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__renv_sig_options_repeat1, 2), SHIFT_REPEAT(15),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__renv_sig_options_repeat1, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__renv_sig_options, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__renv_sig_options, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_renv_key, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__renv_sig_options, 1, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_renv_key_pair, 3, .production_id = 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [88] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_rnoweb_external_scanner_create(void);
void tree_sitter_rnoweb_external_scanner_destroy(void *);
bool tree_sitter_rnoweb_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_rnoweb_external_scanner_serialize(void *, char *);
void tree_sitter_rnoweb_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rnoweb(void) {
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
      tree_sitter_rnoweb_external_scanner_create,
      tree_sitter_rnoweb_external_scanner_destroy,
      tree_sitter_rnoweb_external_scanner_scan,
      tree_sitter_rnoweb_external_scanner_serialize,
      tree_sitter_rnoweb_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
