#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_AT = 1,
  aux_sym__renv_sig_options_token1 = 2,
  anon_sym_COMMA = 3,
  aux_sym_renv_key_pair_token1 = 4,
  sym_renv_val = 5,
  sym_renv_content = 6,
  sym__latex_word = 7,
  sym_renv_sig_beg = 8,
  sym_renv_sig_end = 9,
  sym_source_file = 10,
  sym_renv = 11,
  sym__renv_sig_options = 12,
  sym_renv_key_pair = 13,
  sym_renv_key = 14,
  sym_latex = 15,
  aux_sym_source_file_repeat1 = 16,
  aux_sym__renv_sig_options_repeat1 = 17,
  aux_sym_latex_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT] = "@",
  [aux_sym__renv_sig_options_token1] = "_renv_sig_options_token1",
  [anon_sym_COMMA] = ",",
  [aux_sym_renv_key_pair_token1] = "renv_key_pair_token1",
  [sym_renv_val] = "renv_val",
  [sym_renv_content] = "renv_content",
  [sym__latex_word] = "_latex_word",
  [sym_renv_sig_beg] = "renv_sig_beg",
  [sym_renv_sig_end] = "renv_sig_end",
  [sym_source_file] = "source_file",
  [sym_renv] = "renv",
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
  [aux_sym__renv_sig_options_token1] = aux_sym__renv_sig_options_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_renv_key_pair_token1] = aux_sym_renv_key_pair_token1,
  [sym_renv_val] = sym_renv_val,
  [sym_renv_content] = sym_renv_content,
  [sym__latex_word] = sym__latex_word,
  [sym_renv_sig_beg] = sym_renv_sig_beg,
  [sym_renv_sig_end] = sym_renv_sig_end,
  [sym_source_file] = sym_source_file,
  [sym_renv] = sym_renv,
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
  [sym_renv_content] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_renv] = {
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
      if (eof) ADVANCE(4);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '@') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '@') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == '@') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '>') ADVANCE(11);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym__renv_sig_options_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym__renv_sig_options_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_renv_key_pair_token1);
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_renv_val);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '>') ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_renv_val);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '>') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_renv_content);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_renv_content);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(13);
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 3},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 3},
  [12] = {.lex_state = 0, .external_lex_state = 3},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 3},
  [17] = {.lex_state = 0, .external_lex_state = 3},
  [18] = {.lex_state = 0, .external_lex_state = 3},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0, .external_lex_state = 3},
};

enum {
  ts_external_token__latex_word = 0,
  ts_external_token_renv_sig_beg = 1,
  ts_external_token_renv_sig_end = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__latex_word] = sym__latex_word,
  [ts_external_token_renv_sig_beg] = sym_renv_sig_beg,
  [ts_external_token_renv_sig_end] = sym_renv_sig_end,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__latex_word] = true,
    [ts_external_token_renv_sig_beg] = true,
    [ts_external_token_renv_sig_end] = true,
  },
  [2] = {
    [ts_external_token__latex_word] = true,
    [ts_external_token_renv_sig_beg] = true,
  },
  [3] = {
    [ts_external_token_renv_sig_end] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__renv_sig_options_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_renv_key_pair_token1] = ACTIONS(1),
    [sym__latex_word] = ACTIONS(1),
    [sym_renv_sig_beg] = ACTIONS(1),
    [sym_renv_sig_end] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [sym_renv] = STATE(2),
    [sym_latex] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_latex_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__latex_word] = ACTIONS(5),
    [sym_renv_sig_beg] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      sym__latex_word,
    ACTIONS(7), 1,
      sym_renv_sig_beg,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_latex_repeat1,
    STATE(3), 3,
      sym_renv,
      sym_latex,
      aux_sym_source_file_repeat1,
  [18] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      sym__latex_word,
    ACTIONS(16), 1,
      sym_renv_sig_beg,
    STATE(5), 1,
      aux_sym_latex_repeat1,
    STATE(3), 3,
      sym_renv,
      sym_latex,
      aux_sym_source_file_repeat1,
  [36] = 5,
    ACTIONS(19), 1,
      aux_sym__renv_sig_options_token1,
    ACTIONS(21), 1,
      sym_renv_sig_end,
    STATE(11), 1,
      sym_renv_key_pair,
    STATE(22), 1,
      sym_renv_key,
    STATE(25), 1,
      sym__renv_sig_options,
  [52] = 3,
    ACTIONS(25), 1,
      sym__latex_word,
    STATE(6), 1,
      aux_sym_latex_repeat1,
    ACTIONS(23), 2,
      sym_renv_sig_beg,
      ts_builtin_sym_end,
  [63] = 3,
    ACTIONS(29), 1,
      sym__latex_word,
    STATE(6), 1,
      aux_sym_latex_repeat1,
    ACTIONS(27), 2,
      sym_renv_sig_beg,
      ts_builtin_sym_end,
  [74] = 3,
    ACTIONS(32), 1,
      aux_sym__renv_sig_options_token1,
    STATE(16), 1,
      sym_renv_key_pair,
    STATE(22), 1,
      sym_renv_key,
  [84] = 1,
    ACTIONS(34), 3,
      sym__latex_word,
      sym_renv_sig_beg,
      ts_builtin_sym_end,
  [90] = 3,
    ACTIONS(36), 1,
      anon_sym_COMMA,
    ACTIONS(39), 1,
      sym_renv_sig_end,
    STATE(9), 1,
      aux_sym__renv_sig_options_repeat1,
  [100] = 1,
    ACTIONS(41), 3,
      sym__latex_word,
      sym_renv_sig_beg,
      ts_builtin_sym_end,
  [106] = 3,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      sym_renv_sig_end,
    STATE(12), 1,
      aux_sym__renv_sig_options_repeat1,
  [116] = 3,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(47), 1,
      sym_renv_sig_end,
    STATE(9), 1,
      aux_sym__renv_sig_options_repeat1,
  [126] = 1,
    ACTIONS(49), 3,
      sym__latex_word,
      sym_renv_sig_beg,
      ts_builtin_sym_end,
  [132] = 2,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      sym_renv_content,
  [139] = 2,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      sym_renv_content,
  [146] = 1,
    ACTIONS(39), 2,
      sym_renv_sig_end,
      anon_sym_COMMA,
  [151] = 1,
    ACTIONS(59), 2,
      sym_renv_sig_end,
      anon_sym_COMMA,
  [156] = 2,
    ACTIONS(61), 1,
      aux_sym_renv_key_pair_token1,
    ACTIONS(63), 1,
      sym_renv_sig_end,
  [163] = 1,
    ACTIONS(65), 1,
      anon_sym_AT,
  [167] = 1,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
  [171] = 1,
    ACTIONS(69), 1,
      sym_renv_val,
  [175] = 1,
    ACTIONS(71), 1,
      aux_sym_renv_key_pair_token1,
  [179] = 1,
    ACTIONS(73), 1,
      anon_sym_AT,
  [183] = 1,
    ACTIONS(61), 1,
      aux_sym_renv_key_pair_token1,
  [187] = 1,
    ACTIONS(75), 1,
      sym_renv_sig_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 52,
  [SMALL_STATE(6)] = 63,
  [SMALL_STATE(7)] = 74,
  [SMALL_STATE(8)] = 84,
  [SMALL_STATE(9)] = 90,
  [SMALL_STATE(10)] = 100,
  [SMALL_STATE(11)] = 106,
  [SMALL_STATE(12)] = 116,
  [SMALL_STATE(13)] = 126,
  [SMALL_STATE(14)] = 132,
  [SMALL_STATE(15)] = 139,
  [SMALL_STATE(16)] = 146,
  [SMALL_STATE(17)] = 151,
  [SMALL_STATE(18)] = 156,
  [SMALL_STATE(19)] = 163,
  [SMALL_STATE(20)] = 167,
  [SMALL_STATE(21)] = 171,
  [SMALL_STATE(22)] = 175,
  [SMALL_STATE(23)] = 179,
  [SMALL_STATE(24)] = 183,
  [SMALL_STATE(25)] = 187,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_latex, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_latex_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_latex_repeat1, 2), SHIFT_REPEAT(6),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_renv, 5),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__renv_sig_options_repeat1, 2), SHIFT_REPEAT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__renv_sig_options_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_renv, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__renv_sig_options, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__renv_sig_options, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_renv, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_renv_key_pair, 3, .production_id = 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_renv_key, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__renv_sig_options, 1, .production_id = 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [67] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
