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

%token EOL;

%%

input:
    | input line { 
        line_counter++;
        printf("Linea %d sintácticamente válida.\n", line_counter); }
    ;

line: 
    EOL  { printf("\n"); }
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