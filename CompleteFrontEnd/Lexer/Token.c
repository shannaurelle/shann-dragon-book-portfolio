/* token data structure
and related helper functions */
#include "stdio.h"
#include "lexer.h"

Token * initToken(int t){
	Token * tk = malloc(sizeof(Token));
	if(tk == NULL){
		return NULL;
	}
	tk->tag = malloc(sizeof(int));
	if(tk->tag == NULL){
		return NULL;
	}
	return tk;
}

char * TokentoString(Token * tk){
	char * int_str;
	sprintf(int_str,"%d",tk.tag);
	return int_str;
}

struct num{
	Token * token;
	const int value;
}Num;

void initNum(Num * n, int v){
	n->token->tag = Tag.NUM;
	n->value = v; 
}

char * NumtoString(Num * n){
	char * int_str;
	sprintf(int_str,"%d",n.value);
	return int_str;
}