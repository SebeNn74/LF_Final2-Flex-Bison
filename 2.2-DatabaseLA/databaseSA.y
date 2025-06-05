%{
#include <stdio.h>
#include <stdlib.h>

/* Archivo de entrada a leer */
extern FILE *yyin;

/* Se declara el analizador léxico yylex */
int yylex(void);

/* Función para devolver error de sintaxis */
void yyerror(const char *s);

/* Contador de líneas válidas procesadas */
int line_counter = 0;
%}

/* Definición del tipo de datos para los valores de los tokens */
%union {
    char* str;
    int entero;
    int booleano;
}

/* Declaración de tokens con un tipo asociado */
%token <str> ID CADENA
%token <entero> ENTERO
%token <booleano> BOOLEAN

/* Declaración de tokens sin tipo asociado */
%token INSERTAR EN TABLA VALORES FIN IGUAL COMA DOSPUNTOS PUNTOCOMA
%token EOL

%%

/* Regla inicial: el programa puede tener múltiples líneas válidas o estar vacío */
input:
      /* Entrada vacía */
    | input consulta EOL {
        line_counter++;
        printf("Línea %d válida.\n", line_counter);
    }
;

consulta:
    INSERTAR EN TABLA ID VALORES DOSPUNTOS asignaciones FIN PUNTOCOMA
;

/* Lista de asignaciones separadas por comas */
asignaciones:
    asignacion
  | asignaciones COMA asignacion
;

/* Una asignación es un id = valor */
asignacion:
    ID IGUAL valor
;

/* Un valor puede ser cadena, entero o booleano */
valor:
    CADENA
  | ENTERO
  | BOOLEAN
;

%%

/* Esta función muestra errores sintácticos desde Bison */
void yyerror(const char *s) {
    fprintf(stderr, "Error sintáctico: %s\n", s);
}

/* Función principal: abre archivo o lee de stdin y ejecuta el parser */
int main(int argc, char **argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");  /* Abrir archivo pasado como argumento */
        if (!yyin) {
            fprintf(stderr, "No se pudo abrir el archivo: %s\n", argv[1]);
            return 1;
        }
    } else {
        yyin = stdin;
        printf("Ingrese el texto para analizar (Ctrl+D para terminar):\n");
    }

    yyparse(); /* Se ejecuta el parser generado */

    if (yyin != stdin) {
        fclose(yyin);
    }

    return 0;
}
