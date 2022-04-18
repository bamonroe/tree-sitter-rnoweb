module.exports = grammar({
	name: 'rnoweb',

	externals: $ => [
		$.latex_word,
	],

	rules: {
		source_file: $ => 
			repeat(
				choice(
					$.latex,
				)
			),

		latex: $ =>
			prec.left(repeat1(
					$.latex_word,
			)),

		//latex_word: $=>
		//	/[^<]+/

	},
});
