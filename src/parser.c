#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_EQ = 2,
  anon_sym_DOLLAR = 3,
  anon_sym_DOLLAR_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_COLON_DASH = 6,
  anon_sym_DOLLAR_LPAREN = 7,
  anon_sym_RPAREN = 8,
  sym_shell_command = 9,
  aux_sym_identifier_token1 = 10,
  anon_sym_AT = 11,
  aux_sym_identifier_token2 = 12,
  anon_sym_COLON = 13,
  anon_sym_true = 14,
  anon_sym_false = 15,
  sym_integer = 16,
  anon_sym_DQUOTE = 17,
  aux_sym__interpolated_content_token1 = 18,
  anon_sym_SQUOTE = 19,
  aux_sym_string_literal_token1 = 20,
  sym_escape_sequence = 21,
  sym_url = 22,
  sym_raw_value = 23,
  sym_source_file = 24,
  sym_variable = 25,
  sym_interpolated_variable = 26,
  sym_identifier = 27,
  sym_value = 28,
  sym_bool = 29,
  sym_string_interpolated = 30,
  sym__interpolated_content = 31,
  sym_string_literal = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_string_interpolated_repeat1 = 34,
  aux_sym_string_literal_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_EQ] = "=",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [anon_sym_RPAREN] = ")",
  [sym_shell_command] = "shell_command",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_AT] = "@",
  [aux_sym_identifier_token2] = "identifier_token2",
  [anon_sym_COLON] = ":",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__interpolated_content_token1] = "_interpolated_content_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_url] = "url",
  [sym_raw_value] = "raw_value",
  [sym_source_file] = "source_file",
  [sym_variable] = "variable",
  [sym_interpolated_variable] = "interpolated_variable",
  [sym_identifier] = "identifier",
  [sym_value] = "value",
  [sym_bool] = "bool",
  [sym_string_interpolated] = "string_interpolated",
  [sym__interpolated_content] = "_interpolated_content",
  [sym_string_literal] = "string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_interpolated_repeat1] = "string_interpolated_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [anon_sym_DOLLAR_LPAREN] = anon_sym_DOLLAR_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_shell_command] = sym_shell_command,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_identifier_token2] = aux_sym_identifier_token2,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__interpolated_content_token1] = aux_sym__interpolated_content_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_url] = sym_url,
  [sym_raw_value] = sym_raw_value,
  [sym_source_file] = sym_source_file,
  [sym_variable] = sym_variable,
  [sym_interpolated_variable] = sym_interpolated_variable,
  [sym_identifier] = sym_identifier,
  [sym_value] = sym_value,
  [sym_bool] = sym_bool,
  [sym_string_interpolated] = sym_string_interpolated,
  [sym__interpolated_content] = sym__interpolated_content,
  [sym_string_literal] = sym_string_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_interpolated_repeat1] = aux_sym_string_interpolated_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_shell_command] = {
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__interpolated_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_value] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolated_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_string_interpolated] = {
    .visible = true,
    .named = true,
  },
  [sym__interpolated_content] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_interpolated_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 0},
    {field_value, 2},
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
  [20] = 7,
  [21] = 6,
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
  [37] = 30,
  [38] = 31,
  [39] = 36,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '"', 52,
        '#', 18,
        '$', 20,
        '\'', 55,
        ')', 25,
        ':', 48,
        '=', 19,
        '@', 46,
        '\\', 9,
        'f', 32,
        'h', 41,
        't', 38,
        '}', 22,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'h') ADVANCE(43);
      if (lookahead == 't') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(71);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(7);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '"', 58,
        '$', 58,
        '\'', 58,
        '\\', 58,
        'b', 58,
        'f', 58,
        'n', 58,
        'r', 58,
        't', 58,
      );
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 12:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') SKIP(12);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'h') ADVANCE(43);
      if (lookahead == 't') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(71);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '}') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '$' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(18);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == '{') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '#') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(28);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__interpolated_content_token1);
      if (lookahead == '#') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__interpolated_content_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '#') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == ':') ADVANCE(10);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '/') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == ':') ADVANCE(69);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '/') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'h') ADVANCE(43);
      if (lookahead == 't') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(71);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(71);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_raw_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_raw_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '=') ADVANCE(71);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_url] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(35),
    [sym_variable] = STATE(10),
    [sym_identifier] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [aux_sym_identifier_token1] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      sym_value,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 3,
      sym_comment,
      aux_sym_identifier_token1,
      anon_sym_AT,
    ACTIONS(19), 3,
      sym_integer,
      sym_url,
      sym_raw_value,
    STATE(24), 3,
      sym_bool,
      sym_string_interpolated,
      sym_string_literal,
  [32] = 7,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DOLLAR,
    ACTIONS(30), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 2,
      aux_sym__interpolated_content_token1,
      sym_escape_sequence,
    STATE(3), 3,
      sym_interpolated_variable,
      sym__interpolated_content,
      aux_sym_string_interpolated_repeat1,
  [57] = 7,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    ACTIONS(43), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 2,
      aux_sym__interpolated_content_token1,
      sym_escape_sequence,
    STATE(5), 3,
      sym_interpolated_variable,
      sym__interpolated_content,
      aux_sym_string_interpolated_repeat1,
  [82] = 7,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    ACTIONS(43), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(45), 1,
      anon_sym_DOLLAR_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 2,
      aux_sym__interpolated_content_token1,
      sym_escape_sequence,
    STATE(3), 3,
      sym_interpolated_variable,
      sym__interpolated_content,
      aux_sym_string_interpolated_repeat1,
  [107] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(55), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__interpolated_content_token1,
      sym_escape_sequence,
  [119] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(57), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__interpolated_content_token1,
      sym_escape_sequence,
  [131] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(59), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__interpolated_content_token1,
      sym_escape_sequence,
  [143] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(61), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__interpolated_content_token1,
      sym_escape_sequence,
  [155] = 6,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_comment,
    STATE(34), 1,
      sym_identifier,
    STATE(11), 2,
      sym_variable,
      aux_sym_source_file_repeat1,
  [175] = 6,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      sym_comment,
    ACTIONS(72), 1,
      aux_sym_identifier_token1,
    ACTIONS(75), 1,
      anon_sym_AT,
    STATE(34), 1,
      sym_identifier,
    STATE(11), 2,
      sym_variable,
      aux_sym_source_file_repeat1,
  [195] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(78), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DOLLAR_LPAREN,
      anon_sym_DQUOTE,
      aux_sym__interpolated_content_token1,
      sym_escape_sequence,
  [207] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_SQUOTE,
    STATE(13), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(82), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [221] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(13), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(87), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [235] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(91), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [249] = 1,
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      sym_comment,
      aux_sym_identifier_token1,
      anon_sym_AT,
  [256] = 1,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      sym_comment,
      aux_sym_identifier_token1,
      anon_sym_AT,
  [263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_AT,
    STATE(28), 1,
      sym_identifier,
  [276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_AT,
    STATE(33), 1,
      sym_identifier,
  [289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 3,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_DASH,
  [298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 3,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COLON_DASH,
  [307] = 1,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      sym_comment,
      aux_sym_identifier_token1,
      anon_sym_AT,
  [314] = 1,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      sym_comment,
      aux_sym_identifier_token1,
      anon_sym_AT,
  [321] = 1,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      sym_comment,
      aux_sym_identifier_token1,
      anon_sym_AT,
  [328] = 1,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      sym_comment,
      aux_sym_identifier_token1,
      anon_sym_AT,
  [335] = 1,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      sym_comment,
      aux_sym_identifier_token1,
      anon_sym_AT,
  [342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      aux_sym_identifier_token1,
    ACTIONS(113), 1,
      anon_sym_AT,
    STATE(12), 1,
      sym_identifier,
  [355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    ACTIONS(117), 1,
      anon_sym_COLON_DASH,
  [365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
  [372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_identifier_token2,
  [379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_COLON,
  [386] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_shell_command,
  [393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
  [400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_EQ,
  [407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
  [414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      aux_sym_identifier_token2,
  [421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_identifier_token2,
  [428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_COLON,
  [435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_identifier_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 57,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 107,
  [SMALL_STATE(7)] = 119,
  [SMALL_STATE(8)] = 131,
  [SMALL_STATE(9)] = 143,
  [SMALL_STATE(10)] = 155,
  [SMALL_STATE(11)] = 175,
  [SMALL_STATE(12)] = 195,
  [SMALL_STATE(13)] = 207,
  [SMALL_STATE(14)] = 221,
  [SMALL_STATE(15)] = 235,
  [SMALL_STATE(16)] = 249,
  [SMALL_STATE(17)] = 256,
  [SMALL_STATE(18)] = 263,
  [SMALL_STATE(19)] = 276,
  [SMALL_STATE(20)] = 289,
  [SMALL_STATE(21)] = 298,
  [SMALL_STATE(22)] = 307,
  [SMALL_STATE(23)] = 314,
  [SMALL_STATE(24)] = 321,
  [SMALL_STATE(25)] = 328,
  [SMALL_STATE(26)] = 335,
  [SMALL_STATE(27)] = 342,
  [SMALL_STATE(28)] = 355,
  [SMALL_STATE(29)] = 365,
  [SMALL_STATE(30)] = 372,
  [SMALL_STATE(31)] = 379,
  [SMALL_STATE(32)] = 386,
  [SMALL_STATE(33)] = 393,
  [SMALL_STATE(34)] = 400,
  [SMALL_STATE(35)] = 407,
  [SMALL_STATE(36)] = 414,
  [SMALL_STATE(37)] = 421,
  [SMALL_STATE(38)] = 428,
  [SMALL_STATE(39)] = 435,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, 0, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolated_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolated_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolated_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_interpolated_repeat1, 2, 0, 0),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_interpolated_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 4, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_variable, 5, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_variable, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolated_variable, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolated, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolated, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 4, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [129] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
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
