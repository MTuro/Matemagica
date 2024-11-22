%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void yyerror(const char *s);
int is_number(const char *str);
int is_identifier(const char *str);
int yylex(void);
extern FILE *outputFile;
%}

%union {
    int num;       /* Para números */
    char *str;     /* Para strings e variáveis */
}

%token <num> NUM
%token <str> IDENTIFIER

%token FACA SER MOSTRE SOME COM REPITA VEZES FIM MULTIPLIQUE POR SE ENTAO SENAO

%type <str> cmds cmd atribuicao impressao operacao repeticao condicional operacaoI var


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

var:
    NUM { 
        char *result = malloc(20);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%d", $1);
        $$ = result;
    }
    | IDENTIFIER { 
        $$ = strdup($1);
        if ($$ == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
    }
    ;

atribuicao:
    FACA var SER var '.' {
        char *result = malloc(strlen($2) + strlen($4) + 10);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s = %s", $2, $4);
        $$ = result;
        free($4);
    }
    ;

impressao:
    MOSTRE var '.' {
        char *result = malloc(strlen($2) + 10);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "print(%s)", $2);
        $$ = result;
        free($2);
    }
    | MOSTRE operacaoI '.' {
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
    SOME var COM var '.' {
        char *result;
        
        // Caso ambos sejam números
        if (is_number($2) && is_number($4)) {
            result = malloc(strlen($2) + strlen($4) + 20);
            if (result == NULL) {
                yyerror("Memory allocation failed");
                YYABORT;
            }
            sprintf(result, "var_default = %s + %s", $2, $4);
        } 
        // Caso seja um identificador com outro número ou identificador
        else if (is_identifier($2)) {
            result = malloc(strlen($2) + strlen($4) + 20);
            if (result == NULL) {
                yyerror("Memory allocation failed");
                YYABORT;
            }
            sprintf(result, "%s = %s + %s", $2, $2, $4);
        } 
        // Caso contrário (identificador no segundo argumento)
        else if (is_identifier($4)) {
            result = malloc(strlen($2) + strlen($4) + 20);
            if (result == NULL) {
                yyerror("Memory allocation failed");
                YYABORT;
            }
            sprintf(result, "%s = %s + %s", $4, $4, $2);
        } else {
            yyerror("Invalid operation: no identifier to assign the result.");
            YYABORT;
        }

        $$ = result;
        free($2);
        free($4);
    }
    | MULTIPLIQUE var POR var '.' {
        char *result;

        // Caso ambos sejam números
        if (is_number($2) && is_number($4)) {
            result = malloc(strlen($2) + strlen($4) + 20);
            if (result == NULL) {
                yyerror("Memory allocation failed");
                YYABORT;
            }
            sprintf(result, "var_default = %s * %s", $2, $4);
        } 
        // Caso seja um identificador com outro número ou identificador
        else if (is_identifier($2)) {
            result = malloc(strlen($2) + strlen($4) + 20);
            if (result == NULL) {
                yyerror("Memory allocation failed");
                YYABORT;
            }
            sprintf(result, "%s = %s * %s", $2, $2, $4);
        } 
        // Caso contrário (identificador no segundo argumento)
        else if (is_identifier($4)) {
            result = malloc(strlen($2) + strlen($4) + 20);
            if (result == NULL) {
                yyerror("Memory allocation failed");
                YYABORT;
            }
            sprintf(result, "%s = %s * %s", $4, $4, $2);
        } else {
            yyerror("Invalid operation: no identifier to assign the result.");
            YYABORT;
        }

        $$ = result;
        free($2);
        free($4);
    }
    ;

operacaoI:
    SOME var COM var {
        char *result = malloc(strlen($2) + strlen($4) + 10);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s + %s", $2, $4);
        $$ = result;
        free($2);
        free($4);
    }
    | MULTIPLIQUE var POR var {
        char *result = malloc(strlen($2) + strlen($4) + 10);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "%s * %s", $2, $4);
        $$ = result;
        free($2);
        free($4);
    }
    ;

repeticao:
    REPITA var VEZES ':' cmds FIM { 
        char *result = malloc(strlen($2) + strlen($5) + 40);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "for i = 1, %s do\n%s\nend", $2, $5);
        $$ = result;
        free($2);
        free($5);
    }
    ;

condicional:
    SE var ENTAO cmds FIM { 
        char *result = malloc(strlen($2) + strlen($4) + 20);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "if %s ~= 0 then\n%s\nend", $2, $4);
        $$ = result;
        free($2);
        free($4);
    }
    | SE var ENTAO cmds SENAO cmds FIM { 
        char *result = malloc(strlen($2) + strlen($4) + strlen($6) + 30);
        if (result == NULL) {
            yyerror("Memory allocation failed");
            YYABORT;
        }
        sprintf(result, "if %s ~= 0 then\n%s\nelse\n%s\nend", $2, $4, $6);
        $$ = result;
        free($2);
        free($4);
        free($6);
    }
    ;


%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int is_number(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            return 0;  // Não é número
        }
    }
    return 1;  // É número
}

int is_identifier(const char *str) {
    if (isalpha(str[0]) || str[0] == '_') {  // Deve começar com letra ou underscore
        for (int i = 1; str[i] != '\0'; i++) {
            if (!isalnum(str[i]) && str[i] != '_') {
                return 0;  // Caracteres inválidos
            }
        }
        return 1;  // É identificador
    }
    return 0;  // Não é identificador
}
