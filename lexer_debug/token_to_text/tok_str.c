#include <stdio.h>
#define N_TOKENS 305

char	*g_token_str_repr[N_TOKENS];
int		g_token_array_initialized;

void	init_token_aray()
{
	int		i;
	char	*s;

	i = 0;
	while (i <= 256)
	{
		s = malloc(2);
		*s = i;
		*(s + 1) = 0;
		g_token_str_repr[i] = s;
		i++;
	}

	g_token_str_repr[258] = "IF";
	g_token_str_repr[259] = "THEN";
	g_token_str_repr[260] = "ELSE";
	g_token_str_repr[261] = "ELIF";
	g_token_str_repr[262] = "FI";
	g_token_str_repr[263] = "CASE";
	g_token_str_repr[264] = "ESAC";
	g_token_str_repr[265] = "FOR";
	g_token_str_repr[266] = "SELECT";
	g_token_str_repr[267] = "WHILE";
	g_token_str_repr[268] = "UNTIL";
	g_token_str_repr[269] = "DO";
	g_token_str_repr[270] = "DONE";
	g_token_str_repr[271] = "FUNCTION";
	g_token_str_repr[272] = "COPROC";
	g_token_str_repr[273] = "COND_START";
	g_token_str_repr[274] = "COND_END";
	g_token_str_repr[275] = "COND_ERROR";
	g_token_str_repr[276] = "IN";
	g_token_str_repr[277] = "BANG";
	g_token_str_repr[278] = "TIME";
	g_token_str_repr[279] = "TIMEOPT";
	g_token_str_repr[280] = "TIMEIGN";
	g_token_str_repr[281] = "WORD";
	g_token_str_repr[282] = "ASSIGNMENT_WORD";
	g_token_str_repr[283] = "REDIR_WORD";
	g_token_str_repr[284] = "NUMBER";
	g_token_str_repr[285] = "ARITH_CMD";
	g_token_str_repr[286] = "ARITH_FOR_EXPRS";
	g_token_str_repr[287] = "COND_CMD";
	g_token_str_repr[288] = "AND_AND";
	g_token_str_repr[289] = "OR_OR";
	g_token_str_repr[290] = "GREATER_GREATER";
	g_token_str_repr[291] = "LESS_LESS";
	g_token_str_repr[292] = "LESS_AND";
	g_token_str_repr[293] = "LESS_LESS_LESS";
	g_token_str_repr[294] = "GREATER_AND";
	g_token_str_repr[295] = "SEMI_SEMI";
	g_token_str_repr[296] = "SEMI_AND";
	g_token_str_repr[297] = "SEMI_SEMI_AND";
	g_token_str_repr[298] = "LESS_LESS_MINUS";
	g_token_str_repr[299] = "AND_GREATER";
	g_token_str_repr[300] = "AND_GREATER_GREATER";
	g_token_str_repr[301] = "LESS_GREATER";
	g_token_str_repr[302] = "GREATER_BAR";
	g_token_str_repr[303] = "BAR_AND";
	g_token_str_repr[304] = "yacc_EOF";

	g_token_array_initialized = 1;
}

void	print_token(int token)
{
	if (!g_token_array_initialized)
		init_token_aray();
	printf("%s\n", (token > 0 && token < 305) ? g_token_str_repr[token] 
			: "unknown token");
}
