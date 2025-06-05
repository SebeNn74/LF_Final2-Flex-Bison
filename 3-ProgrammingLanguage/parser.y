%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int yylex(void);
extern char *yytext;
extern int yylineno;
extern FILE *yyin; 
void yyerror(const char *s);
%}
%union {
	float num;
	char *str;
}
%define parse.error verbose
%token EOL VAR IVR VEC <str>STR <num>INT <num>FLO ASS ADD SUB MUL DIV IFU FUN RET SMR SAE GRT GAE EQU NEG DIS AND ORR SII SIN LLA LLC PAA PAC COR_A COR_C LOP ADC REC COMA
%type <num> intoperation floatoperation vector_access
%type <str> stringops
%%

entrada:
    /* vacío */
    | entrada linea
;

linea:
    EOL
    | decvar	           { printf("Correct var declaration\n"); }
    | decvector            { printf("Correct vector declaration\n"); }
    | initvector           { printf("Correct vector initialization\n"); }
    | vector_access EOL    { printf("Correct vector access\n"); }
    | vector_assign        { printf("Correct vector assignment\n"); }
    | intoperation EOL     { printf("Correct operation\n"); }
    | floatoperation EOL   { printf("Correct operation\n"); }
	| stringops EOL        { printf("Correct operation\n"); }
    | initvar	           { printf("Correct var initialization\n"); }
    | asigvar	           { printf("Correct assignment\n"); }
    | condition            { printf("Correct condition\n"); }
    | condiComp            { printf("Correct condition\n"); }
    | loop	               { printf("Correct loop\n"); }
    | decfun    	       { printf("Correct function definition\n"); }
    | callfunc	 		   { printf("Correct function call\n"); }
    | sentence			   { printf("Correct sentence sintaxis\n"); }
	| operationError 	   {yyerror("No arithmetic operations supported for strings");}
	| vectorError          {yyerror("Vector operation error");}
	| condiCompError 	   {yyerror("Functions cannot be declared inside a conditional or a loop.");}
	| loopError
	| decfunError		   {yyerror("Function return not found");}
;
sentences:
	sentence
	| condiComp
	| sentences sentence
	
sentence: 
	intoperation EOL
	| floatoperation EOL
	| stringops EOL
	| decvar EOL
	| decvector EOL
	| initvector EOL
	| vector_access EOL
	| vector_assign EOL
	| asigvar
	| initvar
	| loop
	| callfunc EOL
		
sentencesError:
	decfun
	
decvar:
    VAR IVR
;

/* Declaración de vectores */
decvector:
    VEC IVR COR_A INT COR_C
;

/* Inicialización de vectores */
initvector:
    VEC IVR COR_A INT COR_C ASS LLA vector_elements LLC EOL
    | VEC IVR ASS LLA vector_elements LLC EOL
;

/* Elementos del vector */
vector_elements:
    value
    | vector_elements COMA value
;

/* Acceso a elementos del vector */
vector_access:
    IVR COR_A INT COR_C     { printf("Vector access: %s[%d]\n", "vector", (int)$3); }
    | IVR COR_A IVR COR_C   { printf("Vector access with variable index\n"); }
;

/* Asignación a elementos del vector */
vector_assign:
    IVR COR_A INT COR_C ASS value EOL
    | IVR COR_A INT COR_C ASS intoperation EOL
    | IVR COR_A INT COR_C ASS floatoperation EOL
    | IVR COR_A INT COR_C ASS stringops EOL
    | IVR COR_A IVR COR_C ASS value EOL
    | IVR COR_A IVR COR_C ASS intoperation EOL
    | IVR COR_A IVR COR_C ASS floatoperation EOL
    | IVR COR_A IVR COR_C ASS stringops EOL
;

initvar:
    VAR IVR ASS STR EOL
    | VAR IVR ASS intoperation EOL
    | VAR IVR ASS floatoperation EOL
    | VAR IVR ASS stringops EOL
    | VAR IVR ASS value EOL
    | VAR IVR ASS vector_access EOL
	| VAR IVR ASS callfunc
;

asigvar:
    IVR ASS value EOL
    | IVR ASS intoperation EOL
    | IVR ASS floatoperation EOL
    | IVR ASS stringops EOL
    | IVR ASS vector_access EOL
    | IVR ASS callfunc
    | IVR ASS STR EOL
;

value:
	INT
	| FLO
	| IVR
	| vector_access
;

intoperation:
    INT ADD INT   { 
        $$ = $1 + $3; 
        printf("ADD Result: %f\n", $$); 
    }
    | INT SUB INT    { 
        $$ = $1 - $3; 
        printf("SUB Result: %f\n", $$); 
    }
    | INT MUL INT    { 
        $$ = $1 * $3; 
        printf("MUL Result: %f\n", $$); 
    }
    | INT DIV INT    { 
        if ($3 != 0) {
            $$ = $1 / $3; 
            printf("DIV Result: %f\n", $$); 
        } else {
            printf("Error: Division by zero.\n");
        }
    }
    | FLO ADD INT
    | FLO SUB INT
    | FLO MUL INT
    | FLO DIV INT
    | INT ADD FLO
    | INT SUB FLO
    | INT MUL FLO
    | INT DIV FLO
    | vector_access ADD INT
    | vector_access SUB INT
    | vector_access MUL INT
    | vector_access DIV INT
    | INT ADD vector_access
    | INT SUB vector_access
    | INT MUL vector_access
    | INT DIV vector_access
    | vector_access ADD vector_access
    | vector_access SUB vector_access
    | vector_access MUL vector_access
    | vector_access DIV vector_access
;

floatoperation:
	FLO ADD FLO    { 
        $$ = $1 + $3; 
        printf("ADD Result: %f\n", $$); 
    }
    | FLO SUB FLO    { 
        $$ = $1 - $3; 
        printf("SUB Result: %f\n", $$); 
    }
    | vector_access ADD FLO
    | vector_access SUB FLO
    | vector_access MUL FLO
    | vector_access DIV FLO
    | FLO ADD vector_access
    | FLO SUB vector_access
    | FLO MUL vector_access
    | FLO DIV vector_access
;

stringops:
	STR ADD STR
;

operationError: 
		STR ADD value
		| STR SUB value
		| STR MUL value
		| STR DIV value
		| value ADD STR
		| value SUB STR
		| value MUL STR
		| value DIV STR

/* Errores específicos de vectores */
vectorError:
    VEC IVR COR_A COR_C  /* Vector sin tamaño especificado */
    | IVR COR_A COR_C    /* Acceso sin índice */
    | VEC IVR COR_A STR COR_C  /* Tamaño de vector no numérico */
		
conditionLoop: 
		value SMR value
		| value SAE value
		| value GRT value
		| value GAE value
		| value EQU value
		| value DIS value
		
condition: 
	conditionLoop
	| NEG value
	| value EQU STR
	| STR EQU value
	| value DIS STR
	| STR DIS value

conditionalSim: 
	SII PAA condition PAC LLA sentences LLC
	| SII PAA condition ORR condition PAC LLA sentences LLC
	| SII PAA condition AND condition PAC LLA sentences LLC

condiComp: 
	conditionalSim EOL
	| conditionalSim SIN LLA sentences LLC EOL
	| conditionalSim SIN conditionalSim EOL
	| conditionalSim SIN conditionalSim SIN LLA sentences LLC EOL

condiError: 
	SII PAA condition PAC LLA sentencesError LLC
	| SII PAA condition ORR condition PAC LLA sentencesError LLC
	| SII PAA condition AND condition PAC LLA sentencesError LLC

condiCompError: 
	condiError EOL
	| conditionalSim SIN LLA sentencesError LLC EOL
	| conditionalSim SIN conditionalSim SIN LLA sentencesError LLC EOL

loop: 
	LOP PAA decvar EOL conditionLoop EOL IVR ADC PAC LLA sentences LLC EOL
	| LOP PAA decvar EOL conditionLoop EOL IVR REC PAC LLA sentences LLC EOL

loopError: 
	LOP PAA decvar EOL conditionLoop EOL IVR PAC LLA sentences LLC EOL {yyerror("Counter must be increased");}
	| LOP PAA conditionLoop EOL IVR ADC PAC LLA sentences LLC EOL {yyerror("Increment var undefined");}
	| LOP PAA conditionLoop EOL IVR REC PAC LLA sentences LLC EOL {yyerror("Increment var undefined");}
	| LOP PAA decvar EOL IVR ADC PAC LLA sentences LLC EOL {yyerror("Loop condition undefined");}
	| LOP PAA decvar EOL conditionLoop EOL IVR ADC PAC LLA sentencesError LLC EOL {yyerror("Functions cannot be declared inside the loop");}
	| LOP PAA decvar EOL conditionLoop EOL IVR ADC REC LLA sentencesError LLC EOL {yyerror("Functions cannot be declared inside the loop");}

parameters:
	/* empty params*/
	| decvar
	| decvar COMA parameters

arguments: 
	| IVR
	| IVR COMA arguments

decfunError	: 
	FUN IFU PAA parameters PAC LLA sentences LLC EOL

decfun:
	FUN IFU PAA parameters PAC LLA sentences ret LLC EOL

ret: 
	RET value EOL
	| RET intoperation EOL
	| RET floatoperation EOL
	| RET stringops EOL
	| RET vector_access EOL

callfunc	: 
	IFU PAA arguments PAC

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error found: %s at line %d\n", s, yylineno);
}

int main(int argc, char **argv) {
    if (argc > 1) {
        FILE *file = fopen(argv[1], "r");
        if (!file) {
            perror("File couldnt be open");
            return 1;
        }
        yyin = file;
    } else {
        yyin = stdin;
    }
    return yyparse();
}
