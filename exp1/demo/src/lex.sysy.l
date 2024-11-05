%{
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
%}

%option noyywrap 

DIGIT   [0-9]
LETTER  [a-zA-Z]
ID      {LETTER}({LETTER}|{DIGIT})*
NUMBER  {DIGIT}+(\.{DIGIT}+)?

%{
    enum yytokentype { // 定义词法分析 token 标记符
        INT = 256,
        IF = 257,
        ELSE = 258,
        WHILE = 259,
        RETURN = 260,
        BREAK = 261,
        CONTINUE = 262,
        ASSIGN = 263,
        EQ = 264,
        NEQ = 265,
        LT = 266,
        LE = 267,
        GT = 268,
        GE = 269,
        ADD = 270,
        SUB = 271,
        MUL = 272,
        DIV = 273,
        MOD = 274,
        LPAREN = 275,
        RPAREN = 276,
        LBRACE = 277,
        RBRACE = 278,
        SEMICOLON = 279,
        NUMBER = 280,
        ID = 281,
    };
    int yylval; // 定义局部变量
    FILE *yyin; // 文件输出流
%}

%%
"int"       { return INT; }
"if"        { return IF; }
"else"      { return ELSE; }
"while"     { return WHILE; }
"return"    { return RETURN; }
"break"     { return BREAK; }
"continue"  { return CONTINUE; }
"="         { return ASSIGN; }
"=="        { return EQ; }
"!="        { return NEQ; }
"<"         { return LT; }
"<="        { return LE; }
">"         { return GT; }
">="        { return GE; }
"+"         { return ADD; }
"-"         { return SUB; }
"*"         { return MUL; }
"/"         { return DIV; }
"%"         { return MOD; }
"("         { return LPAREN; }
")"         { return RPAREN; }
"{"         { return LBRACE; }
"}"         { return RBRACE; }
";"         { return SEMICOLON; }
{ID}        { return ID; }
{NUMBER}    { yylval = atof(yytext); return NUMBER; }
[ \t\n]     { ; /* ignore white space */ }
.           { printf("ERROR: Invalid character %s\n", yytext); }
%%

int main(int argc, char *argv[]) {
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

    while ((token = yylex()) != 0) {
        printf("%s %d", yytext, token);
        if (token == NUMBER)
            printf(" = %d\n", yylval);
        else 
            printf("\n");
    }
    fclose(yyin);

    return 0;
}

