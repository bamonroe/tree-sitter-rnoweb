module.exports = grammar({
	name: 'rnoweb',

	rules: {
		source_file: $ => 
			repeat(
				choice(
					$.rnoweb_environment,
					$.latex
				)
			),

		rnoweb_environment: $ =>
			seq(
				'<<>>==',
				optional(field("rnoweb_content", $.rnoweb_content)),
				"@"
			),

		rnoweb_content: $ =>
			repeat1(/[^@]+/,),

		latex: $ =>
			prec.left(1, field("latex", repeat1($._word))),
			
		_word: $ =>
			/[^<]+/

	},
});
