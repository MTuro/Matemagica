%{
#include "y.tab.h"
%}

%%

"FACA"           { return FACA; }
"SER"            { return SER; }
"MOSTRE"         { return MOSTRE; }
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
[0-9]+           { yylval = atoi(yytext); return NUM; }
[a-zA-Z][a-zA-Z0-9]* { yylval = strdup(yytext); return IDENTIFIER; }
[ \t\n]+         { /* ignore whitespace */ }
.                { return yytext[0]; }
%% 
