%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Archivo de entrada a leer */
extern FILE *yyin;

/* Se declara el analizador léxico yylex */
int yylex(void);

/* Función para devolver error de sintaxis */
void yyerror(const char *s);

/* Contador de líneas válidas procesadas */
int line_counter = 0;

/* Tipos y estructuras para almacenar los datos */
typedef enum { TIPO_ENTERO, TIPO_CADENA, TIPO_BOOLEANO } TipoValor;

typedef struct {
    char* campo;
    TipoValor tipo;
    union {
        int entero;
        char* cadena;
        int booleano;
    } valor;
} Atributo;

typedef struct {
    char* tabla;
    Atributo atributos[100];
    int cantidad;
} InsertQuery;

/* Variable global donde acumulamos los campos de una instrucción */
InsertQuery queryActual = {NULL, {}, 0}; // INICIALIZACIÓN IMPORTANTE

/* Variable temporal para el nombre del campo actual */
char* campoActual = NULL;

/* Prototipo de la función que grabará la consulta en un CSV */
void guardarEnArchivo(InsertQuery query);
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

/* Declaración de tipos para las producciones */
%type <str> consulta

%%

/* Regla inicial: puede haber muchas líneas (consultas o líneas en blanco) */
input:
      /* caso vacío: no hay nada que procesar */
    | input consulta
      {
        /* Si llegamos aquí, "consulta" ha sido leída correctamente */
        line_counter++;
        printf("Línea %d válida.\n", line_counter);
      }
    | input error '\n'  // Manejo de errores mejorado
      {
        yyerrok;
        printf("Error en línea, continuando...\n");
      }
;

/* Cada "consulta" debe tener esta forma exacta: insertar en tabla <ID> valores: <lista_atributos> fin; */
consulta:
    INSERTAR EN TABLA ID VALORES DOSPUNTOS lista_atributos FIN PUNTOCOMA
    {
        /* Verificamos que $4 no sea NULL antes de usarlo */
        if ($4 != NULL) {
            if (queryActual.tabla != NULL) {
                free(queryActual.tabla); // Liberar memoria anterior
            }
            queryActual.tabla = strdup($4);
            guardarEnArchivo(queryActual);
        }
        
        /* Limpieza de memoria para la siguiente consulta */
        for (int i = 0; i < queryActual.cantidad; i++) {
            if (queryActual.atributos[i].campo != NULL) {
                free(queryActual.atributos[i].campo);
                queryActual.atributos[i].campo = NULL;
            }
            if (queryActual.atributos[i].tipo == TIPO_CADENA && 
                queryActual.atributos[i].valor.cadena != NULL) {
                free(queryActual.atributos[i].valor.cadena);
                queryActual.atributos[i].valor.cadena = NULL;
            }
        }
        queryActual.cantidad = 0;
        
        $$ = $4; /* Retornamos el nombre de la tabla */
    }
;

/* "lista_atributos" es una o varias "atributo" separadas por comas */
lista_atributos:
    atributo
  | lista_atributos COMA atributo
;

/* Cada "atributo" corresponde a ID = valor */
atributo:
    ID IGUAL valor
    {
        /* Verificamos que $1 no sea NULL y liberamos campoActual anterior */
        if (campoActual != NULL) {
            free(campoActual);
        }
        if ($1 != NULL) {
            campoActual = strdup($1);
        } else {
            campoActual = NULL;
        }
    }
;

/* Un "valor" puede ser CADENA, ENTERO o BOOLEANO.
   Aquí llenamos queryActual.atributos con el nombre de campo y su valor concreto. */
valor:
    CADENA
    {
        if (queryActual.cantidad < 100 && campoActual != NULL && $1 != NULL) {
            Atributo *a = &queryActual.atributos[queryActual.cantidad++];
            a->campo = strdup(campoActual);
            a->tipo = TIPO_CADENA;
            a->valor.cadena = strdup($1);
        }
    }
  | ENTERO
    {
        if (queryActual.cantidad < 100 && campoActual != NULL) {
            Atributo *a = &queryActual.atributos[queryActual.cantidad++];
            a->campo = strdup(campoActual);
            a->tipo = TIPO_ENTERO;
            a->valor.entero = $1;
        }
    }
  | BOOLEAN
    {
        if (queryActual.cantidad < 100 && campoActual != NULL) {
            Atributo *a = &queryActual.atributos[queryActual.cantidad++];
            a->campo = strdup(campoActual);
            a->tipo = TIPO_BOOLEANO;
            a->valor.booleano = $1;
        }
    }
;

%%

/* Función para mostrar errores sintácticos desde Bison */
void yyerror(const char *s) {
    fprintf(stderr, "Error sintáctico: %s\n", s);
}

/* Función que graba la consulta en archivo CSV para la "tabla" correspondiente */
void guardarEnArchivo(InsertQuery query) {
    if (query.tabla == NULL) {
        fprintf(stderr, "Error: nombre de tabla es NULL\n");
        return;
    }
    
    char nombreArchivo[256];
    snprintf(nombreArchivo, sizeof(nombreArchivo), "%s.csv", query.tabla);

    FILE* f = fopen(nombreArchivo, "a");
    if (!f) {
        perror("No se pudo abrir el archivo");
        return;
    }

    /* Escribimos cada atributo separado por comas */
    for (int i = 0; i < query.cantidad; i++) {
        Atributo *a = &query.atributos[i];
        if (a->tipo == TIPO_ENTERO) {
            fprintf(f, "%d", a->valor.entero);
        } else if (a->tipo == TIPO_CADENA && a->valor.cadena != NULL) {
            /* Escapamos comillas para el CSV */
            fprintf(f, "\"%s\"", a->valor.cadena);
        } else if (a->tipo == TIPO_BOOLEANO) {
            fprintf(f, "%s", a->valor.booleano ? "verdadero" : "falso");
        }
        if (i < query.cantidad - 1) {
            fprintf(f, ",");
        }
    }
    fprintf(f, "\n");
    fclose(f);

    printf("Insertado en %s\n", nombreArchivo);
}

/* Función principal: lee de un archivo o de stdin, llama a yyparse() */
int main(int argc, char **argv) {
    // Inicializar queryActual completamente
    queryActual.tabla = NULL;
    queryActual.cantidad = 0;
    memset(queryActual.atributos, 0, sizeof(queryActual.atributos));
    
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

    int result = yyparse();

    // Limpieza final de memoria
    if (queryActual.tabla != NULL) {
        free(queryActual.tabla);
    }
    if (campoActual != NULL) {
        free(campoActual);
    }
    for (int i = 0; i < queryActual.cantidad; i++) {
        if (queryActual.atributos[i].campo != NULL) {
            free(queryActual.atributos[i].campo);
        }
        if (queryActual.atributos[i].tipo == TIPO_CADENA && 
            queryActual.atributos[i].valor.cadena != NULL) {
            free(queryActual.atributos[i].valor.cadena);
        }
    }

    if (yyin != stdin) {
        fclose(yyin);
    }
    return result;
}