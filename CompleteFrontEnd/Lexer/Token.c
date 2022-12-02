/* token data structure
and related helper functions */
#include "stdio.h"
struct token{
	const int tag;
}Token;

struct num{

}Num;

void initToken(Token * tk, int t){
	tk.tag = t;
}

char * TokentoString(Token * tk){
	char * int_str;
	sprintf(int_str,"%d",tk.tag);
	return int_str;
}