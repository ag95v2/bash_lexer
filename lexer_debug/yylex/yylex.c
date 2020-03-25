#include "yylex.h"

/* Function for yyparse to call.  yylex keeps track of
   the last two tokens read, and calls read_token.  */
static int	yylex ()
{
  two_tokens_ago = token_before_that;
  token_before_that = last_read_token;
  last_read_token = current_token;
  current_token = read_token (READ);

  if (current_token == shell_eof_token)
      current_token = yacc_EOF;
  return (current_token);
}

int	main()
{

	while (1)
	{
		printf("%d\n", yylex());
	}
	return (0);
}
