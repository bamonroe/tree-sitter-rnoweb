const sepBy1 = (rule, sep) => seq(rule, repeat(seq(sep, rule)));

const sepBy = (rule, sep) => optional(sepBy1(rule, sep));

module.exports = grammar({
	name: 'rnoweb',

	externals: $ => [
		$._latex_word,
		$.command_name,
		$.renv_sig_beg,
		$.renv_sig_end,
		$.renv_content,
	],

	rules: {
		source_file: $ =>
			repeat(
				choice(
					$.latex,
					$.rchunk,
					$.rinline,
				)
			),

		rchunk: $ =>
			seq(
				$.renv_sig_beg,
				optional($._renv_sig_options),
				$.renv_sig_end,
				optional($.renv_content),
				'@'
			),

		rinline: $ =>
			seq(
				field("Sexpr", $.command_name),
				"{",
				optional(alias(/[^}]+/, $.renv_content)),
				'}',
			),

		_renv_sig_options: $ =>
			choice(
				field("label",  /[a-zA-Z_]+[a-zA-Z0-9_]*/),
				sepBy1($.renv_key_pair, ',')
			),

		renv_key_pair: $ =>
			seq(
				field("key", $.renv_key),
				/[ ]*=[ ]*/,
				field("value", $.renv_val)
			),

		renv_key: $ =>
			/[a-zA-Z_]+[a-zA-Z0-9_.]*/,

		renv_val: $ =>
			/[^,>]+/,

		latex: $ =>
			prec.right(repeat1(
				$._latex_word,
			)),
	},
});
