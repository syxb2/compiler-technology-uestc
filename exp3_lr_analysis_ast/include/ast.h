#ifndef AST_H
#define AST_H

#include <stdbool.h>
#include "node_type.h"

// 假设 AstNode 是你的 AST 节点结构体
typedef struct _ast ast;
typedef struct _ast *past;
struct _ast {
    int ivalue;
    float fvalue;
    char* svalue;
    node_type nodeType;
    past left;
    past right;
    past next;
    past if_cond;
};

// 函数声明
/**
 * @brief 显示抽象语法树
 * 
 * @param node 抽象语法树的根节点
 * @param nest 缩进层次
 * @param use_blank 是否使用空格进行缩进
 */
void showAst(past node, int nest, bool use_blank);

/**
 * @brief 显示词法分析器的 token
 * 
 * @param Token 要显示的 token
 */
void showToken(int Token);

/**
 * @brief 解析关系表达式
 * 
 * @return past 返回生成的关系表达式节点
 */
past rd_relexp();

/**
 * @brief 解析函数调用参数
 * 
 * @return past 返回生成的函数调用参数节点
 */
past rd_call_paras();

/**
 * @brief 解析语句
 * 
 * @return past 返回生成的语句节点
 */
past rd_stmt();

/**
 * @brief 生成参数声明节点
 * 
 * @param left 左子节点
 * @param right 右子节点
 * @param next 下一个节点
 * @return past 返回生成的参数声明节点
 */
past ParaDecl(past left, past right, past next);

/**
 * @brief 生成二元操作节点
 * 
 * @param oper 操作符
 * @param left 左子节点
 * @param right 右子节点
 * @return past 返回生成的二元操作节点
 */
past BinaryOper(int oper, past left, past right);

/**
 * @brief 生成复合语句节点
 * 
 * @param left 左子节点
 * @param right 右子节点
 * @return past 返回生成的复合语句节点
 */
past CompoundStmt(past left, past right);

/**
 * @brief 生成 while 语句节点
 * 
 * @param left 条件表达式节点
 * @param right 循环体节点
 * @return past 返回生成的 while 语句节点
 */
past WhileStmt(past left, past right);

/**
 * @brief 生成 if 语句节点
 * 
 * @param if_cond 条件表达式节点
 * @param left then 分支节点
 * @param right else 分支节点
 * @return past 返回生成的 if 语句节点
 */
past IfStmt(past if_cond, past left, past right);

/**
 * @brief 生成 return 语句节点
 * 
 * @param left 返回值表达式节点
 * @param right 右子节点（通常为 NULL）
 * @return past 返回生成的 return 语句节点
 */
past ReturnStmt(past left, past right);

/**
 * @brief 生成声明引用表达式节点
 * 
 * @param name 引用的变量名
 * @param left 左子节点
 * @param right 右子节点
 * @return past 返回生成的声明引用表达式节点
 */
past DeclRefExp(char * name, past left, past right);

/**
 * @brief 生成 break 语句节点
 * 
 * @return past 返回生成的 break 语句节点
 */
past BreakStmt();

/**
 * @brief 生成 continue 语句节点
 * 
 * @return past 返回生成的 continue 语句节点
 */
past ContinueStmt();

/**
 * @brief 解析加法表达式
 * 
 * @return past 返回生成的加法表达式节点
 */
past AddExp();

/**
 * @brief 解析乘法表达式
 * 
 * @return past 返回生成的乘法表达式节点
 */
past MulExp();

/**
 * @brief 解析一元表达式
 * 
 * @return past 返回生成的一元表达式节点
 */
past NewUnaryExp();

/**
 * @brief 解析基本表达式
 * 
 * @return past 返回生成的基本表达式节点
 */
past NewPrimaryExp();

/**
 * @brief 解析逻辑或表达式
 * 
 * @return past 返回生成的逻辑或表达式节点
 */
past LOrExp();

/**
 * @brief 解析逻辑与表达式
 * 
 * @return past 返回生成的逻辑与表达式节点
 */
past LAndExp();

/**
 * @brief 解析等式表达式
 * 
 * @return past 返回生成的等式表达式节点
 */
past EqExp();

/**
 * @brief 定义一个函数节点
 * 
 * @param left 左子节点
 * @param name 函数名
 * @param right 右子节点
 * @param next 下一个节点
 * @return past 返回函数节点
 */
past FuncDef(past left, char* name, past right, past next);

/**
 * @brief 创建一个新的整数节点
 * 
 * 该函数用于创建一个新的整数节点，并将其值设置为指定的整数。
 * 
 * @param value 整数值
 * @return 返回一个指向新创建的整数节点的指针
 */
past newInt(int value);

/**
 * @brief 创建一个新的浮点数节点
 * 
 * @param value 浮点数值
 * @return 返回一个指向新创建的浮点数节点的指针
 */
past newFloat(float value);

/**
 * @brief 创建一个新的类型节点
 * 
 * @param type 类型的标识符
 * @return past 返回新创建的类型节点
 */
past newType(int type);

/**
 * @brief 创建一个一元操作符节点
 * 
 * @param oper 操作符类型
 * @param left 操作数节点
 * @return past 返回创建的一元操作符节点
 */
past UnaryOper(int oper, past left);

/**
 * @brief 读取一个代码块
 * 
 * @return past 返回解析后的代码块
 */
past rd_block();

/**
 * @brief 读取数组下标
 * 
 * 该函数用于读取数组的下标信息。
 * 
 * @return 返回一个指向数组下标的抽象语法树节点的指针。
 */
past rd_array_subscripts();

#endif // AST_H
