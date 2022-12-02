// unified header files for lexer

// include declarations
#include "Tag.h";
#include "Token.h";

// type definitions
typedef struct tag Tag;
typedef struct token Token;
typedef struct num Num;

// prototype functions

// token helper functions
void initToken(Token * tk, int t);
char * TokentoString(Token * tk);

// num helper functions
void initNum(Num * n, int v);
char * NumtoString(Num * n);

