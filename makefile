# Target for the final executable
matemagica: lex.yy.c y.tab.c compiler.c
	gcc -o matemagica lex.yy.c y.tab.c compiler.c -ll

# Generate parser files with yacc
y.tab.c: matemagica.y
	yacc -d matemagica.y

# Generate lexer files with flex
lex.yy.c: lexer.l
	flex lexer.l

# Clean up generated files
clean:
	rm -f matemagica lex.yy.c y.tab.c y.tab.h output.lua
