module.exports = grammar({
	name: 'rnoweb',

	rules: {
		source_file: $ => 
			repeat(
				choice(
					prec(2, $.rnoweb_environment),
					$.latex
				)
			),

		rnoweb_environment: $ =>
			seq(
				$.rnoweb_sig,
				optional(field("rnoweb_content", $.rnoweb_content)),
				"@"
			),

		rnoweb_sig: $ =>
			seq(
				'<<',
				optional(
					$.rnoweb_options,
				),
				'>>=='
			),

		rnoweb_options: $ =>
			choice(
				repeat1(
					choice(
						seq(
							$.key_val,
							","
						),
						seq(
							$.key_val,
							",",
							$.key_val,
						),
						$.key_val,
					),
				),
				field("label", $.rvar),
				),

		key_val: $ =>
			seq(
				field("key", $.rvar),
				"=",
				choice(
					field("value", $.rval),
					field("value", $.rval),
				),
			),

		rvar: $ =>
			/[a-zA-Z]{1}[a-zA-Z0-9_]*/,

		rval: $ =>
			/[^>]+/,

		rnoweb_content: $ =>
			repeat1(/[^@]+/),

		latex: $ =>
			prec.left(1, field("latex", repeat1($._word))),
			
		_word: $ =>
			/[^<]+/

	},
});
