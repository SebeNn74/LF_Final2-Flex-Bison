%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "databaseSA.tab.h"

/* Variable global para pasar valores al parser */
extern YYSTYPE yylval;
%}

%option noyywrap

DIGITO      [0-9]
LETRA       [a-zA-Z_]
ID          {LETRA}({LETRA}|{DIGITO})*
ENTERO      {DIGITO}+
CADENA      \"([^\\\"]|\\.)*\"
BOOLEAN     (verdadero|falso)
SPACES      [ \t]+
COMMENT     \*([^*]|\*+[^*/])*\*+


%%

"insertar"          { return INSERTAR; }
"en"                { return EN; }
"tabla"             { return TABLA; }
"valores"           { return VALORES; }
"fin"               { return FIN; }

":"                 { return DOSPUNTOS; }
";"                 { return PUNTOCOMA; }
"="                 { return IGUAL; }
","                 { return COMA; }

{BOOLEAN}           { yylval.booleano = strcmp(yytext, "verdadero") == 0; return BOOLEAN; }
{ID}                { yylval.str = strdup(yytext); return ID; }
{ENTERO}            { yylval.entero = atoi(yytext); return ENTERO; }
{CADENA}            { yylval.str = strdup(yytext); return CADENA; }

[\n]+               { return EOL; }

{SPACES}            { /* Ignorar espacios */ }
{COMMENT}           { /* Ignorar comentarios */ }
"//".*              { /* Ignorar comentarios de una línea */ }
\/\*([^*]|\*[^/])*\*\/    { /* Ignorar comentarios tipo bloque */ }
.                   { printf("Error lexico: '%c'\n", *yytext); }
%%
