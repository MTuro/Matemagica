%{
#include "y.tab.h"
%}

%%

"FACA"           { printf("Processing token: FACA\n"); return FACA; }
"SER"            { printf("Processing token: SER\n"); return SER; }
"MOSTRE"         { printf("Processing token: MOSTRE\n"); return MOSTRE; }
"SOME"           { return SOME; }
"COM"            { return COM; }
"REPITA"         { return REPITA; }
"VEZES"          { return VEZES; }
"FIM"            { return FIM; }
"MULTIPLIQUE"    { return MULTIPLIQUE; }
"POR"            { return POR; }
"SE"             { return SE; }
"ENTAO"          { return ENTAO; }
"SENAO"          { return SENAO; }
[0-9]+           { yylval.num = atoi(yytext); return NUM; }
[a-zA-Z][a-zA-Z0-9]* {   
                        yylval.str = (char*) malloc(strlen(yytext) + 1); // +1 para o caractere nulo
strcpy(yylval.str, yytext); 
                        return IDENTIFIER; }
[ \t\n]+         { /* ignore whitespace */ }
.                { return yytext[0]; }
%% 
