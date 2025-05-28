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
{COMMENT}	{/*Ignora Comentario*/}
"user"          {return USER;}/*KEYWORDS*/
"admin"         {return ADM;}
"guest"         {return GUE;}
"operator"      {return OPE;}
"AND"           {return AND;}
"OR"            {return OR;}
"NOT"           {return NOT;}
"day"           {return DAY;}
"hour"          {return HOUR;}
"resource"      {return RESO;}
{DAY}           {return DAYV;}/*IDENTIFIERS*/
{RESOURCE}      {return RSC;}
{NUMBER}        {yylval = atoi(yytext); return NUM;}/*NUMBERS*/
"<="            {return LT;}/*OPERATORS*/
">="            {return GT;}
">"             {return MAY;}
"<"             {return MIN;}
"="             {return EQU;}
[(]		{return IP;} /*PUNCTUATION*/
[)]		{return FP;}
[\n]+		{return EOL}
{SPACES}	{/*Ignore*/}
.               {printf("Error léxico: '%c'\n", *yytext); }
%%