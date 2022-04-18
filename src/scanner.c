#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tree_sitter/parser.h>

#include <unistd.h>

enum TokenType {
	LATEX_WORD,
};

bool ws(int32_t val)
{
	return(val == ' ' || val == '\t' || val == '\n');
}

bool lword(TSLexer* lexer)
{

	int dbug = 0;
	bool res = false;

	// What column are we - 0 indexed
	int32_t col = lexer->get_column(lexer);
	// The current character
	int32_t val = lexer->lookahead;
	bool eof = lexer->eof(lexer);

	if (eof) return(false);

	// If the current character is whitesapce, skip it
	while (ws(val) && !eof)
	{
		printf("ws char : '%c'\tval: %d\n", val, val);
		// Get the next character
		lexer->advance(lexer, true);
		val = lexer->lookahead;
		eof = lexer->eof(lexer);
		if (eof) return(false);
	}

	// If we're at col == 0, and the chacter isn't the beginning of a signature,
	// we're going to mark it a latex word.
	if ((col == 0 && val != '<') | (col > 0))
	{
		// So assign the current token to latex word
		lexer->result_symbol = LATEX_WORD;
		// And loop until some kind of whitespace?
		while (true)
		{
			printf("char : '%c'\tval: %d\n", val, val);
			// Get the next character
			lexer->advance(lexer, false);
			val = lexer->lookahead;
			eof = lexer->eof(lexer);
			// When we've hit whitespace, break
			if (ws(val) || eof)
			{
					// Mark the current position as the end
					lexer->mark_end(lexer);
					printf("breaking\n");
					break;
			}
		}
		res = true;
	}

	printf("res_sym %d\n", lexer->result_symbol);

	printf("here0\n");
	//printf("res: %d\n", res);
	//

	return(res);
}

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
	printf("\n\nNew Call\n\n");
	bool res = lword(lexer);
	return(res);
};
