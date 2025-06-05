%{
/*Sección de declaraciones*/
#include <stdio.h>
#include <stdlib.h>
#include "cusSA.tab.h"
%}

WORD        [a-zA-Z]+
DAY 	    \'{WORD}\'
RESOURCE    \'{WORD}[.]{WORD}\'
DIGIT       [0-9]
NUMBER      {DIGIT}+
SPACES	    [ \t]+
COMMENT	    "/*"[a-zA-Z0-9 :_<>=\'\.\-\*\+]+"*/"

/*Sección de reglas*/
%%
{COMMENT}	    {/*Ignora Comentario*/}
"user"          {return USER;}/*KEYWORDS*/
"admin"         {return ADM;}
"guest"         {return GUE;}
"operator"      {return OPE;}
"day"           {return DAY;}
"hour"          {return HOUR;}
"resource"      {return RESO;}
{DAY}           {return DAYV;}/*IDENTIFIERS*/
{RESOURCE}      {return RSC;}
{NUMBER}        {yylval = atoi(yytext); return NUM;}/*NUMBERS*/
"AND"           {return AND;}/*OPERATORS*/ 
"OR"            {return OR;}
"NOT"           {return NOT;}
"<="            {return LT;}/*Less Than*/
">="            {return GT;}/*Greater Than*/
">"             {return MAY;}/*Mayor*/
"<"             {return MIN;}/*Minor*/
"="             {return EQU;}/*Equals*/
[(]		        {return IP;} /*PUNCTUATION*//*Initial parenthesis*/
[)]		        {return FP;}/*Final parenthesis*/
[\n]+		    {return EOL}/*End of line*/
{SPACES}	    {/*Ignore*/}
.               {printf("Error léxico: '%c'\n", *yytext); }
%%