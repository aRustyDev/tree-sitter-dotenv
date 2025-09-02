#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
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
  sym_url = 21,
  sym_uri = 22,
  sym_source_file = 23,
  sym__line = 24,
  sym_variable = 25,
  sym__value = 26,
  sym_string_double = 27,
  sym_string_single = 28,
  sym_interpolation = 29,
  sym_interpolation_default = 30,
  sym_interpolation_simple = 31,
  sym_interpolation_short = 32,
  sym_identifier = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_string_double_repeat1 = 35,
  aux_sym_string_single_repeat1 = 36,
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
  [sym_url] = "url",
  [sym_uri] = "uri",
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
  [sym_url] = sym_url,
  [sym_uri] = sym_uri,
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
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_uri] = {
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

static TSCharacterRange sym_url_character_set_2[] = {
  {'!', '!'}, {'$', '$'}, {'&', '.'}, {'0', ';'}, {'=', '='}, {'@', 'Z'}, {'_', '_'}, {'a', 'z'},
  {'~', '~'},
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
        '"', 121,
        '#', 14,
        '$', 132,
        '\'', 125,
        '+', 7,
        '-', 146,
        ':', 148,
        '=', 15,
        '@', 144,
        '\\', 8,
        'f', 136,
        't', 139,
        '}', 131,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '$') ADVANCE(132);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(127);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(130);
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(134);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(135);
      END_STATE();
    case 9:
      if (eof) ADVANCE(11);
      ADVANCE_MAP(
        '\n', 12,
        '\r', 1,
        '"', 121,
        '#', 13,
        '\'', 125,
        '@', 145,
        'a', 70,
        'd', 37,
        'f', 32,
        'g', 59,
        'h', 110,
        'j', 42,
        'k', 35,
        'l', 45,
        'm', 36,
        'p', 75,
        'r', 50,
        's', 22,
        't', 87,
        'u', 88,
        'w', 92,
        '\t', 16,
        ' ', 16,
        '+', 118,
        '-', 118,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '@') ADVANCE(144);
      if (lookahead == '}') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
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
        '"', 122,
        '#', 13,
        '\'', 126,
        '@', 145,
        'a', 70,
        'd', 37,
        'f', 32,
        'g', 59,
        'h', 110,
        'j', 42,
        'k', 35,
        'l', 45,
        'm', 36,
        'p', 75,
        'r', 50,
        's', 22,
        't', 87,
        'u', 88,
        'w', 92,
        '\t', 16,
        ' ', 16,
        '+', 118,
        '-', 118,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == '/') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == '/') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == '3') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 'q') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 'q') ADVANCE(111);
      if (lookahead == 'y') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'b') ADVANCE(41);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'd') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'd') ADVANCE(33);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'g') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'g') ADVANCE(77);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'g') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'h') ADVANCE(26);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'h') ADVANCE(107);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'h') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'k') ADVANCE(34);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'm') ADVANCE(82);
      if (lookahead == 'z') ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'm') ADVANCE(115);
      if (lookahead == 'p') ADVANCE(76);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'p') ADVANCE(24);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'p') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'q') ADVANCE(79);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'q') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'q') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'q') ADVANCE(64);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 's') ADVANCE(23);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 's') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'u') ADVANCE(46);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'u') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == 'y') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('&' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(161);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(161);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_raw_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_string_double_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_string_double_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_string_single_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_string_single_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_interpolation_default_token1);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(129);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_interpolation_value);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_interpolation_value);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == 'u') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(120);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_bool);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '@') ADVANCE(160);
      if (lookahead == '!' ||
          lookahead == '$' ||
          ('&' <= lookahead && lookahead <= ',') ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(158);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == ':') ADVANCE(159);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '@') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (set_contains(sym_url_character_set_2, 9, lookahead)) ADVANCE(158);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead == '/') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '@') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (set_contains(sym_url_character_set_2, 9, lookahead)) ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(161);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '@') ADVANCE(160);
      if (set_contains(sym_url_character_set_2, 9, lookahead)) ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '!') ADVANCE(161);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_uri);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(161);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_uri);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(161);
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
    STATE(13), 3,
      sym__value,
      sym_string_double,
      sym_string_single,
    ACTIONS(13), 4,
      aux_sym__line_token1,
      sym_comment,
      aux_sym_identifier_token1,
      anon_sym_AT,
    ACTIONS(15), 5,
      sym_raw_value,
      sym_bool,
      sym_integer,
      sym_url,
      sym_uri,
  [28] = 7,
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
  [53] = 7,
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
  [78] = 7,
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
  [103] = 6,
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
  [125] = 6,
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
  [147] = 2,
    ACTIONS(68), 1,
      aux_sym_string_double_token1,
    ACTIONS(66), 4,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR,
      sym_escape_sequence,
  [157] = 1,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      aux_sym_identifier_token1,
      anon_sym_AT,
  [165] = 2,
    ACTIONS(74), 1,
      aux_sym_string_double_token1,
    ACTIONS(72), 4,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR,
      sym_escape_sequence,
  [175] = 2,
    ACTIONS(78), 1,
      aux_sym_string_double_token1,
    ACTIONS(76), 4,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR,
      sym_escape_sequence,
  [185] = 2,
    ACTIONS(82), 1,
      aux_sym_string_double_token1,
    ACTIONS(80), 4,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR,
      sym_escape_sequence,
  [195] = 1,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      aux_sym_identifier_token1,
      anon_sym_AT,
  [203] = 2,
    ACTIONS(88), 1,
      aux_sym_string_double_token1,
    ACTIONS(86), 4,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR,
      sym_escape_sequence,
  [213] = 1,
    ACTIONS(90), 5,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      aux_sym_identifier_token1,
      anon_sym_AT,
  [221] = 1,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      aux_sym_identifier_token1,
      anon_sym_AT,
  [229] = 1,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      sym_comment,
      aux_sym_identifier_token1,
      anon_sym_AT,
  [237] = 2,
    ACTIONS(98), 1,
      aux_sym_string_double_token1,
    ACTIONS(96), 4,
      anon_sym_DQUOTE,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR,
      sym_escape_sequence,
  [247] = 3,
    ACTIONS(7), 1,
      aux_sym_identifier_token1,
    ACTIONS(9), 1,
      anon_sym_AT,
    STATE(26), 1,
      sym_identifier,
  [257] = 3,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(102), 1,
      aux_sym_string_single_token1,
    STATE(23), 1,
      aux_sym_string_single_repeat1,
  [267] = 1,
    ACTIONS(78), 3,
      anon_sym_EQ,
      aux_sym_interpolation_default_token1,
      anon_sym_RBRACE,
  [273] = 3,
    ACTIONS(104), 1,
      aux_sym_identifier_token1,
    ACTIONS(106), 1,
      anon_sym_AT,
    STATE(18), 1,
      sym_identifier,
  [283] = 3,
    ACTIONS(108), 1,
      anon_sym_SQUOTE,
    ACTIONS(110), 1,
      aux_sym_string_single_token1,
    STATE(23), 1,
      aux_sym_string_single_repeat1,
  [293] = 1,
    ACTIONS(74), 3,
      anon_sym_EQ,
      aux_sym_interpolation_default_token1,
      anon_sym_RBRACE,
  [299] = 3,
    ACTIONS(113), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      aux_sym_string_single_token1,
    STATE(20), 1,
      aux_sym_string_single_repeat1,
  [309] = 2,
    ACTIONS(117), 1,
      aux_sym_interpolation_default_token1,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
  [316] = 1,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
  [320] = 1,
    ACTIONS(123), 1,
      anon_sym_COLON,
  [324] = 1,
    ACTIONS(125), 1,
      aux_sym_identifier_token2,
  [328] = 1,
    ACTIONS(127), 1,
      sym_interpolation_value,
  [332] = 1,
    ACTIONS(129), 1,
      anon_sym_EQ,
  [336] = 1,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
  [340] = 1,
    ACTIONS(133), 1,
      aux_sym_identifier_token2,
  [344] = 1,
    ACTIONS(135), 1,
      aux_sym_identifier_token2,
  [348] = 1,
    ACTIONS(137), 1,
      anon_sym_COLON,
  [352] = 1,
    ACTIONS(139), 1,
      aux_sym_identifier_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 103,
  [SMALL_STATE(7)] = 125,
  [SMALL_STATE(8)] = 147,
  [SMALL_STATE(9)] = 157,
  [SMALL_STATE(10)] = 165,
  [SMALL_STATE(11)] = 175,
  [SMALL_STATE(12)] = 185,
  [SMALL_STATE(13)] = 195,
  [SMALL_STATE(14)] = 203,
  [SMALL_STATE(15)] = 213,
  [SMALL_STATE(16)] = 221,
  [SMALL_STATE(17)] = 229,
  [SMALL_STATE(18)] = 237,
  [SMALL_STATE(19)] = 247,
  [SMALL_STATE(20)] = 257,
  [SMALL_STATE(21)] = 267,
  [SMALL_STATE(22)] = 273,
  [SMALL_STATE(23)] = 283,
  [SMALL_STATE(24)] = 293,
  [SMALL_STATE(25)] = 299,
  [SMALL_STATE(26)] = 309,
  [SMALL_STATE(27)] = 316,
  [SMALL_STATE(28)] = 320,
  [SMALL_STATE(29)] = 324,
  [SMALL_STATE(30)] = 328,
  [SMALL_STATE(31)] = 332,
  [SMALL_STATE(32)] = 336,
  [SMALL_STATE(33)] = 340,
  [SMALL_STATE(34)] = 344,
  [SMALL_STATE(35)] = 348,
  [SMALL_STATE(36)] = 352,
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
