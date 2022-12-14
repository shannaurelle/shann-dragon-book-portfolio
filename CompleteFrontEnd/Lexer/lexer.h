// unified header files for lexer

// include declarations
#include "Tag.h";
#include "Token.h";
#include "Word.h";

// type definitions
typedef struct tag Tag;
typedef struct token Token;
typedef struct num Num;
typedef struct word Word;

// prototype functions

// token helper functions
Token * createToken(int t);
void deleteToken(Token * tk);
char * TokentoString(Token * tk);

// num helper functions
Num * createNum(int v);
void deleteNum(Num * n);
char * NumtoString(Num * n);

