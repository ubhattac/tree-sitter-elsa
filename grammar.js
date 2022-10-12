const PREC = {
  reduction: 1,
  abstraction:      2,
  abstraction_body: 3,
}

module.exports = grammar({
  name: 'elsa',
  extras: $ => [/\s/, $.comment],
  word: $ => $.identifier,
  rules: {

    /*========= ELSA ROOT-LEVEL STRUCTURE =========*/

    program: $ => repeat(
                    choice(
                      $.abstraction_definition,
                      $.reduction,
                      $.comment,
                      $.newline
                    )
                  ),

    /*========= ABSTRACTION =========*/

    abstraction_definition: $ => prec.right(
                                   seq(
                                     'let',
                                     $.abstraction_identifier,
                                     $.equivalence,
                                     optional($.expression)
                                   )
                                 ),

    abstraction: $ => prec.right(PREC.abstraction,
                        seq(
                          $.binder,
                          repeat($.identifier),
                          $.separator,
                          optional($.abstraction_body)
                        )
                      ),

    abstraction_body: $ => prec.left(PREC.abstraction_body, repeat1($.term)),

    /********** ========= ABSTRACTION DELIMETERS =========*/

    binder: $ => '\\',

    separator: $ => '->',

    equivalence: $ => '=',


    /*========= REDUCTIONS =========*/

    reduction: $ => prec.right(PREC.reduction,
                      seq(
                        'eval', $.reduction_identifier, ':', $.reduction_contents
                      )
                    ),

    reduction_identifier: $ => /[\w_]+/,

    reduction_contents: $ => prec.right(PREC.reduction,
                                repeat1(
                                  choice(
                                    $.newline,
                                    seq(
                                      optional($.step),
                                      alias($.reduction_expression, "expression"),
                                      choice(
                                        ";",
                                        $.newline
                                     )
                                   )
                                 )
                               )
                             ),

    reduction_expression: $ => prec.right(repeat1($.term)),

    /*========= SUB-EXPRESSIONS =========*/

    expression: $ => seq(repeat($.term), choice(";", $.newline)),

    group: $ => seq("(", repeat($.term), ")"),

    term: $ => prec.right(
                 seq(
                   choice(
                     $.group,
                     $.abstraction,
                     $.terminal
                   )
                 )
               ),

    /*========= ELSA TERMINAL =========*/

    terminal: $ => choice(
                     $.identifier,
                     $.abstraction_identifier,
                     $.integer
                   ),

    integer: $ => /\d+/,

    identifier: $ => token(seq(/[a-z_]/, repeat(/[a-zA-Z0-9_]/))),

    abstraction_identifier: $ => token(seq(/[A-Z]/, repeat(/[a-zA-Z0-9]/))),

    /*========= CALCULATION STEP =========*/

    step: $ => choice(
                 $.alpha_convert,
                 $.beta_reduce,
                 $.let_expand,
                 $.normalize,
                 $.reflexive_transitive
               ),

    alpha_convert: $ => '=a>',

    beta_reduce: $ => '=b>',

    let_expand: $ => '=d>',

    normalize: $ => '=~>',

    reflexive_transitive: $ => '=*>',

    /*========= MISCELLANEOUS =========*/

    comment: $ => token(seq('--', /.*/)),

    newline: $ => /\n/,

  }
});

