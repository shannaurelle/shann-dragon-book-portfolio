/* token data structure
and related helper functions */
#include "stdio.h"
struct token{
	const int tag;
}Token;

void initToken(Token * tk, int t){
	tk->tag = t;
}

char * TokentoString(Token * tk){
	char * int_str;
	sprintf(int_str,"%d",tk.tag);
	return int_str;
}

struct num{
	const int value;
}Num;

void initNum(Num * n, int v){
	n->value = v; 
}

char * NumtoString(Num * n){
	
}