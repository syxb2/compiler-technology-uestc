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
num_INT     0[xX][0-9a-fA-F]+|0[bB][01]+|0[0-7]+|[1-9][0-9]*|0
num_FLOAT   {DIGIT}+(\.{DIGIT}+)?([eE][+-]?{DIGIT}+)?
%{
// ? 表示 0 或 1 次
%}

%{
int yylval; // 定义局部变量
FILE *yyin; // 文件输出流
%}

%{
// 下面的代码会等效为 c 代码中的 yylex() 函数
%}

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
{num_INT}   { yylval = atof(yytext); return num_INT; }
{num_FLOAT} { yylval = atof(yytext); return num_FLOAT; }

[ \t\n]     { ; /* ignore white space */ }
"//"        { while (input() != '\n'); }
"/*"        { int c; while ((c = input()) != '*' || (c = input()) != '/') ; }
.           { printf("ERROR: Invalid character %s\n", yytext); }
%%

int main(int argc, char *argv[]) { 
    // argc 表示参数的个数，*argv[] 表示命令行输入的内容(argv[0] 表示此程序的名字，即命令行输入的第一个词)
    int token;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    yyin = fopen(argv[1], "r");
    if (!yyin) {
        fprintf(stderr, "Error opening input file\n");
        return 1;
    }

    // 主循环
    while ((token = yylex()) != 0) { // yylex() 是扫描的 token
        if (token >= 261 && token <= 269)
            printf("<%d, KEYWORD>", token);
        else if (token >= 270 && token <= 284)
            printf("<%d, OPERATOR>", token);
        else if (token >= 258 && token <= 260)
            printf("<%d, %s>", token, yytext);
        else 
            printf("<%d, SYMBOL>", token);

        printf("\n");
    }
    fclose(yyin);

    return 0;
}
