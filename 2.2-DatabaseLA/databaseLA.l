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
COMMENT     \/\*([^*]|\*+[^*/])*\*+\/

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

{BOOLEAN}           { 
                      yylval.booleano = (strcmp(yytext, "verdadero") == 0) ? 1 : 0; 
                      return BOOLEAN; 
                    }

{ID}                { 
                      yylval.str = strdup(yytext); 
                      if (yylval.str == NULL) {
                          fprintf(stderr, "Error: no se pudo asignar memoria para ID\n");
                          exit(1);
                      }
                      return ID; 
                    }

{ENTERO}            { 
                      yylval.entero = atoi(yytext); 
                      return ENTERO; 
                    }

{CADENA}            { 
                      /* Remover las comillas de la cadena */
                      int len = strlen(yytext);
                      if (len < 2) {
                          fprintf(stderr, "Error: cadena mal formada\n");
                          return -1;
                      }
                      yylval.str = malloc(len - 1);
                      if (yylval.str == NULL) {
                          fprintf(stderr, "Error: no se pudo asignar memoria para CADENA\n");
                          exit(1);
                      }
                      strncpy(yylval.str, yytext + 1, len - 2);
                      yylval.str[len - 2] = '\0';
                      return CADENA; 
                    }

[\n\r]+             { /* Ignorar nuevas líneas */ }

{SPACES}            { /* Ignorar espacios */ }
{COMMENT}           { /* Ignorar comentarios tipo bloque */ }
"//".*[\n\r]?       { /* Ignorar comentarios de una línea */ }

.                   { 
                      fprintf(stderr, "Error léxico: carácter no reconocido '%c' (ASCII %d)\n", 
                              *yytext, (int)*yytext); 
                      return -1;
                    }

%%