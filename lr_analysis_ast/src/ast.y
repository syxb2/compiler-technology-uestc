%code requires {
    #include "ast.h"
}
/* %code requires {} 用于声明在解析器生成前必须包含的代码，通常是头文件的引用或前置声明。这部分代码会被放置在 Bison 自动生成的头文件中，确保其他文件或模块在包含这个头文件时也能获得这些定义 */

%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    extern int yylex(void);
    extern void yyerror(char* s);
    extern void yyrestart();
%}
/* %{ %} 用于包含需要嵌入在生成的解析器中的 C/C++ 代码。这部分代码通常被插入到生成的 .c 或 .cpp 文件的最前面 */
/* 生成的 c 文件会自动引用 bison 生成的 h 文件 */

%token num_FLOAT num_INT
%token Y_ID
%token Y_INT Y_FLOAT Y_VOID Y_CONST Y_IF Y_ELSE Y_WHILE Y_BREAK Y_CONTINUE Y_RETURN
%token Y_ADD Y_SUB Y_MUL Y_DIV Y_MODULO Y_LESS Y_LESSEQ Y_GREAT Y_GREATEQ Y_NOTEQ Y_EQ Y_NOT Y_AND Y_OR Y_ASSIGN
%token Y_LPAR Y_RPAR Y_LBRACKET Y_RBRACKET Y_LSQUARE Y_RSQUARE Y_COMMA Y_SEMICOLON
%left Y_ADD Y_SUB
%left Y_MUL Y_DIV
%union {
    int iValue;
    past pAst;
};


%%
/* TODO */
CompUnit: Decl CompUnit
        | FuncDef CompUnit
        | Decl
        | FuncDef
        ;
Decl: ConstDecl
    | VarDecl
    ;
ConstDecl: Y_CONST Type ConstDef Y_SEMICOLON
         | Y_CONST Type ConstDefs Y_SEMICOLON
         ;
ConstDefs: ConstDef Y_COMMA ConstDef
         | ConstDefs Y_COMMA ConstDef
         ;
ConstDef: Y_ID Y_ASSIGN ConstInitVal
        | Y_ID ConstExps Y_ASSIGN ConstInitVal
        ;
ConstExps: Y_LSQUARE ConstExp Y_RSQUARE
         | Y_LSQUARE ConstExp Y_RSQUARE ConstExps
         ;
ConstInitVal: ConstExp
            | Y_LBRACKET Y_RBRACKET
            | Y_LBRACKET ConstInitVal Y_RBRACKET
            | Y_LBRACKET ConstInitVal ConstInitVals Y_RBRACKET
            ;
ConstInitVals: Y_COMMA ConstInitVal
             | Y_COMMA ConstInitVal ConstInitVals
             ;
VarDecl: Type VarDef Y_SEMICOLON
       | Type VarDef VarDecls Y_SEMICOLON
       ;
VarDecls: Y_COMMA VarDef
        | Y_COMMA VarDef VarDecls
        ;
VarDef: Y_ID
      | Y_ID Y_ASSIGN InitVal
      | Y_ID ConstExps
      | Y_ID ConstExps Y_ASSIGN InitVal
      ;
InitVal: Exp
       | Y_LBRACKET Y_RBRACKET
       | Y_LBRACKET InitVal Y_RBRACKET
       | Y_LBRACKET InitVal InitVals Y_RBRACKET
       ;
InitVals: Y_COMMA InitVal
        | Y_COMMA InitVal InitVals
        ;
FuncDef: Type Y_ID Y_LPAR Y_RPAR Block
       | Type Y_ID Y_LPAR FuncParams Y_RPAR Block
       ;
FuncParams: FuncParam
          | FuncParams Y_COMMA FuncParam
          ;
FuncParam: Type Y_ID
         | Type Y_ID Y_LSQUARE Y_RSQUARE
         | Type Y_ID ArraySubscripts
         | Type Y_ID Y_LSQUARE Y_RSQUARE ArraySubscripts
         ;
Block: Y_LBRACKET BlockItems Y_RBRACKET
     | Y_LBRACKET Y_RBRACKET
     ;
BlockItems: BlockItem
          | BlockItem BlockItems
          ;
BlockItem: Decl
         | Stmt
         ;
Stmt: LVal Y_ASSIGN Exp Y_SEMICOLON
    | Y_SEMICOLON
    | Exp Y_SEMICOLON
    | Block
    | Y_WHILE Y_LPAR LOrExp Y_RPAR Stmt
    | Y_IF Y_LPAR LOrExp Y_RPAR Stmt
    | Y_IF Y_LPAR LOrExp Y_RPAR Stmt Y_ELSE Stmt
    | Y_BREAK Y_SEMICOLON
    | Y_CONTINUE Y_SEMICOLON
    | Y_RETURN Exp Y_SEMICOLON
    | Y_RETURN Y_SEMICOLON
    ;
Exp: AddExp
   ;
LVal: Y_ID
    | Y_ID ArraySubscripts
    ;
ArraySubscripts: Y_LSQUARE Exp Y_RSQUARE
               | Y_LSQUARE Exp Y_RSQUARE ArraySubscripts
               ;
PrimaryExp: Y_LPAR Exp Y_RPAR
          | LVal
          | num_INT
          | num_FLOAT
          ;
UnaryExp: PrimaryExp
        | Y_ID Y_LPAR Y_RPAR
        | Y_ID Y_LPAR CallParams Y_RPAR
        | Y_ADD UnaryExp
        | Y_SUB UnaryExp
        | Y_NOT UnaryExp
        ;
CallParams: Exp
          | Exp Y_COMMA CallParams
          ;
MulExp: UnaryExp
      | MulExp Y_MUL UnaryExp
      | MulExp Y_DIV UnaryExp
      | MulExp Y_MODULO UnaryExp
      ;
AddExp: MulExp
      | AddExp Y_ADD MulExp
      | AddExp Y_SUB MulExp
      ;
RelExp: AddExp
      | AddExp Y_LESS RelExp
      | AddExp Y_GREAT RelExp
      | AddExp Y_LESSEQ RelExp
      | AddExp Y_GREATEQ RelExp
      ;
EqExp: RelExp
     | RelExp Y_EQ EqExp
     | RelExp Y_NOTEQ EqExp
     ;
LAndExp: EqExp
       | EqExp Y_AND LAndExp
       ;
LOrExp: LAndExp
      | LAndExp Y_OR LOrExp
      ;
ConstExp: AddExp
        ;
Type: Y_INT
    | Y_FLOAT
    | Y_VOID
    ;
%%


int main() {
    /* TODO */
    return 0;
}
