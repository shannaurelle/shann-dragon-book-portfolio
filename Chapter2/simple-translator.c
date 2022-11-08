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

// match() checks the syntax errors. Expects a string input.
void match(){

}

void term(){

}

void rest(){

}

void expr(){
	term(); rest();
}

int main(){

// include translator structure right here :>

return 0;
}