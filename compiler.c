#include <stdio.h>
#include "y.tab.h"

extern FILE *yyin;
FILE *outputFile;

int main(int argc, char *argv[]) {
    if (argc < 3) {
        fprintf(stderr, "Usage: %s <input.mg> <output.lua>\n", argv[0]);
        return 1;
    }

    yyin = fopen(argv[1], "r");
    if (!yyin) {
        perror("Error opening input file");
        return 1;
    }

    outputFile = fopen(argv[2], "w");
    if (!outputFile) {
        perror("Error opening output file");
        fclose(yyin);
        return 1;
    }

    yyparse();

    fclose(yyin);
    fclose(outputFile);
    printf("Compilation successful: %s generated\n", argv[2]);
    return 0;
}
