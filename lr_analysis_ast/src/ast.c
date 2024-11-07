#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "ast.tab.h"


void showAst(past node, int nest, bool use_blank) {
    if (node == NULL)
        return;
    if (use_blank) {
        for (int i = 0; i < nest; i++)
            printf("    ");
    }
    else {
        printf("%d", nest);
    }
    switch (node->nodeType) {
        case INTEGER_LITERAL:
            printf("%s %d\n", "INTEGER_LITERAL", node->ivalue);
            break;
        case BINARY_OPERATOR:
            printf("%s ", "BINARY_OPERATOR");
            showToken(node->ivalue);
            printf("\n");
            break;
        case UNARY_OPERATOR:
            printf("%s ", "UNARY_OPERATOR");
            showToken(node->ivalue);
            printf("\n");
            break;
        case FUNCTION_DECL:
            printf("%s '%s'\n", "FUNCTION_DECL", node->svalue);
            break;
        case CALL_EXPR:
            printf("%s\n", "CALL_EXPR");
            break;
        case COMPOUND_STMT:
            printf("%s\n", "COMPOUND_STMT");
            break;
        case DECL_STMT:
            printf("%s\n", "DECL_STMT");
            break;
        case VARIABLE_REF:
            printf("%s\n", "VARIABLE_REF");
            break;
        case PARM_DECL:
            printf("%s '%s'\n", "PARM_DECL", node->svalue);
            break;
        case VAR_DECL:
            printf("%s: '%s'\n", "VAR_DECL", node->svalue);
            break;
        case DECL_REF_EXPR:
            printf("%s: '%s'\n", "DECL_REF_EXPR", node->svalue);
            break;
        case RETURN_STMT:
            printf("%s\n", "RETURN_STMT");
            break;
        case WHILE_STMT:
            printf("%s\n", "WHILE_STMT");
            break;
        case BREAK_STMT:
            printf("%s\n", "BREAK_STMT");
            break;
        case CONTINUE_STMT:
            printf("%s\n", "CONTINUE_STMT");
            break;
        case IF_STMT:
            printf("%s\n", "IF_STMT");
            showAst(node->if_cond, nest + 1, use_blank);
            break;
        case INIT_LIST_EXPR:
            printf("%s\n", "INIT_LIST_EXPR");
            break;
        case ARRAY_SUBSCRIPT_EXPR:
            printf("%s\n", "ARRAY_SUBSCRIPT_EXPR");
            break;
        case PAREN_EXPR:
            printf("%s\n", "PAREN_EXPR");
            break;
        default:
            printf("%s\n", "NOT IMPlemented");
            break;
    }
    showAst(node->left, nest + 1, use_blank);
    showAst(node->right, nest + 1, use_blank);
    showAst(node->next, nest, use_blank);
}

void showToken(int Token) {
    switch (Token) {
        case Y_INT:
            printf("%s", "INTEGER");
            break;
        case Y_FLOAT:
            printf("%s", "FLOAT");
            break;
        case Y_CONST:
            printf("%s", "CONST");
            break;
        case Y_ADD:
        case '+':
            printf("'%c'", '+');
            break;
        case Y_SUB:
        case '-':
            printf("'%c'", '-');
            break;
        case Y_MUL:
        case '*':
            printf("'%c'", '*');
            break;
        case Y_DIV:
            printf("'%c'", '/');
            break;
        case Y_MODULO:
        case '%':
            printf("'%c'", '%');
            break;
        case Y_LESS:
        case '<':
            printf("'%c'", '<');
            break;
        case Y_LESSEQ:
            printf("'%s'", "<=");
            break;
        case Y_GREAT:
        case '>':
            printf("'%c'", '>');
            break;
        case Y_GREATEQ:
            printf("'%s'", ">=");
            break;
        case Y_NOTEQ:
            printf("'%s'", "!=");
            break;
        case Y_EQ:
            printf("'%s'", "==");
            break;
        case Y_NOT:
        case '!':
            printf("'%c'", '!');
            break;
        case Y_AND:
            printf("'%s'", "&&");
            break;
        case Y_OR:
            printf("'%s'", "||");
            break;
        case Y_ASSIGN:
        case '=':
            printf("'%c'", '=');
            break;
        default:
            break;
    }
}

past newNum(int value) {
    //TODO
    return NULL;
}

past newExpr(int oper, past left, past right) {
    //TODO
    return NULL;
}
