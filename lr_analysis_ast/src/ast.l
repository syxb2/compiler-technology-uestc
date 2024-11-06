%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "token.h"
%}

%option noyywrap 

DIGIT       [0-9]
LETTER      [a-zA-Z_]
ID          {LETTER}({LETTER}|{DIGIT})*
DIGITS      -?{DIGIT}+
HEXDIGHT    0(x|X)[0-9a-fA-F]+
NUMBER      ([+-])?{DIGITS}+(\.{DIGITS}+)?([E][+-]?{DIGIT}+)

%%
"int"       { return Y_INT; }
"float"     { return Y_FLOAT; }
"void"      { return Y_VOID; }
"const"     { return Y_CONST; }
"if"        { return Y_IF; }
"else"      { return Y_ELSE; }
"while"     { return Y_WHILE; }
"break"     { return Y_BREAK; }
"continue"  { return Y_CONTINUE; }
"return"    { return Y_RETURN; }

"+"         { return Y_ADD; }
"-"         { return Y_SUB; }
"*"         { return Y_MUL; }
"/"         { return Y_DIV; }
"%"         { return Y_MODULO; }
"<"         { return Y_LESS; }
"<="        { return Y_LESSEQ; }
">"         { return Y_GREAT; }
">="        { return Y_GREATEQ; }
"!="        { return Y_NOTEQ; }
"=="        { return Y_EQ; }
"!"         { return Y_NOT; }
"&&"        { return Y_AND; }
"||"        { return Y_OR; }
"="         { return Y_ASSIGN; }

"("         { return Y_LPAR; }
")"         { return Y_RPAR; }
"{"         { return Y_LBRACKET; }
"}"         { return Y_RBRACKET; }
"["         { return Y_LSQUARE; }
"]"         { return Y_RSQUARE; }
","         { return Y_COMMA; }
";"         { return Y_SEMICOLON; }

{ID}        { return Y_ID; }
{HEXDIGHT}  { return num_INT; }
{NUMBER}    { return num_FLOAT; }
{DIGITS}    { return num_INT; }

[ \t\n]+    { ; /* ignore white space */ }
"//"        { while (input() != '\n'); }
"/*"        { int c; while ((c = input()) != '*' || (c = input()) != '/') ; }
.           { ; }
%%

void yyerror(const char *s) {
    fprintf(stderr, "%s\n", s);
    return;
}

int main(int argc, char *argv[]) { 
    int token;
    while ((token = yylex()) != 0) {
        printf("%d, %s\n", token, yytext);
    }

    return 0;
}
