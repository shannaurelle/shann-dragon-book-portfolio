%{

 /* definitions of manifest constants
 LT, LE, EQ, NE, GT, GE,
 IF, THEN, ELSE, ID, NUMBER, RELOP */
	
%}

/* regular definitions */

delim	[ \t\n]
ws		{delim}+
letter	[A-Za-z]
digit	[0-9]
id		{letter}({letter}|{digit})*
number	{digit}+(\.{digit}+)?(E[+-]?{digit}+)?

%%

{ws}		{/* no action and no return */}
if      	{return(IF);}
then		{return(THEN);}
else 		{return(ELSE);}
{id}		{yylval = (int) installID(); return(ID);}
{number}	{yylval = (int) installNum(); return(NUMBER);}
"<"			{yylval = LT; return(RELOP);}
"<="		{yylval = LE; return(RELOP);}
"="			{yylval = EQ; return(RELOP);}
"<>"		{yylval = NE; return(RELOP);}
">"			{yylval = GT; return(RELOP);}
">="		{yylval = GE; return(RELOP);}

%%

int installNum(){
	/* function to call the lexeme, whose
	first character is pointed to by yytext,
	and whose length is yyleng, into the
	symbol table and return a pointer
	thereto */
}