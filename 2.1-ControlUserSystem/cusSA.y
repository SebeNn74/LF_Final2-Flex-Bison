%{
#include <stdio.h>
#include <stdlib.h>

extern FILE *yyin; 

int yylex(void);
void yyerror(const char *s) {
    fprintf(stderr, "Error sintáctico: %s\n", s);
}

int line_counter = 0;
%}

%token DAYV RSC NUM /*IDENTIFIERS*/
%token USER ADM GUE OPE DAY HOUR RESO /*KEYWORDS*/
%token AND OR NOT GT LT MAY MIN EQU /*OPERATORS*/ 
%token IP FP EOL /*PUNCTUATION*/

%left OR
%left AND
%right NOT
%nonassoc GT LT MAY MIN EQU /*Para evitar encadenar operadores*/

%%
input:
    | input line { 
        line_counter++;
        printf("Linea %d sintácticamente válida.\n", line_counter); }
    ;

line: 
    accesscond EOL  { printf("\n"); }
    ;

accesscond:
    user AND condition
    ;

condition:
    resource
    | day
    | hour
    | NOT condition
    | IP condition FP
    | condition OR condition
    | condition AND condition
    ;

user:
    USER ADM    /*ROLE: ADMIN*/
    | USER GUE  /*ROLE: GUEST*/
    | USER OPE  /*ROLE: OPERATOR*/
    ;

resource:
    RESO EQU RSC
    ;

day:
    DAY EQU DAYV
    ;

hour:
    HOUR EQU NUM    /*=*/
    | HOUR GT NUM   /*>=*/
    | HOUR LT NUM   /*<=*/
    | HOUR MAY NUM  /*>*/
    | HOUR MIN NUM  /*<*/
    ;

%%

/*Sección de funciones del usuario*/
int main(int argc, char **argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            fprintf(stderr, "No se pudo abrir el archivo: %s\n", argv[1]);
            return 1;
        }
    } else {
        yyin = stdin;
        printf("Ingrese el texto para analizar (Ctrl+D para terminar):\n");
    }
    
    yyparse();

    if (yyin != stdin) {
        fclose(yyin);
    }

    return 0;
}