%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(const char *s);
int yylex(void);
extern FILE *outputFile;
%}

/* Define os tipos de valores semânticos */
%union {
    int num;       /* Para números */
    char *str;     /* Para strings e comandos */
}

/* Declaração dos tokens com tipos */
%token <num> NUM
%token <str> IDENTIFIER

%token FACA SER MOSTRE SOME COM REPITA VEZES FIM MULTIPLIQUE POR SE ENTAO SENAO

/* Declaração dos não-terminais com tipos */
%type <str> cmds cmd atribuicao impressao operacao repeticao condicional

%%

programa:
    cmds {  fprintf(outputFile, "%s\n", $1);
            fflush(outputFile); }
    ;

cmds:
    cmd cmds { 
        printf("COMMAND: %s\n%s", $1, $2);
        fflush(stdout);
        char* result = malloc(strlen($1) + strlen($2) + 2);
        if (result == NULL){
            yyerror("Memory allocation failed");
            YYABORT;
        }

        sprintf(result, "%s\n%s", $1, $2);
        $$ = result;
        fflush(outputFile);
    }
    | cmd { 
        $$ = strdup($1);
         if ($$ == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        fflush(outputFile);
    }
    ;


cmd:
    atribuicao
    | impressao
    | operacao
    | repeticao
    | condicional
    ;

atribuicao:
    FACA IDENTIFIER SER NUM '.' { 
        char *result = malloc(strlen($2) + sizeof(int));
        if (result == NULL){
            yyerror("Memory allocation failed");
            YYABORT;
        }

        sprintf(result, "%s = %d", $2, $4); 
        $$ = result;
        fflush(outputFile);}
    ;

impressao:
    MOSTRE IDENTIFIER '.' { 
        char* result = malloc(strlen($2));
        if (result == NULL){
            yyerror("Memory allocation failed");
            YYABORT;
        }

        sprintf(result, "print(%s)", $2);
        $$ = result;
        fflush(outputFile);
    }

    | MOSTRE NUM '.' {
        char* result = malloc(sizeof(int));
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "print(%d)", $2);
        $$ = result;
    }
    ;

operacao:
    SOME IDENTIFIER COM IDENTIFIER '.' { 
        char *result = malloc(strlen($2) * 2 + strlen($4) + 10);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s = %s + %s", $2, $2, $4);
        $$ = result; // Retorna a string para ser usada em cmds
        fflush(outputFile);
    }
    | SOME IDENTIFIER COM NUM '.' { 
        char *result = malloc(strlen($2) * 2 + 20); // Espaço suficiente para o número
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s = %s + %d", $2, $2, $4);
        $$ = result;
        fflush(outputFile);
    }
    | MULTIPLIQUE IDENTIFIER POR IDENTIFIER '.' { 
        char *result = malloc(strlen($2) * 2 + strlen($4) + 10);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s = %s * %s", $2, $2, $4);
        $$ = result;
        fflush(outputFile);
    }
    | MULTIPLIQUE IDENTIFIER POR NUM '.' { 
        char *result = malloc(strlen($2) * 2 + 20);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s = %s * %d", $2, $2, $4);
        $$ = result;
        fflush(outputFile);
    }
    ;


repeticao:
    REPITA NUM VEZES ':' cmds FIM { 
        printf("COMANDO REPT: %s\n", $5); fflush(stdout);
        if ($5 != NULL) {
            char* result = malloc(strlen($5) * 2 + 20);
            if (result == NULL){
                yyerror("Memory allocation failed");
                YYABORT;
            }

            sprintf(result, "for i = 1, %d do\n%s\nend", $2, $5);
            $$ = result;
        } else {
            printf("Captured cmds inside repetition is NULL\n");
            fflush(stdout);
            yyerror("Capture inside repetition is NULL");
            YYABORT;
        }

        fflush(outputFile);
    }
    ;


condicional:
    SE IDENTIFIER ENTAO cmds FIM { 
        printf("IDENTIFIER = %s\n", $2); fflush(stdout);
        printf("Command received = %s\n", $4); fflush(stdout);
        fprintf(outputFile, "if %s then\n%s\nend\n", $2, $4);
        fflush(outputFile);
    }
    | SE IDENTIFIER ENTAO cmds SENAO cmds FIM { 
        fprintf(outputFile, "if %s ~= 0 then\n%s\nelse\n%s\nend\n", $2, $4, $6);
        fflush(outputFile);
    }
    ;

%%



void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
    if (yylval.str != NULL) {
        free(yylval.str);
    }
}
