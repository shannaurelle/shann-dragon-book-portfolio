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

{ws}	{/* no action and no return */}
if      {return(IF);}

