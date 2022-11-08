// Chapter 2: A syntax-directed translator in C

#include <stdio.h>

// include parser, lexer structures right here :>

/*
This translator translates infix notation to postfix notation
It follows right-recursive grammar production rules:

A -> term R
B -> + term | - term | null_string

Of course we need the translation schemes as well.

expr -> term rest
rest -> + term {print(`+`)} rest
      | - term {print(`-`)} rest
	  | null_string
term -> 0 {print(`0`)}
	  | 1 {print(`1`)}
	  | 2 {print(`2`)}
	  | 3 {print(`3`)}
	  | 4 {print(`4`)}
	  | 5 {print(`5`)}
	  | 6 {print(`6`)}
	  | 7 {print(`7`)}
	  | 8 {print(`8`)}
	  | 9 {print(`9`)}
*/


// using the translation scheme, we can now make the program :>
// NOTE: this is unoptimized and made only for instructive purposes
int lookahead;

void isDigit(int digit){
	return (digit >= 48 && digit <= 57);
}

// match() checks the syntax errors. Expects a integer input (for flexibility purposes).
void match(){

}

// prints the integer, if not integer alert a syntax error!
void term(){
	if(isDigit(lookahead)) printf("%c",lookahead); match(lookahead);
	else printf("Syntax error! I expected an integer but I got none of it :< \n");
}

// prints the operators + and -
void rest(){
	while(true){
		if(lookahead == '+') match('+'); term(); printf("+"); continue;
		else if(lookahead == '-') match('-'); term(); printf("-"); continue;
		break;
	}
}

void expr(){
	term(); rest();
}

int main(){

// include translator structure right here :>

return 0;
}