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
COMMENT     /\*([^*]|\*+[^*/])*\*+/

%%

/* Palabras clave tokens */
"insertar"          { return INSERTAR; }
"en"                { return EN; }
"tabla"             { return TABLA; }
"valores"           { return VALORES; }
"fin"               { return FIN; }

":"                 { return DOSPUNTOS; }
";"                 { return PUNTOCOMA; }
"="                 { return IGUAL; }
","                 { return COMA; }

/* Tokens para Bison */
{ID}                { yylval.str = strdup(yytext); return ID; }
{ENTERO}            { yylval.entero = atoi(yytext); return ENTERO; }
{CADENA}            { yylval.str = strdup(yytext); return CADENA; }
{BOOLEAN}           { yylval.booleano = strcmp(yytext, "verdadero") == 0; return BOOLEAN; }

/* salto de linea, es decir token EOL */
[\n]+               { return EOL; }

/* A Ignorar */
{SPACES}            { /* Ignorar espacios */ }
{COMMENT}           { /* Ignorar comentarios */ }

/* Para errores */
.                   { printf("Error lexico: '%c'\n", *yytext); }

%%
