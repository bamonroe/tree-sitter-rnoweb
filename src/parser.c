#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LT_LT_GT_GT_EQ_EQ = 1,
  anon_sym_AT = 2,
  aux_sym_rnoweb_content_token1 = 3,
  sym__word = 4,
  sym_source_file = 5,
  sym_rnoweb_environment = 6,
  sym_rnoweb_content = 7,
  sym_latex = 8,
  aux_sym_source_file_repeat1 = 9,
  aux_sym_rnoweb_content_repeat1 = 10,
  aux_sym_latex_repeat1 = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_LT_GT_GT_EQ_EQ] = "<<>>==",
  [anon_sym_AT] = "@",
  [aux_sym_rnoweb_content_token1] = "rnoweb_content_token1",
  [sym__word] = "_word",
  [sym_source_file] = "source_file",
  [sym_rnoweb_environment] = "rnoweb_environment",
  [sym_rnoweb_content] = "rnoweb_content",
  [sym_latex] = "latex",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_rnoweb_content_repeat1] = "rnoweb_content_repeat1",
  [aux_sym_latex_repeat1] = "latex_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_LT_GT_GT_EQ_EQ] = anon_sym_LT_LT_GT_GT_EQ_EQ,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_rnoweb_content_token1] = aux_sym_rnoweb_content_token1,
  [sym__word] = sym__word,
  [sym_source_file] = sym_source_file,
  [sym_rnoweb_environment] = sym_rnoweb_environment,
  [sym_rnoweb_content] = sym_rnoweb_content,
  [sym_latex] = sym_latex,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_rnoweb_content_repeat1] = aux_sym_rnoweb_content_repeat1,
  [aux_sym_latex_repeat1] = aux_sym_latex_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_LT_GT_GT_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
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
  field_latex = 1,
  field_rnoweb_content = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_latex] = "latex",
  [field_rnoweb_content] = "rnoweb_content",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_latex, 0},
  [1] =
    {field_rnoweb_content, 1},
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
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '<') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == '=') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LT_LT_GT_GT_EQ_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_rnoweb_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_rnoweb_content_token1);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(14);
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
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_LT_GT_GT_EQ_EQ] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym_rnoweb_environment] = STATE(2),
    [sym_latex] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_latex_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_LT_GT_GT_EQ_EQ] = ACTIONS(5),
    [sym__word] = ACTIONS(7),
  },
  [2] = {
    [sym_rnoweb_environment] = STATE(3),
    [sym_latex] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_latex_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_LT_LT_GT_GT_EQ_EQ] = ACTIONS(5),
    [sym__word] = ACTIONS(7),
  },
  [3] = {
    [sym_rnoweb_environment] = STATE(3),
    [sym_latex] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_latex_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_LT_LT_GT_GT_EQ_EQ] = ACTIONS(13),
    [sym__word] = ACTIONS(16),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(21), 1,
      aux_sym_rnoweb_content_token1,
    STATE(8), 1,
      aux_sym_rnoweb_content_repeat1,
    STATE(12), 1,
      sym_rnoweb_content,
  [13] = 3,
    ACTIONS(25), 1,
      anon_sym_LT_LT_GT_GT_EQ_EQ,
    STATE(6), 1,
      aux_sym_latex_repeat1,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      sym__word,
  [24] = 4,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_LT_LT_GT_GT_EQ_EQ,
    ACTIONS(31), 1,
      sym__word,
    STATE(6), 1,
      aux_sym_latex_repeat1,
  [37] = 2,
    ACTIONS(36), 1,
      anon_sym_LT_LT_GT_GT_EQ_EQ,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      sym__word,
  [45] = 3,
    ACTIONS(38), 1,
      anon_sym_AT,
    ACTIONS(40), 1,
      aux_sym_rnoweb_content_token1,
    STATE(10), 1,
      aux_sym_rnoweb_content_repeat1,
  [55] = 2,
    ACTIONS(44), 1,
      anon_sym_LT_LT_GT_GT_EQ_EQ,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      sym__word,
  [63] = 3,
    ACTIONS(46), 1,
      anon_sym_AT,
    ACTIONS(48), 1,
      aux_sym_rnoweb_content_token1,
    STATE(10), 1,
      aux_sym_rnoweb_content_repeat1,
  [73] = 1,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
  [77] = 1,
    ACTIONS(53), 1,
      anon_sym_AT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 13,
  [SMALL_STATE(6)] = 24,
  [SMALL_STATE(7)] = 37,
  [SMALL_STATE(8)] = 45,
  [SMALL_STATE(9)] = 55,
  [SMALL_STATE(10)] = 63,
  [SMALL_STATE(11)] = 73,
  [SMALL_STATE(12)] = 77,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_latex, 1, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_latex, 1, .production_id = 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_latex_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_latex_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_latex_repeat1, 2), SHIFT_REPEAT(6),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rnoweb_environment, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rnoweb_environment, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rnoweb_content, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rnoweb_environment, 3, .production_id = 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rnoweb_environment, 3, .production_id = 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rnoweb_content_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rnoweb_content_repeat1, 2), SHIFT_REPEAT(10),
  [51] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
