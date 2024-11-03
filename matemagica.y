%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(const char *s);
int yylex(void);
FILE *outputFile;
%}

%token FACA SER MOSTRE SOME COM REPITA VEZES FIM MULTIPLIQUE POR SE ENTAO SENAO IDENTIFIER NUM


%%

programa:
    cmds { fprintf(outputFile, "%s\n", $1); }
    ;

cmds:
    cmd cmds { fprintf(outputFile, "%s\n%s\n", $1, $2); }
    | cmd { fprintf(outputFile, "%s\n", $1); }
    ;

cmd:
    atribuicao
    | impressao
    | operacao
    | repeticao
    | condicional
    ;

atribuicao:
    FACA IDENTIFIER SER NUM '.' { fprintf(outputFile, "%s = %d\n", $2, $4); }
    ;

impressao:
    MOSTRE IDENTIFIER '.' { fprintf(outputFile, "print(%s)\n", $2); }
    ;

operacao:
    SOME IDENTIFIER COM IDENTIFIER '.' { fprintf(outputFile, "%s = %s + %s\n", $2, $2, $4); }
    | SOME IDENTIFIER COM NUM '.' { fprintf(outputFile, "%s = %s + %d\n", $2, $2, $4); }
    | MULTIPLIQUE IDENTIFIER POR IDENTIFIER '.' { fprintf(outputFile, "%s = %s * %s\n", $2, $2, $4); }
    ;

repeticao:
    REPITA NUM VEZES ':' cmds FIM { fprintf(outputFile, "for i = 1, %d do\n%s\nend\n", $2, $5); }
    ;

condicional:
    SE NUM ENTAO cmds FIM { 
        if ($2 != 0)
            fprintf(outputFile, "if true then\n%s\nend\n", $4);
        else
            fprintf(outputFile, "if false then\n%s\nend\n", $4);
    }
    | SE NUM ENTAO cmds SENAO cmds FIM { 
        fprintf(outputFile, "if %d ~= 0 then\n%s\nelse\n%s\nend\n", $2, $4, $6); 
    }
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
