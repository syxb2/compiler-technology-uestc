/**
 * ast.h
 *
 *  Created on: 2014年10月23日
 *      Author: erqiang
 */
#ifndef AST_H
#define AST_H

#include "node_type.h"

typedef struct _ast ast;
typedef struct _ast *past;
struct _ast {
    int ivalue;
    float fvalue;
    char *svalue;
    node_type nodeType;
    past left;
    past right;
    past next;
    int lineno;
};

past newList(past list, past node);
#define listHead(node) node->left
#define listTail(node) node->right


past newNum(int value);
past newExpr(int oper, past left, past right);
void showAst(past node, int nest);

#endif
