#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_let = 2,
  sym_binder = 3,
  sym_separator = 4,
  sym_equivalence = 5,
  anon_sym_eval = 6,
  anon_sym_COLON = 7,
  sym_reduction_identifier = 8,
  anon_sym_SEMI = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  sym_integer = 12,
  sym_abstraction_identifier = 13,
  sym_alpha_convert = 14,
  sym_beta_reduce = 15,
  sym_let_expand = 16,
  sym_normalize = 17,
  sym_reflexive_transitive = 18,
  sym_comment = 19,
  sym_newline = 20,
  sym_program = 21,
  sym_abstraction_definition = 22,
  sym_abstraction = 23,
  sym_abstraction_body = 24,
  sym_reduction = 25,
  sym_reduction_contents = 26,
  sym_reduction_expression = 27,
  sym_expression = 28,
  sym_group = 29,
  sym_term = 30,
  sym_terminal = 31,
  sym_step = 32,
  aux_sym_program_repeat1 = 33,
  aux_sym_abstraction_repeat1 = 34,
  aux_sym_abstraction_body_repeat1 = 35,
  aux_sym_reduction_contents_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_let] = "let",
  [sym_binder] = "binder",
  [sym_separator] = "separator",
  [sym_equivalence] = "equivalence",
  [anon_sym_eval] = "eval",
  [anon_sym_COLON] = ":",
  [sym_reduction_identifier] = "reduction_identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_integer] = "integer",
  [sym_abstraction_identifier] = "abstraction_identifier",
  [sym_alpha_convert] = "alpha_convert",
  [sym_beta_reduce] = "beta_reduce",
  [sym_let_expand] = "let_expand",
  [sym_normalize] = "normalize",
  [sym_reflexive_transitive] = "reflexive_transitive",
  [sym_comment] = "comment",
  [sym_newline] = "newline",
  [sym_program] = "program",
  [sym_abstraction_definition] = "abstraction_definition",
  [sym_abstraction] = "abstraction",
  [sym_abstraction_body] = "abstraction_body",
  [sym_reduction] = "reduction",
  [sym_reduction_contents] = "reduction_contents",
  [sym_reduction_expression] = "expression",
  [sym_expression] = "expression",
  [sym_group] = "group",
  [sym_term] = "term",
  [sym_terminal] = "terminal",
  [sym_step] = "step",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_abstraction_repeat1] = "abstraction_repeat1",
  [aux_sym_abstraction_body_repeat1] = "abstraction_body_repeat1",
  [aux_sym_reduction_contents_repeat1] = "reduction_contents_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_let] = anon_sym_let,
  [sym_binder] = sym_binder,
  [sym_separator] = sym_separator,
  [sym_equivalence] = sym_equivalence,
  [anon_sym_eval] = anon_sym_eval,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_reduction_identifier] = sym_reduction_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_integer] = sym_integer,
  [sym_abstraction_identifier] = sym_abstraction_identifier,
  [sym_alpha_convert] = sym_alpha_convert,
  [sym_beta_reduce] = sym_beta_reduce,
  [sym_let_expand] = sym_let_expand,
  [sym_normalize] = sym_normalize,
  [sym_reflexive_transitive] = sym_reflexive_transitive,
  [sym_comment] = sym_comment,
  [sym_newline] = sym_newline,
  [sym_program] = sym_program,
  [sym_abstraction_definition] = sym_abstraction_definition,
  [sym_abstraction] = sym_abstraction,
  [sym_abstraction_body] = sym_abstraction_body,
  [sym_reduction] = sym_reduction,
  [sym_reduction_contents] = sym_reduction_contents,
  [sym_reduction_expression] = sym_reduction_expression,
  [sym_expression] = sym_expression,
  [sym_group] = sym_group,
  [sym_term] = sym_term,
  [sym_terminal] = sym_terminal,
  [sym_step] = sym_step,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_abstraction_repeat1] = aux_sym_abstraction_repeat1,
  [aux_sym_abstraction_body_repeat1] = aux_sym_abstraction_body_repeat1,
  [aux_sym_reduction_contents_repeat1] = aux_sym_reduction_contents_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [sym_binder] = {
    .visible = true,
    .named = true,
  },
  [sym_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_equivalence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_eval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_reduction_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
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
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_abstraction_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_alpha_convert] = {
    .visible = true,
    .named = true,
  },
  [sym_beta_reduce] = {
    .visible = true,
    .named = true,
  },
  [sym_let_expand] = {
    .visible = true,
    .named = true,
  },
  [sym_normalize] = {
    .visible = true,
    .named = true,
  },
  [sym_reflexive_transitive] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_abstraction_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_abstraction] = {
    .visible = true,
    .named = true,
  },
  [sym_abstraction_body] = {
    .visible = true,
    .named = true,
  },
  [sym_reduction] = {
    .visible = true,
    .named = true,
  },
  [sym_reduction_contents] = {
    .visible = true,
    .named = true,
  },
  [sym_reduction_expression] = {
    .visible = true,
    .named = false,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_terminal] = {
    .visible = true,
    .named = true,
  },
  [sym_step] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_abstraction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_abstraction_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_reduction_contents_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(23);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == 'a') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(8);
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == '~') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '>') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(26);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '=') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(23);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_binder);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_equivalence);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_equivalence);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '~') ADVANCE(6);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_reduction_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_abstraction_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_alpha_convert);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_beta_reduce);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_let_expand);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_normalize);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_reflexive_transitive);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead == '\n') ADVANCE(30);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'e') ADVANCE(1);
      if (lookahead == 'l') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'v') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [sym_binder] = ACTIONS(1),
    [sym_separator] = ACTIONS(1),
    [sym_equivalence] = ACTIONS(1),
    [anon_sym_eval] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_abstraction_identifier] = ACTIONS(1),
    [sym_normalize] = ACTIONS(1),
    [sym_reflexive_transitive] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(52),
    [sym_abstraction_definition] = STATE(25),
    [sym_reduction] = STATE(25),
    [aux_sym_program_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_eval] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_newline] = ACTIONS(13),
  },
  [2] = {
    [sym_abstraction] = STATE(26),
    [sym_reduction_expression] = STATE(47),
    [sym_group] = STATE(26),
    [sym_term] = STATE(15),
    [sym_terminal] = STATE(26),
    [sym_step] = STATE(22),
    [aux_sym_abstraction_body_repeat1] = STATE(15),
    [aux_sym_reduction_contents_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_let] = ACTIONS(19),
    [sym_binder] = ACTIONS(21),
    [anon_sym_eval] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_integer] = ACTIONS(17),
    [sym_abstraction_identifier] = ACTIONS(17),
    [sym_alpha_convert] = ACTIONS(25),
    [sym_beta_reduce] = ACTIONS(25),
    [sym_let_expand] = ACTIONS(25),
    [sym_normalize] = ACTIONS(25),
    [sym_reflexive_transitive] = ACTIONS(25),
    [sym_comment] = ACTIONS(19),
    [sym_newline] = ACTIONS(15),
  },
  [3] = {
    [sym_abstraction] = STATE(26),
    [sym_reduction_expression] = STATE(47),
    [sym_group] = STATE(26),
    [sym_term] = STATE(15),
    [sym_terminal] = STATE(26),
    [sym_step] = STATE(22),
    [aux_sym_abstraction_body_repeat1] = STATE(15),
    [aux_sym_reduction_contents_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [anon_sym_let] = ACTIONS(32),
    [sym_binder] = ACTIONS(34),
    [anon_sym_eval] = ACTIONS(32),
    [anon_sym_LPAREN] = ACTIONS(37),
    [sym_integer] = ACTIONS(29),
    [sym_abstraction_identifier] = ACTIONS(29),
    [sym_alpha_convert] = ACTIONS(40),
    [sym_beta_reduce] = ACTIONS(40),
    [sym_let_expand] = ACTIONS(40),
    [sym_normalize] = ACTIONS(40),
    [sym_reflexive_transitive] = ACTIONS(40),
    [sym_comment] = ACTIONS(32),
    [sym_newline] = ACTIONS(43),
  },
  [4] = {
    [sym_abstraction] = STATE(26),
    [sym_reduction_contents] = STATE(38),
    [sym_reduction_expression] = STATE(47),
    [sym_group] = STATE(26),
    [sym_term] = STATE(15),
    [sym_terminal] = STATE(26),
    [sym_step] = STATE(22),
    [aux_sym_abstraction_body_repeat1] = STATE(15),
    [aux_sym_reduction_contents_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(17),
    [sym_binder] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_integer] = ACTIONS(17),
    [sym_abstraction_identifier] = ACTIONS(17),
    [sym_alpha_convert] = ACTIONS(25),
    [sym_beta_reduce] = ACTIONS(25),
    [sym_let_expand] = ACTIONS(25),
    [sym_normalize] = ACTIONS(25),
    [sym_reflexive_transitive] = ACTIONS(25),
    [sym_comment] = ACTIONS(46),
    [sym_newline] = ACTIONS(48),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(21), 1,
      sym_binder,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      anon_sym_SEMI,
    ACTIONS(56), 1,
      sym_newline,
    STATE(40), 1,
      sym_expression,
    STATE(14), 2,
      sym_term,
      aux_sym_abstraction_body_repeat1,
    ACTIONS(17), 3,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
    ACTIONS(52), 3,
      anon_sym_let,
      anon_sym_eval,
      sym_comment,
    STATE(26), 3,
      sym_abstraction,
      sym_group,
      sym_terminal,
  [38] = 2,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(32), 13,
      anon_sym_let,
      sym_binder,
      anon_sym_eval,
      anon_sym_LPAREN,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
      sym_alpha_convert,
      sym_beta_reduce,
      sym_let_expand,
      sym_normalize,
      sym_reflexive_transitive,
      sym_comment,
  [58] = 2,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(60), 13,
      anon_sym_let,
      sym_binder,
      anon_sym_eval,
      anon_sym_LPAREN,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
      sym_alpha_convert,
      sym_beta_reduce,
      sym_let_expand,
      sym_normalize,
      sym_reflexive_transitive,
      sym_comment,
  [78] = 9,
    ACTIONS(21), 1,
      sym_binder,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(46), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_SEMI,
    ACTIONS(64), 1,
      sym_newline,
    STATE(30), 1,
      sym_abstraction_body,
    STATE(11), 2,
      sym_term,
      aux_sym_abstraction_body_repeat1,
    ACTIONS(17), 3,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
    STATE(26), 3,
      sym_abstraction,
      sym_group,
      sym_terminal,
  [111] = 9,
    ACTIONS(21), 1,
      sym_binder,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(46), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_SEMI,
    ACTIONS(68), 1,
      sym_newline,
    STATE(27), 1,
      sym_abstraction_body,
    STATE(11), 2,
      sym_term,
      aux_sym_abstraction_body_repeat1,
    ACTIONS(17), 3,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
    STATE(26), 3,
      sym_abstraction,
      sym_group,
      sym_terminal,
  [144] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    ACTIONS(72), 1,
      sym_binder,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_abstraction_body,
    STATE(16), 2,
      sym_term,
      aux_sym_abstraction_body_repeat1,
    ACTIONS(70), 3,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
    STATE(36), 3,
      sym_abstraction,
      sym_group,
      sym_terminal,
  [174] = 5,
    ACTIONS(46), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_newline,
    STATE(13), 2,
      sym_term,
      aux_sym_abstraction_body_repeat1,
    STATE(26), 3,
      sym_abstraction,
      sym_group,
      sym_terminal,
    ACTIONS(76), 6,
      sym_binder,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
  [198] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    ACTIONS(72), 1,
      sym_binder,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_abstraction_body,
    STATE(16), 2,
      sym_term,
      aux_sym_abstraction_body_repeat1,
    ACTIONS(70), 3,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
    STATE(36), 3,
      sym_abstraction,
      sym_group,
      sym_terminal,
  [228] = 8,
    ACTIONS(46), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_binder,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_newline,
    STATE(13), 2,
      sym_term,
      aux_sym_abstraction_body_repeat1,
    ACTIONS(80), 3,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
    STATE(26), 3,
      sym_abstraction,
      sym_group,
      sym_terminal,
  [258] = 8,
    ACTIONS(21), 1,
      sym_binder,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(46), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    ACTIONS(95), 1,
      sym_newline,
    STATE(13), 2,
      sym_term,
      aux_sym_abstraction_body_repeat1,
    ACTIONS(17), 3,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
    STATE(26), 3,
      sym_abstraction,
      sym_group,
      sym_terminal,
  [288] = 8,
    ACTIONS(21), 1,
      sym_binder,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(46), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    ACTIONS(99), 1,
      sym_newline,
    STATE(13), 2,
      sym_term,
      aux_sym_abstraction_body_repeat1,
    ACTIONS(17), 3,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
    STATE(26), 3,
      sym_abstraction,
      sym_group,
      sym_terminal,
  [318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(17), 2,
      sym_term,
      aux_sym_abstraction_body_repeat1,
    STATE(36), 3,
      sym_abstraction,
      sym_group,
      sym_terminal,
    ACTIONS(78), 6,
      sym_binder,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
  [339] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(104), 1,
      sym_binder,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    STATE(17), 2,
      sym_term,
      aux_sym_abstraction_body_repeat1,
    ACTIONS(101), 3,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
    STATE(36), 3,
      sym_abstraction,
      sym_group,
      sym_terminal,
  [366] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_binder,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(20), 2,
      sym_term,
      aux_sym_abstraction_body_repeat1,
    ACTIONS(70), 3,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
    STATE(36), 3,
      sym_abstraction,
      sym_group,
      sym_terminal,
  [393] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_binder,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    STATE(17), 2,
      sym_term,
      aux_sym_abstraction_body_repeat1,
    ACTIONS(70), 3,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
    STATE(36), 3,
      sym_abstraction,
      sym_group,
      sym_terminal,
  [420] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_binder,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(17), 2,
      sym_term,
      aux_sym_abstraction_body_repeat1,
    ACTIONS(70), 3,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
    STATE(36), 3,
      sym_abstraction,
      sym_group,
      sym_terminal,
  [447] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_binder,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    STATE(19), 2,
      sym_term,
      aux_sym_abstraction_body_repeat1,
    ACTIONS(70), 3,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
    STATE(36), 3,
      sym_abstraction,
      sym_group,
      sym_terminal,
  [474] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym_binder,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_reduction_expression,
    STATE(15), 2,
      sym_term,
      aux_sym_abstraction_body_repeat1,
    ACTIONS(118), 3,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
    STATE(26), 3,
      sym_abstraction,
      sym_group,
      sym_terminal,
  [501] = 3,
    ACTIONS(46), 1,
      sym_comment,
    ACTIONS(126), 1,
      sym_newline,
    ACTIONS(124), 6,
      sym_binder,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
  [516] = 6,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      anon_sym_let,
    ACTIONS(133), 1,
      anon_sym_eval,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_newline,
    STATE(24), 3,
      sym_abstraction_definition,
      sym_reduction,
      aux_sym_program_repeat1,
  [537] = 6,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(9), 1,
      anon_sym_eval,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(146), 1,
      sym_newline,
    STATE(24), 3,
      sym_abstraction_definition,
      sym_reduction,
      aux_sym_program_repeat1,
  [558] = 3,
    ACTIONS(46), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym_newline,
    ACTIONS(148), 6,
      sym_binder,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
  [573] = 3,
    ACTIONS(46), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym_newline,
    ACTIONS(62), 6,
      sym_binder,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
  [588] = 3,
    ACTIONS(46), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_newline,
    ACTIONS(152), 6,
      sym_binder,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
  [603] = 3,
    ACTIONS(46), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_newline,
    ACTIONS(156), 6,
      sym_binder,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
  [618] = 3,
    ACTIONS(46), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_newline,
    ACTIONS(160), 6,
      sym_binder,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
  [633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 6,
      sym_binder,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
  [645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 6,
      sym_binder,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
  [657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 6,
      sym_binder,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
  [669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 6,
      sym_binder,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
  [681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 6,
      sym_binder,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
  [693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 6,
      sym_binder,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
  [705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 5,
      sym_binder,
      anon_sym_LPAREN,
      sym_integer,
      sym_identifier,
      sym_abstraction_identifier,
  [716] = 2,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(168), 3,
      anon_sym_let,
      anon_sym_eval,
      sym_comment,
  [726] = 2,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(172), 3,
      anon_sym_let,
      anon_sym_eval,
      sym_comment,
  [736] = 2,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(176), 3,
      anon_sym_let,
      anon_sym_eval,
      sym_comment,
  [746] = 2,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      sym_newline,
    ACTIONS(180), 3,
      anon_sym_let,
      anon_sym_eval,
      sym_comment,
  [756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      sym_separator,
    STATE(44), 1,
      aux_sym_abstraction_repeat1,
  [769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(189), 1,
      sym_separator,
    STATE(43), 1,
      aux_sym_abstraction_repeat1,
  [782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(193), 1,
      sym_separator,
    STATE(43), 1,
      aux_sym_abstraction_repeat1,
  [795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(197), 1,
      sym_separator,
    STATE(46), 1,
      aux_sym_abstraction_repeat1,
  [808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(199), 1,
      sym_separator,
    STATE(43), 1,
      aux_sym_abstraction_repeat1,
  [821] = 3,
    ACTIONS(46), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_SEMI,
    ACTIONS(203), 1,
      sym_newline,
  [831] = 3,
    ACTIONS(46), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_SEMI,
    ACTIONS(207), 1,
      sym_newline,
  [841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_COLON,
  [848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_equivalence,
  [855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_abstraction_identifier,
  [862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
  [869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym_reduction_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 38,
  [SMALL_STATE(7)] = 58,
  [SMALL_STATE(8)] = 78,
  [SMALL_STATE(9)] = 111,
  [SMALL_STATE(10)] = 144,
  [SMALL_STATE(11)] = 174,
  [SMALL_STATE(12)] = 198,
  [SMALL_STATE(13)] = 228,
  [SMALL_STATE(14)] = 258,
  [SMALL_STATE(15)] = 288,
  [SMALL_STATE(16)] = 318,
  [SMALL_STATE(17)] = 339,
  [SMALL_STATE(18)] = 366,
  [SMALL_STATE(19)] = 393,
  [SMALL_STATE(20)] = 420,
  [SMALL_STATE(21)] = 447,
  [SMALL_STATE(22)] = 474,
  [SMALL_STATE(23)] = 501,
  [SMALL_STATE(24)] = 516,
  [SMALL_STATE(25)] = 537,
  [SMALL_STATE(26)] = 558,
  [SMALL_STATE(27)] = 573,
  [SMALL_STATE(28)] = 588,
  [SMALL_STATE(29)] = 603,
  [SMALL_STATE(30)] = 618,
  [SMALL_STATE(31)] = 633,
  [SMALL_STATE(32)] = 645,
  [SMALL_STATE(33)] = 657,
  [SMALL_STATE(34)] = 669,
  [SMALL_STATE(35)] = 681,
  [SMALL_STATE(36)] = 693,
  [SMALL_STATE(37)] = 705,
  [SMALL_STATE(38)] = 716,
  [SMALL_STATE(39)] = 726,
  [SMALL_STATE(40)] = 736,
  [SMALL_STATE(41)] = 746,
  [SMALL_STATE(42)] = 756,
  [SMALL_STATE(43)] = 769,
  [SMALL_STATE(44)] = 782,
  [SMALL_STATE(45)] = 795,
  [SMALL_STATE(46)] = 808,
  [SMALL_STATE(47)] = 821,
  [SMALL_STATE(48)] = 831,
  [SMALL_STATE(49)] = 841,
  [SMALL_STATE(50)] = 848,
  [SMALL_STATE(51)] = 855,
  [SMALL_STATE(52)] = 862,
  [SMALL_STATE(53)] = 869,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduction_contents, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reduction_contents, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduction_contents_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduction_contents_repeat1, 2), SHIFT_REPEAT(28),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_reduction_contents_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduction_contents_repeat1, 2), SHIFT_REPEAT(42),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduction_contents_repeat1, 2), SHIFT_REPEAT(18),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_reduction_contents_repeat1, 2), SHIFT_REPEAT(37),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reduction_contents_repeat1, 2), SHIFT_REPEAT(3),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstraction_definition, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abstraction_definition, 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reduction_contents_repeat1, 3),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_reduction_contents_repeat1, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abstraction, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstraction, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abstraction, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstraction, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abstraction_body, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstraction_body, 1),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_abstraction_body_repeat1, 2), SHIFT_REPEAT(28),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_abstraction_body_repeat1, 2), SHIFT_REPEAT(42),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_abstraction_body_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_abstraction_body_repeat1, 2), SHIFT_REPEAT(18),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_abstraction_body_repeat1, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reduction_expression, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduction_expression, 1),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_abstraction_body_repeat1, 2), SHIFT_REPEAT(35),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_abstraction_body_repeat1, 2), SHIFT_REPEAT(45),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_abstraction_body_repeat1, 2), SHIFT_REPEAT(21),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(51),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(53),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_terminal, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_terminal, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abstraction, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstraction, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reduction, 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reduction, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstraction_definition, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abstraction_definition, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_abstraction_repeat1, 2), SHIFT_REPEAT(43),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_abstraction_repeat1, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [215] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_elsa(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
