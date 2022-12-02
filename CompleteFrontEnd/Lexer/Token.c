/* token data structure
and related helper functions */
struct token{
	const int tag;
}Token;

void initToken(Token * tk, int t){
	tk.tag = t;
}

