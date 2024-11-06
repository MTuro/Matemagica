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
    cmds { 
        fprintf(outputFile, "%s\n", $1);
        free($1);
        fflush(outputFile); 
    }
    ;

cmds:
    cmd cmds { 
        char *result = malloc(strlen($1) + strlen($2) + 2);
        if (result == NULL){
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s\n%s", $1, $2);
        $$ = result;
        free($1);
        free($2);
    }
    | cmd { 
        $$ = strdup($1);
        if ($$ == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        free($1);
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
        char *result = malloc(strlen($2) + 20);  // Size adjusted for identifier and number
        if (result == NULL){
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s = %d", $2, $4); 
        $$ = result;
    }
    ;

impressao:
    MOSTRE IDENTIFIER '.' { 
        char *result = malloc(strlen($2) + 10); // Space for identifier and format
        if (result == NULL){
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "print(%s)", $2);
        $$ = result;
    }
    | MOSTRE NUM '.' {
        char *result = malloc(20);  // Space for formatted number
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "print(%d)", $2);
        $$ = result;
    }
    | MOSTRE operacao '.' { 
        char *result = malloc(strlen($2) + 10);  // Space for operation result
        if (result == NULL){
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "print(%s)", $2);
        $$ = result;
        free($2);
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
        $$ = result;
    }
    | SOME IDENTIFIER COM NUM '.' { 
        char *result = malloc(strlen($2) * 2 + 20);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s = %s + %d", $2, $2, $4);
        $$ = result;
    }
    | MULTIPLIQUE IDENTIFIER POR IDENTIFIER '.' { 
        char *result = malloc(strlen($2) * 2 + strlen($4) + 10);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s = %s * %s", $2, $2, $4);
        $$ = result;
    }
    | MULTIPLIQUE IDENTIFIER POR NUM '.' { 
        char *result = malloc(strlen($2) * 2 + 20);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s = %s * %d", $2, $2, $4);
        $$ = result;
    }
    ;

repeticao:
    REPITA NUM VEZES ':' cmds FIM { 
        if ($5 != NULL) {
            char *result = malloc(strlen($5) + 40);
            if (result == NULL){
                yyerror("Memory allocation failed");
                YYABORT;
            }
            sprintf(result, "for i = 1, %d do\n%s\nend", $2, $5);
            $$ = result;
            free($5);
        } else {
            yyerror("Invalid repetition command.");
            YYABORT;
        }
    }
    ;

condicional:
    SE IDENTIFIER ENTAO cmds FIM { 
        char *result = malloc(strlen($2) + strlen($4) + 20);
        if (result == NULL){
           yyerror("Memory allocation failed");
           YYABORT;
        }
        sprintf(result, "if %s then\n%s\nend\n", $2, $4);
        $$ = result;
        free($4);
    }
    | SE NUM ENTAO cmds FIM {
        char *result = malloc(strlen($4) + 30);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "if %d ~= 0 then\n%s\nend", $2, $4);
        $$ = result;
        free($4);
    }
    | SE IDENTIFIER ENTAO cmds SENAO cmds FIM { 
        char *result = malloc(strlen($4) + strlen($6) + 30);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "if %s ~= 0 then\n%s\nelse\n%s\nend", $2, $4, $6);
        $$ = result;
        free($4);
        free($6);
    } 
    | SE NUM ENTAO cmds SENAO cmds FIM {
        char *result = malloc(strlen($4) + strlen($6) + 30);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "if %d ~= 0 then\n%s\nelse\n%s\nend", $2, $4, $6);
        $$ = result;
        free($4);
        free($6);
    } 
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
