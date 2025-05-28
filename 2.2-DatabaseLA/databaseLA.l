%{
/*Sección de declaraciones*/
#include <stdio.h>
#include <stdlib.h>
#include "databaseSA.tab.h"
%}

SPACES	    [ \t]+
COMMENT	    "/*"[a-zA-Z0-9 :_<>=\'\.\-\*\+]+"*/"

/*Sección de reglas*/
%%
{COMMENT}	{/*Ignora Comentario*/}
[\n]+		{return EOL}
{SPACES}	{/*Ignore*/}
.               {printf("Error léxico: '%c'\n", *yytext); }
%%