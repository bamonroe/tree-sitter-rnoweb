#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_AT = 1,
  anon_sym_LT_LT = 2,
  anon_sym_GT_GT_EQ_EQ = 3,
  anon_sym_COMMA = 4,
  anon_sym_EQ = 5,
  sym_rvar = 6,
  sym_rval = 7,
  aux_sym_rnoweb_content_token1 = 8,
  sym__word = 9,
  sym_source_file = 10,
  sym_rnoweb_environment = 11,
  sym_rnoweb_sig = 12,
  sym_rnoweb_options = 13,
  sym_key_val = 14,
  sym_rnoweb_content = 15,
  sym_latex = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_rnoweb_options_repeat1 = 18,
  aux_sym_rnoweb_content_repeat1 = 19,
  aux_sym_latex_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT] = "@",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT_EQ_EQ] = ">>==",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [sym_rvar] = "rvar",
  [sym_rval] = "rval",
  [aux_sym_rnoweb_content_token1] = "rnoweb_content_token1",
  [sym__word] = "_word",
  [sym_source_file] = "source_file",
  [sym_rnoweb_environment] = "rnoweb_environment",
  [sym_rnoweb_sig] = "rnoweb_sig",
  [sym_rnoweb_options] = "rnoweb_options",
  [sym_key_val] = "key_val",
  [sym_rnoweb_content] = "rnoweb_content",
  [sym_latex] = "latex",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_rnoweb_options_repeat1] = "rnoweb_options_repeat1",
  [aux_sym_rnoweb_content_repeat1] = "rnoweb_content_repeat1",
  [aux_sym_latex_repeat1] = "latex_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT_EQ_EQ] = anon_sym_GT_GT_EQ_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_rvar] = sym_rvar,
  [sym_rval] = sym_rval,
  [aux_sym_rnoweb_content_token1] = aux_sym_rnoweb_content_token1,
  [sym__word] = sym__word,
  [sym_source_file] = sym_source_file,
  [sym_rnoweb_environment] = sym_rnoweb_environment,
  [sym_rnoweb_sig] = sym_rnoweb_sig,
  [sym_rnoweb_options] = sym_rnoweb_options,
  [sym_key_val] = sym_key_val,
  [sym_rnoweb_content] = sym_rnoweb_content,
  [sym_latex] = sym_latex,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_rnoweb_options_repeat1] = aux_sym_rnoweb_options_repeat1,
  [aux_sym_rnoweb_content_repeat1] = aux_sym_rnoweb_content_repeat1,
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
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_rvar] = {
    .visible = true,
    .named = true,
  },
  [sym_rval] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_rnoweb_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_rnoweb_environment] = {
    .visible = true,
    .named = true,
  },
  [sym_rnoweb_sig] = {
    .visible = true,
    .named = true,
  },
  [sym_rnoweb_options] = {
    .visible = true,
    .named = true,
  },
  [sym_key_val] = {
    .visible = true,
    .named = true,
  },
  [sym_rnoweb_content] = {
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
  [aux_sym_rnoweb_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rnoweb_content_repeat1] = {
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
  field_latex = 3,
  field_rnoweb_content = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_label] = "label",
  [field_latex] = "latex",
  [field_rnoweb_content] = "rnoweb_content",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_latex, 0},
  [1] =
    {field_label, 0},
  [2] =
    {field_rnoweb_content, 1},
  [3] =
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
      if (eof) ADVANCE(8);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(4);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '<') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(16);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_rvar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_rval);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_rval);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_rnoweb_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_rnoweb_content_token1);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(20);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT_EQ_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_rvar] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(21),
    [sym_rnoweb_environment] = STATE(2),
    [sym_rnoweb_sig] = STATE(7),
    [sym_latex] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_latex_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_LT] = ACTIONS(5),
    [sym__word] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      anon_sym_LT_LT,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_rnoweb_sig,
    STATE(8), 1,
      aux_sym_latex_repeat1,
    STATE(3), 3,
      sym_rnoweb_environment,
      sym_latex,
      aux_sym_source_file_repeat1,
  [21] = 6,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_LT_LT,
    ACTIONS(16), 1,
      sym__word,
    STATE(7), 1,
      sym_rnoweb_sig,
    STATE(8), 1,
      aux_sym_latex_repeat1,
    STATE(3), 3,
      sym_rnoweb_environment,
      sym_latex,
      aux_sym_source_file_repeat1,
  [42] = 5,
    ACTIONS(19), 1,
      anon_sym_GT_GT_EQ_EQ,
    ACTIONS(21), 1,
      sym_rvar,
    STATE(5), 1,
      aux_sym_rnoweb_options_repeat1,
    STATE(11), 1,
      sym_key_val,
    STATE(23), 1,
      sym_rnoweb_options,
  [58] = 4,
    ACTIONS(23), 1,
      anon_sym_GT_GT_EQ_EQ,
    ACTIONS(25), 1,
      sym_rvar,
    STATE(6), 1,
      aux_sym_rnoweb_options_repeat1,
    STATE(11), 1,
      sym_key_val,
  [71] = 4,
    ACTIONS(27), 1,
      anon_sym_GT_GT_EQ_EQ,
    ACTIONS(29), 1,
      sym_rvar,
    STATE(6), 1,
      aux_sym_rnoweb_options_repeat1,
    STATE(11), 1,
      sym_key_val,
  [84] = 4,
    ACTIONS(32), 1,
      anon_sym_AT,
    ACTIONS(34), 1,
      aux_sym_rnoweb_content_token1,
    STATE(12), 1,
      aux_sym_rnoweb_content_repeat1,
    STATE(22), 1,
      sym_rnoweb_content,
  [97] = 3,
    ACTIONS(38), 1,
      anon_sym_LT_LT,
    STATE(9), 1,
      aux_sym_latex_repeat1,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      sym__word,
  [108] = 4,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      anon_sym_LT_LT,
    ACTIONS(44), 1,
      sym__word,
    STATE(9), 1,
      aux_sym_latex_repeat1,
  [121] = 2,
    ACTIONS(49), 1,
      anon_sym_LT_LT,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym__word,
  [129] = 2,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(51), 2,
      anon_sym_GT_GT_EQ_EQ,
      sym_rvar,
  [137] = 3,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      aux_sym_rnoweb_content_token1,
    STATE(15), 1,
      aux_sym_rnoweb_content_repeat1,
  [147] = 3,
    ACTIONS(27), 1,
      anon_sym_GT_GT_EQ_EQ,
    ACTIONS(29), 1,
      sym_rvar,
    STATE(20), 1,
      sym_key_val,
  [157] = 2,
    ACTIONS(61), 1,
      anon_sym_LT_LT,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym__word,
  [165] = 3,
    ACTIONS(63), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      aux_sym_rnoweb_content_token1,
    STATE(15), 1,
      aux_sym_rnoweb_content_repeat1,
  [175] = 1,
    ACTIONS(68), 3,
      anon_sym_GT_GT_EQ_EQ,
      anon_sym_COMMA,
      sym_rvar,
  [181] = 2,
    ACTIONS(70), 1,
      anon_sym_GT_GT_EQ_EQ,
    ACTIONS(72), 1,
      anon_sym_EQ,
  [188] = 2,
    ACTIONS(74), 1,
      anon_sym_AT,
    ACTIONS(76), 1,
      aux_sym_rnoweb_content_token1,
  [195] = 2,
    ACTIONS(78), 1,
      anon_sym_AT,
    ACTIONS(80), 1,
      aux_sym_rnoweb_content_token1,
  [202] = 1,
    ACTIONS(82), 2,
      anon_sym_GT_GT_EQ_EQ,
      sym_rvar,
  [207] = 1,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
  [211] = 1,
    ACTIONS(86), 1,
      anon_sym_AT,
  [215] = 1,
    ACTIONS(88), 1,
      anon_sym_GT_GT_EQ_EQ,
  [219] = 1,
    ACTIONS(90), 1,
      sym_rval,
  [223] = 1,
    ACTIONS(72), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 58,
  [SMALL_STATE(6)] = 71,
  [SMALL_STATE(7)] = 84,
  [SMALL_STATE(8)] = 97,
  [SMALL_STATE(9)] = 108,
  [SMALL_STATE(10)] = 121,
  [SMALL_STATE(11)] = 129,
  [SMALL_STATE(12)] = 137,
  [SMALL_STATE(13)] = 147,
  [SMALL_STATE(14)] = 157,
  [SMALL_STATE(15)] = 165,
  [SMALL_STATE(16)] = 175,
  [SMALL_STATE(17)] = 181,
  [SMALL_STATE(18)] = 188,
  [SMALL_STATE(19)] = 195,
  [SMALL_STATE(20)] = 202,
  [SMALL_STATE(21)] = 207,
  [SMALL_STATE(22)] = 211,
  [SMALL_STATE(23)] = 215,
  [SMALL_STATE(24)] = 219,
  [SMALL_STATE(25)] = 223,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rnoweb_options, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rnoweb_options_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rnoweb_options_repeat1, 2), SHIFT_REPEAT(25),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_latex, 1, .production_id = 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_latex, 1, .production_id = 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_latex_repeat1, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_latex_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_latex_repeat1, 2), SHIFT_REPEAT(9),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rnoweb_environment, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rnoweb_environment, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rnoweb_options_repeat1, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rnoweb_content, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rnoweb_environment, 3, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rnoweb_environment, 3, .production_id = 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rnoweb_content_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rnoweb_content_repeat1, 2), SHIFT_REPEAT(15),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_val, 3, .production_id = 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rnoweb_options, 1, .production_id = 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rnoweb_sig, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rnoweb_sig, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rnoweb_sig, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rnoweb_sig, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rnoweb_options_repeat1, 3),
  [84] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
};

#ifdef __cplusplus
extern "C" {
#endif
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
