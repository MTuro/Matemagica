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

%token FACA SER MOSTRE SOME COM REPITA VEZES FIMLOOP MULTIPLIQUE POR SE ENTAO SENAO FIMPROG

/* Declaração dos não-terminais com tipos */
%type <str> cmds cmd atribuicao impressao operacao repeticao condicional

%%

programa:
    cmds { fprintf(outputFile, "%s\n", $1); fflush(outputFile);}
    ;

cmds:
    cmd cmds { fflush(outputFile);}
        
    | cmd { fflush(outputFile);}
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
        printf("Processing command: FACA SER\n");
        printf("%s = %d\n", $2, $4);
        fprintf(outputFile, "%s = %d\n", $2, $4); fflush(outputFile);}
    ;

impressao:
    MOSTRE IDENTIFIER '.' { 
        printf("Processing command: MOSTRE\n");
        printf("IDENTIFIER: %s\n", $2); fflush(stdout);
        fprintf(outputFile, "print(%s)\n", $2); fflush(outputFile);}
    ;

operacao:
    SOME IDENTIFIER COM IDENTIFIER '.' { fprintf(outputFile, "%s = %s + %s\n", $2, $2, $4); }
    | SOME IDENTIFIER COM NUM '.' { fprintf(outputFile, "%s = %s + %d\n", $2, $2, $4); }
    | MULTIPLIQUE IDENTIFIER POR IDENTIFIER '.' { fprintf(outputFile, "%s = %s * %s\n", $2, $2, $4); }
    ;

repeticao:
    REPITA NUM VEZES ':' cmds FIMLOOP { fprintf(outputFile, "for i = 1, %d do\n%s\nend\n", $2, $5); }
    ;

condicional:
    SE NUM ENTAO cmds FIMLOOP { 
        if ($2 != 0)
            fprintf(outputFile, "if true then\n%s\nend\n", $4);
        else
            fprintf(outputFile, "if false then\n%s\nend\n", $4);
    }
    | SE NUM ENTAO cmds SENAO cmds FIMLOOP { 
        fprintf(outputFile, "if %d ~= 0 then\n%s\nelse\n%s\nend\n", $2, $4, $6); 
    }
    ;

%%



void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
    if (yylval.str != NULL) {
        free(yylval.str);
    }
}
