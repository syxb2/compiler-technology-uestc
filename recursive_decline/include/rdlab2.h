#ifndef LIBRDLAB_AST_H
#define LIBRDLAB_AST_H
#include <stddef.h>
#include "node_type.h"

enum yytokentype {
    num_INT = 258,
    num_FLOAT = 259,

    Y_ID = 260,

    Y_INT = 261,
    Y_VOID = 262,
    Y_CONST = 263,
    Y_IF = 264,
    Y_ELSE = 265,
    Y_WHILE = 266,
    Y_BREAK = 267,
    Y_CONTINUE = 268,
    Y_RETURN = 269,

    Y_ADD = 270,
    Y_SUB = 271,
    Y_MUL = 272,
    Y_DIV = 273,
    Y_MODULO = 274,
    Y_LESS = 275,
    Y_LESSEQ = 276,
    Y_GREAT = 277,
    Y_GREATEQ = 278,
    Y_NOTEQ = 279,
    Y_EQ = 280,
    Y_NOT = 281,
    Y_AND = 282,
    Y_OR = 283,
    Y_ASSIGN = 284,

    Y_LPAR = 285,
    Y_RPAR = 286,
    Y_LBRACKET = 287,
    Y_RBRACKET = 288,
    Y_LSQUARE = 289,
    Y_RSQUARE = 290,
    Y_COMMA = 291,
    Y_SEMICOLON = 292,

    Y_FLOAT = 293
};

typedef struct _TokenType {
    enum yytokentype token;
    union {
        int		ivalue;
        float   fvalue;
        char*	svalue;
    } attr;
} TokenType;

// 下面两个函数用于可能的回溯处理，即如果有多个分支需要尝试，在尝试语法分析前，可调用get_cur_tok_index获取当前单词的位置，
// 之后在分析时可能会调用若干次advance函数，如果分析失败，则可通过set_cur_tok_index函数重置当前单词的位置。
void set_cur_tok_index(int ind); // 所有单词已经读入单词数组中，该函数获取当前单词在数组中的下标
int get_cur_tok_index(); // 将 cur_token 设置为下标指定的token值


TokenType advance(); // 读取下一个单词，将其保存于 cur_token 中，同时返回该单词
extern TokenType cur_token; // 全局变量，表示当前的单词


// Non-terminator（非终结符）
enum Non_terminator {
    CompUnit = 291,
    Decl,
    ConstDecl,
    ConstDefs,
    BType,
    ConstDef,
    ConstExps,
    ConstInitVal,
    ConstInitVals,
    VarDecl,
    VarDecls,
    VarDef,
    InitVal,
    InitVals,
    FuncDef,
    FuncType,
    FuncFParams,
    FuncFParamss,
    FuncFParam,
    Block,
    BlockItems,
    BlockItem,
    Stmt,
    Exp,
    Cond,
    LVal,
    Exps,
    PrimaryExp,
    Number,
    UnaryExp,
    FuncRParams,
    Expss,
    Expr, //包含多种表达式
    ID = 256, // 标识符
    INT = 258, // 整数
    FLOAT = 324
};

typedef struct _ast ast;
typedef struct _ast *past;

//* 在抽象语法树（abstract syntax tree）中，运算符号和关键字都不在叶结点，而是在内部结点中出现
struct _ast {
    //* 运算符和关键字不是保存在子节点，而是保存在本节点的 value 中（svalue）
    int ivalue;
    float fvalue;
    char* svalue;
    node_type nodeType;
    //* 若是二元组，则只用 left 和 right；若是三元组（if-else-then），则会用到 left、right、if_cond。
    past left;
    past right;
    past if_cond;
    past next;
};

// 库提供的函数
past rd_block();
past rd_array_subscripts();

past newAstNode(); // 创建一个结点
past newID(char* value); // 创建一个结点，并将结点中的 svalue 设置为 value
past newInt(int value); // 创建一个结点，并将结点中的 ivalue 设置为 value

// 要完成的函数
past rd_call_paras();
past rd_relexp();
past rd_stmt();


#endif //LIBRDLAB_AST_H
