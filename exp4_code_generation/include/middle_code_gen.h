#include "ast.h"
#include "node_type.h"
// 实验给出的语法树已经构建好

/**
 * @brief 生成算术表达式的代码。
 *
 * 该函数接收一个表示算术表达式的抽象语法树（AST）结点，并生成相应的代码。
 * 结果存储在提供的结果缓冲区中。
 *
 * @param node 表示算术表达式的AST结点。
 * @param result 用于存储生成代码的缓冲区。用来保存LLVM指令，每行只放一条指令。
 */
void genArithmeticExpr(past node, char* result);

/**
 * @brief 生成逻辑表达式的代码。
 *
 * 该函数接收一个表示逻辑表达式的抽象语法树（AST）结点，并生成相应的代码。
 * 结果存储在提供的结果缓冲区中。
 *
 * @param node 表示逻辑表达式的AST结点。
 * @param result 用于存储生成代码的缓冲区。
 */
void genLogicExpr(past node, char* result);

/**
 * @brief 生成赋值语句的代码。
 *
 * 该函数接收一个表示赋值语句的抽象语法树（AST）结点，并生成相应的代码。
 * 结果存储在提供的结果缓冲区中。
 *
 * @param node 表示赋值语句的AST结点。
 * @param result 用于存储生成代码的缓冲区。
 */
void genAssignStmt(past node, char* result);

/**
 * @brief 生成if语句的代码。
 *
 * 该函数接收一个表示if语句的抽象语法树（AST）结点，并生成相应的代码。
 * 结果存储在提供的结果缓冲区中。
 *
 * @param node 表示if语句的AST结点。
 * @param result 用于存储生成代码的缓冲区。
 */
void genIfStmt(past node, char* result);

/**
 * @brief 生成while语句的代码。
 *
 * 该函数接收一个表示while语句的抽象语法树（AST）结点，并生成相应的代码。
 * 结果存储在提供的结果缓冲区中。
 *
 * @param node 表示while语句的AST结点。
 * @param result 用于存储生成代码的缓冲区。
 */
void genWhileStmt(past node, char* result);
