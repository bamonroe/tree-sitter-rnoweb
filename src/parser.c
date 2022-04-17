#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
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
  aux_sym__lsegment_token1 = 9,
  aux_sym__lsegment_token2 = 10,
  sym_source_file = 11,
  sym_rnoweb_environment = 12,
  sym_rnoweb_sig = 13,
  sym_rnoweb_options = 14,
  sym_key_val = 15,
  sym_rnoweb_content = 16,
  sym_latex = 17,
  aux_sym__lsegment = 18,
  aux_sym_source_file_repeat1 = 19,
  aux_sym_rnoweb_options_repeat1 = 20,
  aux_sym_rnoweb_content_repeat1 = 21,
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
  [aux_sym__lsegment_token1] = "_lsegment_token1",
  [aux_sym__lsegment_token2] = "_lsegment_token2",
  [sym_source_file] = "source_file",
  [sym_rnoweb_environment] = "rnoweb_environment",
  [sym_rnoweb_sig] = "rnoweb_sig",
  [sym_rnoweb_options] = "rnoweb_options",
  [sym_key_val] = "key_val",
  [sym_rnoweb_content] = "rnoweb_content",
  [sym_latex] = "latex",
  [aux_sym__lsegment] = "_lsegment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_rnoweb_options_repeat1] = "rnoweb_options_repeat1",
  [aux_sym_rnoweb_content_repeat1] = "rnoweb_content_repeat1",
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
  [aux_sym__lsegment_token1] = aux_sym__lsegment_token1,
  [aux_sym__lsegment_token2] = aux_sym__lsegment_token2,
  [sym_source_file] = sym_source_file,
  [sym_rnoweb_environment] = sym_rnoweb_environment,
  [sym_rnoweb_sig] = sym_rnoweb_sig,
  [sym_rnoweb_options] = sym_rnoweb_options,
  [sym_key_val] = sym_key_val,
  [sym_rnoweb_content] = sym_rnoweb_content,
  [sym_latex] = sym_latex,
  [aux_sym__lsegment] = aux_sym__lsegment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_rnoweb_options_repeat1] = aux_sym_rnoweb_options_repeat1,
  [aux_sym_rnoweb_content_repeat1] = aux_sym_rnoweb_content_repeat1,
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
  [aux_sym__lsegment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__lsegment_token2] = {
    .visible = false,
    .named = false,
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
  [aux_sym__lsegment] = {
    .visible = false,
    .named = false,
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
      if (eof) ADVANCE(10);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(5);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '<') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '<') ADVANCE(12);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(21);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_rvar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_rval);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_rval);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_rnoweb_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_rnoweb_content_token1);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__lsegment_token1);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__lsegment_token2);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__lsegment_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__lsegment_token2);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(24);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 7},
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
    [sym_source_file] = STATE(22),
    [sym_rnoweb_environment] = STATE(3),
    [sym_rnoweb_sig] = STATE(9),
    [sym_latex] = STATE(3),
    [aux_sym__lsegment] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_LT] = ACTIONS(5),
    [aux_sym__lsegment_token1] = ACTIONS(7),
    [aux_sym__lsegment_token2] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_LT_LT,
    STATE(6), 1,
      aux_sym__lsegment,
    STATE(9), 1,
      sym_rnoweb_sig,
    ACTIONS(14), 2,
      aux_sym__lsegment_token1,
      aux_sym__lsegment_token2,
    STATE(2), 3,
      sym_rnoweb_environment,
      sym_latex,
      aux_sym_source_file_repeat1,
  [22] = 6,
    ACTIONS(5), 1,
      anon_sym_LT_LT,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym__lsegment,
    STATE(9), 1,
      sym_rnoweb_sig,
    ACTIONS(7), 2,
      aux_sym__lsegment_token1,
      aux_sym__lsegment_token2,
    STATE(2), 3,
      sym_rnoweb_environment,
      sym_latex,
      aux_sym_source_file_repeat1,
  [44] = 5,
    ACTIONS(19), 1,
      anon_sym_GT_GT_EQ_EQ,
    ACTIONS(21), 1,
      sym_rvar,
    STATE(8), 1,
      aux_sym_rnoweb_options_repeat1,
    STATE(12), 1,
      sym_key_val,
    STATE(21), 1,
      sym_rnoweb_options,
  [60] = 4,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_LT_LT,
    STATE(5), 1,
      aux_sym__lsegment,
    ACTIONS(27), 2,
      aux_sym__lsegment_token1,
      aux_sym__lsegment_token2,
  [74] = 3,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym__lsegment,
    ACTIONS(32), 3,
      anon_sym_LT_LT,
      aux_sym__lsegment_token1,
      aux_sym__lsegment_token2,
  [86] = 2,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 3,
      anon_sym_LT_LT,
      aux_sym__lsegment_token1,
      aux_sym__lsegment_token2,
  [95] = 4,
    ACTIONS(38), 1,
      anon_sym_GT_GT_EQ_EQ,
    ACTIONS(40), 1,
      sym_rvar,
    STATE(10), 1,
      aux_sym_rnoweb_options_repeat1,
    STATE(12), 1,
      sym_key_val,
  [108] = 4,
    ACTIONS(42), 1,
      anon_sym_AT,
    ACTIONS(44), 1,
      aux_sym_rnoweb_content_token1,
    STATE(13), 1,
      aux_sym_rnoweb_content_repeat1,
    STATE(23), 1,
      sym_rnoweb_content,
  [121] = 4,
    ACTIONS(46), 1,
      anon_sym_GT_GT_EQ_EQ,
    ACTIONS(48), 1,
      sym_rvar,
    STATE(10), 1,
      aux_sym_rnoweb_options_repeat1,
    STATE(12), 1,
      sym_key_val,
  [134] = 2,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 3,
      anon_sym_LT_LT,
      aux_sym__lsegment_token1,
      aux_sym__lsegment_token2,
  [143] = 2,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(55), 2,
      anon_sym_GT_GT_EQ_EQ,
      sym_rvar,
  [151] = 3,
    ACTIONS(59), 1,
      anon_sym_AT,
    ACTIONS(61), 1,
      aux_sym_rnoweb_content_token1,
    STATE(15), 1,
      aux_sym_rnoweb_content_repeat1,
  [161] = 3,
    ACTIONS(46), 1,
      anon_sym_GT_GT_EQ_EQ,
    ACTIONS(48), 1,
      sym_rvar,
    STATE(20), 1,
      sym_key_val,
  [171] = 3,
    ACTIONS(63), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      aux_sym_rnoweb_content_token1,
    STATE(15), 1,
      aux_sym_rnoweb_content_repeat1,
  [181] = 1,
    ACTIONS(68), 3,
      anon_sym_GT_GT_EQ_EQ,
      anon_sym_COMMA,
      sym_rvar,
  [187] = 2,
    ACTIONS(70), 1,
      anon_sym_GT_GT_EQ_EQ,
    ACTIONS(72), 1,
      anon_sym_EQ,
  [194] = 2,
    ACTIONS(74), 1,
      anon_sym_AT,
    ACTIONS(76), 1,
      aux_sym_rnoweb_content_token1,
  [201] = 2,
    ACTIONS(78), 1,
      anon_sym_AT,
    ACTIONS(80), 1,
      aux_sym_rnoweb_content_token1,
  [208] = 1,
    ACTIONS(82), 2,
      anon_sym_GT_GT_EQ_EQ,
      sym_rvar,
  [213] = 1,
    ACTIONS(84), 1,
      anon_sym_GT_GT_EQ_EQ,
  [217] = 1,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
  [221] = 1,
    ACTIONS(88), 1,
      anon_sym_AT,
  [225] = 1,
    ACTIONS(90), 1,
      sym_rval,
  [229] = 1,
    ACTIONS(72), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 74,
  [SMALL_STATE(7)] = 86,
  [SMALL_STATE(8)] = 95,
  [SMALL_STATE(9)] = 108,
  [SMALL_STATE(10)] = 121,
  [SMALL_STATE(11)] = 134,
  [SMALL_STATE(12)] = 143,
  [SMALL_STATE(13)] = 151,
  [SMALL_STATE(14)] = 161,
  [SMALL_STATE(15)] = 171,
  [SMALL_STATE(16)] = 181,
  [SMALL_STATE(17)] = 187,
  [SMALL_STATE(18)] = 194,
  [SMALL_STATE(19)] = 201,
  [SMALL_STATE(20)] = 208,
  [SMALL_STATE(21)] = 213,
  [SMALL_STATE(22)] = 217,
  [SMALL_STATE(23)] = 221,
  [SMALL_STATE(24)] = 225,
  [SMALL_STATE(25)] = 229,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lsegment, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lsegment, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__lsegment, 2), SHIFT_REPEAT(5),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_latex, 1, .production_id = 1),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_latex, 1, .production_id = 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rnoweb_environment, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rnoweb_environment, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rnoweb_options, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rnoweb_options_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rnoweb_options_repeat1, 2), SHIFT_REPEAT(25),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rnoweb_environment, 3, .production_id = 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rnoweb_environment, 3, .production_id = 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rnoweb_options_repeat1, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rnoweb_content, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rnoweb_content_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rnoweb_content_repeat1, 2), SHIFT_REPEAT(15),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_val, 3, .production_id = 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rnoweb_options, 1, .production_id = 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rnoweb_sig, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rnoweb_sig, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rnoweb_sig, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rnoweb_sig, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rnoweb_options_repeat1, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [86] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
