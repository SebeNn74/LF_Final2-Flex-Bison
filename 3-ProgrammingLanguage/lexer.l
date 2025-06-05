%{
#include "parser.tab.h"
%}
/* Patterns definition */
DIGIT           [0-9]
LETTER          [a-zA-Z]
IDENTIFIERVAR   @[a-zA-Z0-9_]*
ENT             (-?[1-9][0-9]{0,4})|0
DECIMAL         -?{DIGIT}+\.{DIGIT}*
STRING          \"[a-zA-Z ]*\"
COMENTARY       \/\![a-zA-Z0-9 - , . > < ]*\!\/
IDENTIFIERFUN   fun{DIGIT}+
%%
\n              { yylineno++; }
";"             { return EOL; }
"declare"       { return VAR; }          /* Cambio: var -> declare */
"vector"        { return VEC; }          /* Nuevo: declaración de vectores */
{IDENTIFIERVAR} { yylval.str = strdup(yytext+1);
				yylval.str[strlen(yylval.str) - 1] = '\0';
				return IVR;}
{STRING} 		{ yylval.str = strdup(yytext + 1); 
				yylval.str[strlen(yylval.str) - 1] = '\0'; 
				return STR;}
{ENT} 			{ yylval.num = atoi(yytext); 
				return INT;}
{DECIMAL} 		{ yylval.num = atof(yytext); 
				return FLO;}
{COMENTARY}     { /* Ignore comments */ }
{IDENTIFIERFUN} { return IFU;}
"funcion"       { return FUN; }           /* Cambio: func -> funcion */
"devolver"      { return RET; }           /* Cambio: ret -> devolver */
"="            { return ASS; }
"+"             { return ADD; }
"*"             { return MUL; }
"/"             { return DIV; }
"-"             { return SUB; }
"<"             { return SMR; }
"<="            { return SAE; }
">"             { return GRT; }
">="            { return GAE; }
"eq"            { return EQU; }
"no"            { return NEG; }           /* Cambio: not -> no */
"noteq"         { return DIS; }
"y"             { return AND; }           /* Cambio: and -> y */
"o"             { return ORR; }           /* Cambio: or -> o */
"si"            { return SII; }           /* Cambio: fi -> si */
"sino"          { return SIN; }           /* Cambio: felse -> sino */
"{"             { return LLA; }
"}"             { return LLC; }
"("             { return PAA; }
")"             { return PAC; }
"["             { return COR_A; }         /* Nuevo: corchete abierto */
"]"             { return COR_C; }         /* Nuevo: corchete cerrado */
"++"            { return ADC; }
"~~"            { return REC; }
"repetir"       { return LOP; }           /* Cambio: loop -> repetir */
","				{ return COMA;}
[ \t\r]         { /* No spaces nor tabs */ }
.               { printf("Lex error: %s at line %d\n", yytext, yylineno); }
%%
int yywrap() { return 1; }
