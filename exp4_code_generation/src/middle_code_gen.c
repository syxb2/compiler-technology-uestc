#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "middle_code_gen.h"

int label_counter = 0;

void genArithmeticExpr(past node, char* result) {
    char temp[256];

    if (node->nodeType == BINARY_OPERATOR) {
        genArithmeticExpr(node->left, result); // 生成左操作数的LLVM IR
        genArithmeticExpr(node->right, result); // 生成右操作数的LLVM IR

        // 生成算术操作的LLVM IR
        sprintf(temp, "%%temp%d = add i32 %%result1, %%result2\n", label_counter);
        strcat(result, temp);
        sprintf(result + strlen(result), "%%result = %%temp%d\n", label_counter);
    }
    else if (node->nodeType == INTEGER_LITERAL) {
        sprintf(temp, "%%result = add i32 %d, @\n", node->ivalue);
        strcat(result, temp);
    }
}

void genLogicExpr(past node, char* result) {

}

void genAssignStmt(past node, char* result) {

}

void genIfStmt(past node, char* result) {

}

void genWhileStmt(past node, char* result) {

}
