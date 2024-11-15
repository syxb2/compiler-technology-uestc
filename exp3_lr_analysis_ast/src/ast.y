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

%union {
    int iValue;
    float fValue;
    char* sValue;
    past pAst;
}

%token <iValue> num_INT
%token <fValue> num_FLOAT
%token <sValue> Y_ID
%token <iValue> Y_INT Y_FLOAT Y_VOID Y_CONST Y_IF Y_ELSE Y_WHILE Y_BREAK Y_CONTINUE Y_RETURN
%token <iValue> Y_ADD Y_SUB Y_MUL Y_DIV Y_MODULO Y_LESS Y_LESSEQ Y_GREAT Y_GREATEQ Y_NOTEQ Y_EQ Y_NOT Y_AND Y_OR Y_ASSIGN
%token <iValue> Y_LPAR Y_RPAR Y_LBRACKET Y_RBRACKET Y_LSQUARE Y_RSQUARE Y_COMMA Y_SEMICOLON

%type <pAst> CompUnit Decl ConstDecl ConstDefs ConstDef ConstExps ConstInitVal ConstInitVals VarDecl VarDecls VarDef InitVal InitVals FuncDef FuncParams FuncParam Block BlockItems BlockItem Stmt Exp LVal ArraySubscripts PrimaryExp UnaryExp CallParams MulExp AddExp RelExp EqExp LAndExp LOrExp ConstExp Type

%left Y_ADD Y_SUB
%left Y_MUL Y_DIV

%%
/* 大括号外的文法规则只是定义规约的规则，相当于定义变量，没有动作实现。大括号内才是实际要执行的动作（完全需要我们自己写）。 */
/* 我们要做的是写出递归下降函数来计算终结符/非终结符的综合属性（如节点）和继承属性。 */
/* 所以 bison 实际只是给出了一个文法规则的简便声明的方法，实际的规约动作还是需要我们自己实现。 */
/* 并不需要每个非终结符都用单独的函数，可以有多个文法使用同一个规约函数（更简洁）。只要实现相应的功能即可。 */

// 编译单元：可以是声明或函数定义的组合
CompUnit: Decl CompUnit { $$ = CompoundStmt($1, $2); root = $$; }
        | FuncDef CompUnit { $$ = CompoundStmt($1, $2); root = $$; }
        | Decl { $$ = $1; root = $$; }
        | FuncDef { $$ = $1; root = $$; }
        ;

// 声明：可以是常量声明或变量声明
Decl: ConstDecl { $$ = $1; }
    | VarDecl { $$ = $1; }
    ;

// 常量声明：常量类型和常量定义
ConstDecl: Y_CONST Type ConstDef Y_SEMICOLON { $$ = ParaDecl($2, $3, NULL); }
         | Y_CONST Type ConstDefs Y_SEMICOLON { $$ = ParaDecl($2, $3, NULL); }
         ;

// 常量定义列表：多个常量定义
ConstDefs: ConstDef Y_COMMA ConstDef { $$ = ParaDecl($1, $3, NULL); }
         | ConstDefs Y_COMMA ConstDef { $$ = ParaDecl($1, $3, NULL); }
         ;

// 常量定义：常量名和初始化值
ConstDef: Y_ID Y_ASSIGN ConstInitVal { $$ = BinaryOper(Y_ASSIGN, DeclRefExp($1, NULL, NULL), $3); }
        | Y_ID ConstExps Y_ASSIGN ConstInitVal { $$ = BinaryOper(Y_ASSIGN, DeclRefExp($1, $2, NULL), $4); }
        ;

// 常量表达式列表：数组下标
ConstExps: Y_LSQUARE ConstExp Y_RSQUARE { $$ = $2; }
         | Y_LSQUARE ConstExp Y_RSQUARE ConstExps { $$ = CompoundStmt($2, $4); }
         ;

// 常量初始化值：可以是常量表达式或数组初始化
ConstInitVal: ConstExp { $$ = $1; }
            | Y_LBRACKET Y_RBRACKET { $$ = NULL; }
            | Y_LBRACKET ConstInitVal Y_RBRACKET { $$ = $2; }
            | Y_LBRACKET ConstInitVal ConstInitVals Y_RBRACKET { $$ = CompoundStmt($2, $3); }
            ;

// 常量初始化值列表：多个初始化值
ConstInitVals: Y_COMMA ConstInitVal { $$ = $2; }
             | Y_COMMA ConstInitVal ConstInitVals { $$ = CompoundStmt($2, $3); }
             ;

// 变量声明：变量类型和变量定义
VarDecl: Type VarDef Y_SEMICOLON { $$ = ParaDecl($1, $2, NULL); }
       | Type VarDef VarDecls Y_SEMICOLON { $$ = ParaDecl($1, $2, $3); }
       ;

// 变量定义列表：多个变量定义
VarDecls: Y_COMMA VarDef { $$ = $2; }
        | Y_COMMA VarDef VarDecls { $$ = CompoundStmt($2, $3); }
        ;

// 变量定义：变量名和初始化值
VarDef: Y_ID { $$ = DeclRefExp($1, NULL, NULL); }
      | Y_ID Y_ASSIGN InitVal { $$ = BinaryOper(Y_ASSIGN, DeclRefExp($1, NULL, NULL), $3); }
      | Y_ID ConstExps { $$ = DeclRefExp($1, $2, NULL); }
      | Y_ID ConstExps Y_ASSIGN InitVal { $$ = BinaryOper(Y_ASSIGN, DeclRefExp($1, $2, NULL), $4); }
      ;

// 初始化值：可以是表达式或数组初始化
InitVal: Exp { $$ = $1; }
       | Y_LBRACKET Y_RBRACKET { $$ = NULL; }
       | Y_LBRACKET InitVal Y_RBRACKET { $$ = $2; }
       | Y_LBRACKET InitVal InitVals Y_RBRACKET { $$ = CompoundStmt($2, $3); }
       ;

// 初始化值列表：多个初始化值
InitVals: Y_COMMA InitVal { $$ = $2; }
        | Y_COMMA InitVal InitVals { $$ = CompoundStmt($2, $3); }
        ;

// 函数定义：函数类型、函数名、参数和函数体
FuncDef: Type Y_ID Y_LPAR Y_RPAR Block { $$ = FuncDef($1, $2, NULL, $5); }
       | Type Y_ID Y_LPAR FuncParams Y_RPAR Block { $$ = FuncDef($1, $2, $4, $6); }
       ;

// 函数参数列表：多个参数
FuncParams: FuncParam { $$ = $1; }
          | FuncParams Y_COMMA FuncParam { $$ = CompoundStmt($1, $3); }
          ;

// 函数参数：参数类型和参数名
FuncParam: Type Y_ID { $$ = ParaDecl($1, DeclRefExp($2, NULL, NULL), NULL); }
         | Type Y_ID Y_LSQUARE Y_RSQUARE { $$ = ParaDecl($1, DeclRefExp($2, NULL, NULL), NULL); }
         | Type Y_ID ArraySubscripts { $$ = ParaDecl($1, DeclRefExp($2, $3, NULL), NULL); }
         | Type Y_ID Y_LSQUARE Y_RSQUARE ArraySubscripts { $$ = ParaDecl($1, DeclRefExp($2, $5, NULL), NULL); }
         ;

// 代码块：包含多个语句或声明
Block: Y_LBRACKET BlockItems Y_RBRACKET { $$ = $2; }
     | Y_LBRACKET Y_RBRACKET { $$ = NULL; }
     ;

// 代码块项：可以是声明或语句
BlockItems: BlockItem { $$ = $1; }
          | BlockItem BlockItems { $$ = CompoundStmt($1, $2); }
          ;

// 代码块项：声明或语句
BlockItem: Decl { $$ = $1; }
         | Stmt { $$ = $1; }
         ;

// 语句：赋值、表达式、代码块、循环、条件、跳转等
Stmt: LVal Y_ASSIGN Exp Y_SEMICOLON { $$ = BinaryOper(Y_ASSIGN, $1, $3); }
    | Y_SEMICOLON { $$ = NULL; }
    | Exp Y_SEMICOLON { $$ = $1; }
    | Block { $$ = $1; }
    | Y_WHILE Y_LPAR LOrExp Y_RPAR Stmt { $$ = WhileStmt($3, $5); }
    | Y_IF Y_LPAR LOrExp Y_RPAR Stmt { $$ = IfStmt($3, $5, NULL); }
    | Y_IF Y_LPAR LOrExp Y_RPAR Stmt Y_ELSE Stmt { $$ = IfStmt($3, $5, $7); }
    | Y_BREAK Y_SEMICOLON { $$ = BreakStmt(); }
    | Y_CONTINUE Y_SEMICOLON { $$ = ContinueStmt(); }
    | Y_RETURN Exp Y_SEMICOLON { $$ = ReturnStmt($2, NULL); }
    | Y_RETURN Y_SEMICOLON { $$ = ReturnStmt(NULL, NULL); }
    ;

// 表达式：加法表达式
Exp: AddExp { $$ = $1; }
   ;

// 左值：变量名或数组下标
LVal: Y_ID { $$ = DeclRefExp($1, NULL, NULL); }
    | Y_ID ArraySubscripts { $$ = DeclRefExp($1, $2, NULL); }
    ;

// 数组下标：多个下标
ArraySubscripts: Y_LSQUARE Exp Y_RSQUARE { $$ = $2; }
               | Y_LSQUARE Exp Y_RSQUARE ArraySubscripts { $$ = CompoundStmt($2, $4); }
               ;

// 基本表达式：括号表达式、左值、整数、浮点数
PrimaryExp: Y_LPAR Exp Y_RPAR { $$ = $2; }
          | LVal { $$ = $1; }
          | num_INT { $$ = newInt($1); }
          | num_FLOAT { $$ = newFloat($1); }
          ;

// 一元表达式：基本表达式、函数调用、一元运算
UnaryExp: PrimaryExp { $$ = $1; }
        | Y_ID Y_LPAR Y_RPAR { $$ = DeclRefExp($1, NULL, NULL); }
        | Y_ID Y_LPAR CallParams Y_RPAR { $$ = DeclRefExp($1, $3, NULL); }
        | Y_ADD UnaryExp { $$ = UnaryOper(Y_ADD, $2); }
        | Y_SUB UnaryExp { $$ = UnaryOper(Y_SUB, $2); }
        | Y_NOT UnaryExp { $$ = UnaryOper(Y_NOT, $2); }
        ;

// 函数调用参数列表：多个表达式
CallParams: Exp { $$ = $1; }
          | Exp Y_COMMA CallParams { $$ = CompoundStmt($1, $3); }
          ;

// 乘法表达式：一元表达式、乘法、除法、取模
MulExp: UnaryExp { $$ = $1; }
      | MulExp Y_MUL UnaryExp { $$ = BinaryOper(Y_MUL, $1, $3); }
      | MulExp Y_DIV UnaryExp { $$ = BinaryOper(Y_DIV, $1, $3); }
      | MulExp Y_MODULO UnaryExp { $$ = BinaryOper(Y_MODULO, $1, $3); }
      ;

// 加法表达式：乘法表达式、加法、减法
AddExp: MulExp { $$ = $1; }
      | AddExp Y_ADD MulExp { $$ = BinaryOper(Y_ADD, $1, $3); }
      | AddExp Y_SUB MulExp { $$ = BinaryOper(Y_SUB, $1, $3); }
      ;

// 关系表达式：加法表达式、小于、大于、小于等于、大于等于
RelExp: AddExp { $$ = $1; }
      | AddExp Y_LESS RelExp { $$ = BinaryOper(Y_LESS, $1, $3); }
      | AddExp Y_GREAT RelExp { $$ = BinaryOper(Y_GREAT, $1, $3); }
      | AddExp Y_LESSEQ RelExp { $$ = BinaryOper(Y_LESSEQ, $1, $3); }
      | AddExp Y_GREATEQ RelExp { $$ = BinaryOper(Y_GREATEQ, $1, $3); }
      ;

// 等价表达式：关系表达式、等于、不等于
EqExp: RelExp { $$ = $1; }
     | RelExp Y_EQ EqExp { $$ = BinaryOper(Y_EQ, $1, $3); }
     | RelExp Y_NOTEQ EqExp { $$ = BinaryOper(Y_NOTEQ, $1, $3); }
     ;

// 逻辑与表达式：等价表达式、逻辑与
LAndExp: EqExp { $$ = $1; }
       | EqExp Y_AND LAndExp { $$ = BinaryOper(Y_AND, $1, $3); }
       ;

// 逻辑或表达式：逻辑与表达式、逻辑或
LOrExp: LAndExp { $$ = $1; }
      | LAndExp Y_OR LOrExp { $$ = BinaryOper(Y_OR, $1, $3); }
      ;

// 常量表达式：加法表达式
ConstExp: AddExp { $$ = $1; }
        ;

// 类型：整数、浮点数、空类型
Type: Y_INT { $$ = newType(Y_INT); }
    | Y_FLOAT { $$ = newType(Y_FLOAT); }
    | Y_VOID { $$ = newType(Y_VOID); }
    ;

%%

int main() {
    yyparse(); // 执行语法分析过程
    showAst(root, 10, false); // 打印语法树

    return 0;
}

