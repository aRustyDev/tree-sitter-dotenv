#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  aux_sym__line_token1 = 1,
  sym_comment = 2,
  anon_sym_EQ = 3,
  sym_raw_value = 4,
  anon_sym_DQUOTE = 5,
  aux_sym_string_double_token1 = 6,
  anon_sym_SQUOTE = 7,
  aux_sym_string_single_token1 = 8,
  anon_sym_DOLLAR_LBRACE = 9,
  aux_sym_interpolation_default_token1 = 10,
  anon_sym_RBRACE = 11,
  anon_sym_DOLLAR = 12,
  sym_interpolation_value = 13,
  sym_escape_sequence = 14,
  aux_sym_identifier_token1 = 15,
  anon_sym_AT = 16,
  aux_sym_identifier_token2 = 17,
  anon_sym_COLON = 18,
  sym_bool = 19,
  sym_integer = 20,
  sym_source_file = 21,
  sym__line = 22,
  sym_variable = 23,
  sym__value = 24,
  sym_string_double = 25,
  sym_string_single = 26,
  sym_interpolation = 27,
  sym_interpolation_default = 28,
  sym_interpolation_simple = 29,
  sym_interpolation_short = 30,
  sym_identifier = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_string_double_repeat1 = 33,
  aux_sym_string_single_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__line_token1] = "_line_token1",
  [sym_comment] = "comment",
  [anon_sym_EQ] = "=",
  [sym_raw_value] = "raw_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_double_token1] = "string_double_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_single_token1] = "string_single_token1",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [aux_sym_interpolation_default_token1] = "interpolation_default_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOLLAR] = "$",
  [sym_interpolation_value] = "interpolation_value",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_AT] = "@",
  [aux_sym_identifier_token2] = "identifier_token2",
  [anon_sym_COLON] = ":",
  [sym_bool] = "bool",
  [sym_integer] = "integer",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_variable] = "variable",
  [sym__value] = "_value",
  [sym_string_double] = "string_double",
  [sym_string_single] = "string_single",
  [sym_interpolation] = "interpolation",
  [sym_interpolation_default] = "interpolation_default",
  [sym_interpolation_simple] = "interpolation_simple",
  [sym_interpolation_short] = "interpolation_short",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_double_repeat1] = "string_double_repeat1",
  [aux_sym_string_single_repeat1] = "string_single_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [sym_comment] = sym_comment,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_raw_value] = sym_raw_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_double_token1] = aux_sym_string_double_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_single_token1] = aux_sym_string_single_token1,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [aux_sym_interpolation_default_token1] = aux_sym_interpolation_default_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_interpolation_value] = sym_interpolation_value,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_identifier_token2] = aux_sym_identifier_token2,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_bool] = sym_bool,
  [sym_integer] = sym_integer,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym_variable] = sym_variable,
  [sym__value] = sym__value,
  [sym_string_double] = sym_string_double,
  [sym_string_single] = sym_string_single,
  [sym_interpolation] = sym_interpolation,
  [sym_interpolation_default] = sym_interpolation_default,
  [sym_interpolation_simple] = sym_interpolation_simple,
  [sym_interpolation_short] = sym_interpolation_short,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_double_repeat1] = aux_sym_string_double_repeat1,
  [aux_sym_string_single_repeat1] = aux_sym_string_single_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_raw_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_double_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_single_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_interpolation_default_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_interpolation_value] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_string_double] = {
    .visible = true,
    .named = true,
  },
  [sym_string_single] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation_default] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation_simple] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation_short] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_double_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_single_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_default = 1,
  field_name = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_default] = "default",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 0},
    {field_value, 2},
  [3] =
    {field_name, 1},
  [4] =
    {field_default, 3},
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
  [21] = 11,
  [22] = 22,
  [23] = 23,
  [24] = 10,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 28,
  [36] = 29,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      ADVANCE_MAP(
        '\n', 12,
        '\r', 1,
        '"', 26,
        '#', 14,
        '$', 37,
        '\'', 30,
        '+', 7,
        '-', 50,
        ':', 52,
        '=', 15,
        '@', 48,
        '\\', 8,
        'f', 41,
        't', 44,
        '}', 36,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '$') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 9:
      if (eof) ADVANCE(11);
      ADVANCE_MAP(
        '\n', 12,
        '\r', 1,
        '"', 26,
        '#', 13,
        '\'', 30,
        '@', 49,
        'f', 17,
        't', 20,
        '\t', 16,
        ' ', 16,
        '+', 23,
        '-', 23,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_raw_value);
      ADVANCE_MAP(
        '"', 27,
        '#', 13,
        '\'', 31,
        '@', 49,
        'f', 17,
        't', 20,
        '\t', 16,
        ' ', 16,
        '+', 23,
        '-', 23,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(25);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(25);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(25);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(25);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'r') ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(25);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(25);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'u') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(25);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_raw_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(25);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_string_double_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_double_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(25);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_string_single_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_string_single_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_interpolation_default_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(34);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_interpolation_value);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_interpolation_value);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(25);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_bool);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_identifier_token2] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_bool] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(27),
    [sym__line] = STATE(7),
    [sym_variable] = STATE(7),
    [sym_identifier] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__line_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(5),
    [aux_sym_identifier_token1] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 3,
      sym_raw_value,
      sym_bool,
      sym_integer,
    STATE(13), 3,
      sym__value,
      sym_string_double,
      sym_string_single,
    ACTIONS(13), 4,
      aux_sym__line_token1,
      sym_comment,
      aux_sym_identifier_token1,
      anon_sym_AT,
  [26] = 7,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      aux_sym_string_double_token1,
    ACTIONS(26), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(29), 1,
      anon_sym_DOLLAR,
    ACTIONS(32), 1,
      sym_escape_sequence,
    STATE(3), 2,
      sym_interpolation,
      aux_sym_string_double_repeat1,
    STATE(8), 3,
      sym_interpolation_default,
      sym_interpolation_simple,
      sym_interpolation_short,
  [51] = 7,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_string_double_token1,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    ACTIONS(43), 1,
      sym_escape_sequence,
    STATE(3), 2,
      sym_interpolation,
      aux_sym_string_double_repeat1,
    STATE(8), 3,
      sym_interpolation_default,
      sym_interpolation_simple,
      sym_interpolation_short,
  [76] = 7,
    ACTIONS(39), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      aux_sym_string_double_token1,
    ACTIONS(49), 1,
      sym_escape_sequence,
    STATE(4), 2,
      sym_interpolation,
      aux_sym_string_double_repeat1,
    STATE(8), 3,
      sym_interpolation_default,
      sym_interpolation_simple,
      sym_interpolation_short,
  [101] = 6,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      aux_sym_identifier_token1,
    ACTIONS(59), 1,
      anon_sym_AT,
    STATE(31), 1,
      sym_identifier,
    ACTIONS(53), 2,
      aux_sym__line_token1,
      sym_comment,
    STATE(6), 3,
      sym__line,
      sym_variable,
      aux_sym_source_file_repeat1,
  [123] = 6,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym_identifier,
    ACTIONS(64), 2,
      aux_sym__line_token1,
      sym_comment,
    STATE(6), 3,
      sym__line,
      sym_variable,
      aux_sym_source_file_repeat1,
  [145] = 2,
    ACTIONS(68), 1,
      aux_sym_string_double_token1,
    ACTIONS(66), 4,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR,
      sym_escape_sequence,
  [155] = 1,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      aux_sym_identifier_token1,
      anon_sym_AT,
  [163] = 2,
    ACTIONS(74), 1,
      aux_sym_string_double_token1,
    ACTIONS(72), 4,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR,
      sym_escape_sequence,
  [173] = 2,
    ACTIONS(78), 1,
      aux_sym_string_double_token1,
    ACTIONS(76), 4,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR,
      sym_escape_sequence,
  [183] = 2,
    ACTIONS(82), 1,
      aux_sym_string_double_token1,
    ACTIONS(80), 4,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR,
      sym_escape_sequence,
  [193] = 1,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      aux_sym_identifier_token1,
      anon_sym_AT,
  [201] = 2,
    ACTIONS(88), 1,
      aux_sym_string_double_token1,
    ACTIONS(86), 4,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR,
      sym_escape_sequence,
  [211] = 1,
    ACTIONS(90), 5,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      aux_sym_identifier_token1,
      anon_sym_AT,
  [219] = 1,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      aux_sym_identifier_token1,
      anon_sym_AT,
  [227] = 1,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      aux_sym_identifier_token1,
      anon_sym_AT,
  [235] = 2,
    ACTIONS(98), 1,
      aux_sym_string_double_token1,
    ACTIONS(96), 4,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR,
      sym_escape_sequence,
  [245] = 3,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym_identifier,
  [255] = 3,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(102), 1,
      aux_sym_string_single_token1,
    STATE(23), 1,
      aux_sym_string_single_repeat1,
  [265] = 1,
    ACTIONS(78), 3,
      anon_sym_EQ,
      aux_sym_interpolation_default_token1,
      anon_sym_RBRACE,
  [271] = 3,
    ACTIONS(104), 1,
      aux_sym_identifier_token1,
    ACTIONS(106), 1,
      anon_sym_AT,
    STATE(18), 1,
      sym_identifier,
  [281] = 3,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      aux_sym_string_single_token1,
    STATE(23), 1,
      aux_sym_string_single_repeat1,
  [291] = 1,
    ACTIONS(74), 3,
      anon_sym_EQ,
      aux_sym_interpolation_default_token1,
      anon_sym_RBRACE,
  [297] = 3,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      aux_sym_string_single_token1,
    STATE(20), 1,
      aux_sym_string_single_repeat1,
  [307] = 2,
    ACTIONS(117), 1,
      aux_sym_interpolation_default_token1,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
  [314] = 1,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
  [318] = 1,
    ACTIONS(123), 1,
      anon_sym_COLON,
  [322] = 1,
    ACTIONS(125), 1,
      aux_sym_identifier_token2,
  [326] = 1,
    ACTIONS(127), 1,
      sym_interpolation_value,
  [330] = 1,
    ACTIONS(129), 1,
      anon_sym_EQ,
  [334] = 1,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
  [338] = 1,
    ACTIONS(133), 1,
      aux_sym_identifier_token2,
  [342] = 1,
    ACTIONS(135), 1,
      aux_sym_identifier_token2,
  [346] = 1,
    ACTIONS(137), 1,
      anon_sym_COLON,
  [350] = 1,
    ACTIONS(139), 1,
      aux_sym_identifier_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 51,
  [SMALL_STATE(5)] = 76,
  [SMALL_STATE(6)] = 101,
  [SMALL_STATE(7)] = 123,
  [SMALL_STATE(8)] = 145,
  [SMALL_STATE(9)] = 155,
  [SMALL_STATE(10)] = 163,
  [SMALL_STATE(11)] = 173,
  [SMALL_STATE(12)] = 183,
  [SMALL_STATE(13)] = 193,
  [SMALL_STATE(14)] = 201,
  [SMALL_STATE(15)] = 211,
  [SMALL_STATE(16)] = 219,
  [SMALL_STATE(17)] = 227,
  [SMALL_STATE(18)] = 235,
  [SMALL_STATE(19)] = 245,
  [SMALL_STATE(20)] = 255,
  [SMALL_STATE(21)] = 265,
  [SMALL_STATE(22)] = 271,
  [SMALL_STATE(23)] = 281,
  [SMALL_STATE(24)] = 291,
  [SMALL_STATE(25)] = 297,
  [SMALL_STATE(26)] = 307,
  [SMALL_STATE(27)] = 314,
  [SMALL_STATE(28)] = 318,
  [SMALL_STATE(29)] = 322,
  [SMALL_STATE(30)] = 326,
  [SMALL_STATE(31)] = 330,
  [SMALL_STATE(32)] = 334,
  [SMALL_STATE(33)] = 338,
  [SMALL_STATE(34)] = 342,
  [SMALL_STATE(35)] = 346,
  [SMALL_STATE(36)] = 350,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, 0, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_double_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_double_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_double_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_double_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_double_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_single, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 4, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 4, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation_default, 5, 0, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation_default, 5, 0, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation_simple, 3, 0, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation_simple, 3, 0, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_double, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_single, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_double, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation_short, 2, 0, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation_short, 2, 0, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_single_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_single_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [121] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_env(void) {
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
