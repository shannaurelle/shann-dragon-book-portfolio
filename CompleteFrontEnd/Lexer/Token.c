/* token data structure
and related helper functions */
struct token{
	const int tag;
}Token;

struct num{

}Num;

void initToken(Token * tk, int t){
	tk.tag = t;
}

char * toString(Token * tk){
	// need to review this later
	return ((char) tk.tag);
}