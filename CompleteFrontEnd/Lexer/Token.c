/* token data structure
and related helper functions */
#include "stdio.h"
#include "lexer.h"

Token * createToken(int t){
	Token * tk = malloc(sizeof(Token));
	if(tk == NULL){
		return NULL;
	}
	tk->tag = malloc(sizeof(int));
	if(tk->tag == NULL){
		return NULL;
	}
	tk->tag
	return tk;
}

void deleteToken(Token * tk){
	free(tk->tag);
	free(tk);
}

char * TokentoString(Token * tk){
	char * int_str;
	sprintf(int_str,"%d",tk.tag);
	return int_str;
}

struct num{
	Token * token;
	const int * value;
}Num;

Num * createNum(int v){
	Num * n = malloc(sizeof(Num));
	if(n == NULL){
		return NULL;
	}
	n->value = malloc(sizeof(int));
	if(tk->value == NULL){
		return NULL;
	}
	n->value = v;
	return n;
}

void deleteNum(Num * n){
	free(n->value);
	free(n);
}

char * NumtoString(Num * n){
	char * int_str;
	sprintf(int_str,"%d",n.value);
	return int_str;
}