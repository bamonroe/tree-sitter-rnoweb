#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tree_sitter/parser.h>

#include <unistd.h>

#define ESN 4
#define SEXPR 7

enum TokenType {
	_LATEX_WORD,
	RENV_SIG_BEG,
	RENV_SIG_END,
	RNW_CONTENT,
};

bool ws(int32_t val)
{
	return(val == ' ' || val == '\t' || val == '\n');
}

bool sig_check(TSLexer* lexer)
{

	int col = lexer->get_column(lexer);

	if (col > 0) return(false);

	int32_t val = lexer->lookahead;

	bool insig = false, breaker = true;;
	char tocheck[ESN] = {'>', '>', '=', '\n'};
	char seen[ESN];
	int i = 0;

	// The first character of the line needs to be '<'
	if (val == '<')
	{
		lexer->advance(lexer, false);
		val = lexer->lookahead;


		// The second character of the line also needs to be '<'
		if (val == '<')
		{
			while (true)
			{
				i++;
				// Move to the next char
				lexer->advance(lexer, false);
				val = lexer->lookahead;

				// Push back
				seen[i - 1] = seen[i];
				seen[i] = val;

				if (val == '\n')
				{
						insig = true;
						for (int j = 0; j < ESN; j++)
						{
								insig = insig && (seen[j] == tocheck[j]);
						}
						break;
				}

			}
		}
	}

	return(insig);

};
bool sexp_check(TSLexer* lexer)
{

	int32_t val = lexer->lookahead;

	char tocheck[SEXPR] = {'\\', 'S', 'e', 'x', 'p', 'r', '{'};

	bool found;
	char seen[SEXPR];
	int i = 0;

	if (val != tocheck[0]) return(false);

	// Assign the seen value to the first element
	seen[0] = val;

	for (int i = 1; i < SEXPR; i++)
	{
		// Move to the next char
		lexer->advance(lexer, false);
		val = lexer->lookahead;

		// Push back
		seen[i] = val;

		if (val == tocheck[SEXPR - 1])
		{
				found = true;
				for (int j = 0; j < ESN; j++)
				{
						found = found && (seen[j] == tocheck[j]);
				}
				break;
		}

	}

	return(found);

};

bool rnw_content(TSLexer* lexer)
{
	// The current character
	bool eof = lexer->eof(lexer);
	if (eof) return(false);

	int32_t col = lexer->get_column(lexer);
	int32_t val = lexer->lookahead;

	// Going to have to call it at having a "@" in the first column
	while (
		((lexer->get_column(lexer) != 0) || (lexer->lookahead != '@')) &&
		(! lexer->eof(lexer))
		) {
		lexer->mark_end(lexer);
		lexer->advance(lexer, false);
	}


	lexer->result_symbol = RNW_CONTENT;
	return(true);

};

bool lword(TSLexer* lexer)
{

	int dbug = 0;
	bool res = false;

	// The current character
	int32_t val = lexer->lookahead;
	bool eof = lexer->eof(lexer);

	if (eof) return(false);

	// If the current character is whitesapce, skip it
	while (ws(val) && !eof)
	{
		// Get the next character
		lexer->advance(lexer, true);
		val = lexer->lookahead;
		eof = lexer->eof(lexer);
		if (eof) return(false);
	}

	// If we're at col == 0, and the chacter isn't the beginning of a signature,
	// we're going to mark it a latex word.
	// What column are we - 0 indexed
	int32_t col = lexer->get_column(lexer);
	if ((!sig_check(lexer)) && (!sexp_check(lexer)))
	{
		// So assign the current token to latex word
		lexer->result_symbol = _LATEX_WORD;
		// And loop until some kind of whitespace?
		while (true)
		{
			// Get the next character
			lexer->advance(lexer, false);
			val = lexer->lookahead;
			eof = lexer->eof(lexer);

			// Mark the current position as the end
			lexer->mark_end(lexer);

			// When we've hit whitespace or a Sexpr envir, break
			if (ws(val) || eof || sexp_check(lexer))
			{
					break;
			}
		}
		res = true;
	}


	return(res);
}

bool rnw_sig_beg(TSLexer* lexer)
{

	int dbug = 0;
	bool res = false;

	// What column are we - 0 indexed
	int32_t col = lexer->get_column(lexer);
	// Not first column, return false
	if (col) return(false);

	// The current character
	int32_t val = lexer->lookahead;
	bool eof = lexer->eof(lexer);

	// End of file, return false
	if (eof) return(false);

	// We're at column 0, now is this character '<'
	if (val == '<')
	{
			// Get the next character
			lexer->advance(lexer, false);
			val = lexer->lookahead;
			// And is this character also '<'?
			if (val == '<') {
				res = true;
				lexer->result_symbol = RENV_SIG_BEG;
				lexer->advance(lexer, false);
				lexer->mark_end(lexer);
			}
	}

	return(res);
}

bool rnw_sig_end(TSLexer* lexer)
{

	// End of file, return false
	if (lexer->eof(lexer)) return(false);

	// We're at column 0, now is this character '<'
	char tocheck[ESN] = {'>', '>', '=', '\n'};

	bool res = true;
	int32_t val = lexer->lookahead;

	for (int i = 0; i < ESN; i++)
	{
		// The current character
		val = lexer->lookahead;
		if (val != tocheck[i])
		{
			res = false;
			break;
		} else
		{
			lexer->advance(lexer, false);
		}
	}

	if (res)
	{
			lexer->result_symbol = RENV_SIG_END;
			lexer->mark_end(lexer);
	}

	return(res);
}

void advance_ws(TSLexer* lexer)
{
	// If the current character is whitesapce, skip it
	while (ws(lexer->lookahead)) lexer->advance(lexer, true);
};
void tree_sitter_rnoweb_external_scanner_create()
{};
void* tree_sitter_rnoweb_external_scanner_destroy(void *payload)
{};
unsigned tree_sitter_rnoweb_external_scanner_serialize(
  void *payload,
  char *buffer
) {
	return 0;
};
void tree_sitter_rnoweb_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
)
{};

bool tree_sitter_rnoweb_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
)
{
	// Move past whitespace
	advance_ws(lexer);

	bool res;

	/*
	printf("\n\nNew Call\n");
	for (int i = 0; i < 4; i++)
	{
		printf("v[%d] = %d\t", i, valid_symbols[i]);
	}
	printf("\n");
	*/



	if (valid_symbols[0] || valid_symbols[1])
	{
		res = rnw_sig_beg(lexer);
		res = res ? res : lword(lexer);
	} else if (valid_symbols[2]) {
		res = rnw_sig_end(lexer);
	} else if (valid_symbols[3]) {
		res = rnw_content(lexer);
	}


	return(res);
};
