%{
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include"token.h"
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
{HEXDIGHT}  { printf("<%d, %ld>\n", num_INT, strtol(yytext, NULL, 16)); return num_INT; }
{NUMBER}    { printf("<%d, %s>\n", num_FLOAT, yytext); return num_FLOAT; }
{DIGITS}    { printf("<%d, %s>\n", num_INT, yytext); return num_INT; }

[ \t\n]+    { ; /* ignore white space */ }
"//"        { while (input() != '\n'); }
"/*"        { int c; while ((c = input()) != '*' || (c = input()) != '/') ; }
.           { ; }
%%

void yyerror(const char *s) {
    fprintf(stderr, "%s\n", s);
}

int main(int argc, char *argv[]) { 
    int token;

    // int yylval;
    // FILE *yyin;

    // if (argc != 2) {
    //     fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
    //     return 1;
    // }

    // yyin = fopen(argv[1], "r");
    // if (!yyin) {
    //     fprintf(stderr, "Error opening input file\n");
    //     return 1;
    // }

    while ((token = yylex()) != 0) {
        if (token >= Y_INT && token <= Y_RETURN || token == Y_FLOAT)
            printf("<%d, KEYWORD>\n", token);
        else if (token >= Y_ADD && token <= Y_ASSIGN)
            printf("<%d, OPERATOR>\n", token);
        else if (token >= Y_LPAR && token <= Y_SEMICOLON)
            printf("<%d, SYMBOL>\n", token);
        else if (token == Y_ID)
            printf("<%d, %s>\n", Y_ID, yytext);

    }

    // fclose(yyin);

    return 0;
}
