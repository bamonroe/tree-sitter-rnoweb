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
			prec.right(repeat1(
					$.latex_word,
			)),

	},
});
