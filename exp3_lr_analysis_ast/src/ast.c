#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "ast.tab.h"

extern int yylex();
extern YYSTYPE yylval;

static int token;

past newAstNode() {
    past node = malloc(sizeof(ast));
    if (node == NULL) {
        printf("run out of memory.\n");
        exit(0);
    }
    memset(node, 0, sizeof(ast));

    return node;
}

past rd_relexp() {
    past left_expression = AddExp();

    while (token == Y_LESS || token == Y_LESSEQ || token == Y_GREAT || token == Y_GREATEQ) {
        int operation = token;
        token = yylex();
        past right_expression = AddExp();
        left_expression = BinaryOper(operation, left_expression, right_expression);
    }

    return left_expression;
}

past rd_call_paras() {
    past left_expression = AddExp(), temp_expression = left_expression;

    while (token == Y_COMMA) {
        token = yylex();
        past right_expression = AddExp();
        left_expression->next = right_expression;
        left_expression = left_expression->next;
    }

    return temp_expression;
}

past rd_stmt() {
    past temp_expression;

    if (token == Y_ID) {
        char* identifier = yylval.sValue;
        token = yylex();

        rd_array_subscripts();
        if (token != Y_ASSIGN)
            return NULL;
        token = yylex();

        past left_expression = AddExp();
        if (token != Y_SEMICOLON)
            return NULL;
        token = yylex();

        past right_expression = DeclRefExp(identifier, NULL, NULL);

        return BinaryOper(Y_ASSIGN, right_expression, left_expression);
    }
    else if (token == Y_SEMICOLON) {
        token = yylex();
        return NULL;
    }
    else if ((temp_expression = AddExp())) {
        if (token != Y_SEMICOLON)
            return NULL;
        token = yylex();

        return temp_expression;
    }
    else if (token == Y_LBRACKET) {
        token = yylex();
        past block_expression = rd_block();
        if (token != Y_RBRACKET)
            return NULL;
        token = yylex();

        return block_expression;
    }
    else if (token == Y_WHILE) {
        token = yylex();

        if (token != Y_LPAR)
            return NULL;
        token = yylex();

        past condition_expression = LOrExp();
        if (token != Y_RPAR)
            return NULL;
        token = yylex();

        past statement_expression = rd_stmt();

        return WhileStmt(condition_expression, statement_expression);
    }
    else if (token == Y_IF) {
        token = yylex();
        if (token != Y_LPAR)
            return NULL;
        token = yylex();

        past condition_expression = LOrExp();
        if (token != Y_RPAR)
            return NULL;
        token = yylex();

        past then_expression = rd_stmt();
        if (token != Y_ELSE)
            return IfStmt(condition_expression, then_expression, NULL);
        token = yylex();

        past else_expression = rd_stmt();

        return IfStmt(condition_expression, then_expression, else_expression);
    }
    else if (token == Y_BREAK) {
        token = yylex();
        if (token != Y_SEMICOLON)
            return NULL;
        token = yylex();

        return BreakStmt();
    }
    else if (token == Y_CONTINUE) {
        token = yylex();
        if (token != Y_SEMICOLON)
            return NULL;
        token = yylex();

        return ContinueStmt();
    }
    else if (token == Y_RETURN) {
        token = yylex();
        past return_expression = AddExp();
        if (token != Y_SEMICOLON)
            return NULL;
        token = yylex();

        return ReturnStmt(return_expression, NULL);
    }

    else
        return NULL;
}

past LOrExp() {
    past left_expression = LAndExp();

    while (token == Y_OR) {
        token = yylex();
        past right_expression = LAndExp();
        left_expression = BinaryOper(Y_OR, left_expression, right_expression);
    }

    return left_expression;
}

past LAndExp() {
    past left_expression = EqExp();

    while (token == Y_AND) {
        token = yylex();
        past right_expression = EqExp();
        left_expression = BinaryOper(Y_AND, left_expression, right_expression);
    }

    return left_expression;
}

past EqExp() {
    past left_expression = rd_relexp();

    while (token == Y_EQ || token == Y_NOTEQ) {
        int operation = token;
        token = yylex();
        past right_expression = rd_relexp();
        left_expression = BinaryOper(operation, left_expression, right_expression);
    }

    return left_expression;
}

past NewPrimaryExp() {
    if (token == Y_LPAR) {
        token = yylex();
        past expression = AddExp();
        if (token != Y_RPAR)
            return NULL;

        return expression;
    }
    else if (token == Y_ID) {
        char* identifier = yylval.sValue;

        past expression = DeclRefExp(identifier, NULL, NULL);
        token = yylex();
        if (token == Y_LPAR)
            rd_array_subscripts();

        return expression;
    }
    else if (token == num_INT) {
        past int_expression = newInt(yylval.iValue);
        token = yylex();

        return int_expression;
    }
    else if (token == num_FLOAT) {
        past float_expression = newAstNode();
        token = yylex();
        float_expression->fvalue = yylval.fValue;

        return float_expression;
    }

    else
        return NULL;
}

past NewUnaryExp() {
    past expression = NewPrimaryExp();

    if (expression != NULL)
        return expression;
    else if (token == Y_ID) {
        char* identifier = yylval.sValue;
        token = yylex();

        if (token != Y_LPAR)
            return NULL;
        token = yylex();

        if (token == Y_RPAR) {
            token = yylex();
            return DeclRefExp(identifier, NULL, NULL);
        }
        else {
            rd_call_paras();
            if (token != Y_RPAR)
                return NULL;
            token = yylex();

            return DeclRefExp(identifier, NULL, NULL);
        }
    }
    else if (token == Y_ADD) {
        token = yylex();
        past expression = NewUnaryExp();

        return BinaryOper(Y_ADD, NULL, expression);
    }
    else if (token == Y_SUB) {
        token = yylex();
        past expression = NewUnaryExp();

        return BinaryOper(Y_SUB, NULL, expression);
    }
    else if (token == Y_NOT) {
        token = yylex();
        past expression = NewUnaryExp();

        return BinaryOper(Y_NOT, NULL, expression);
    }
    else
        return NULL;
}

past MulExp() {
    past left_expression = NewUnaryExp();

    while (token == Y_MUL || token == Y_DIV || token == Y_MODULO) {
        int operation = token;
        token = yylex();
        past right_expression = NewUnaryExp();
        left_expression = BinaryOper(operation, left_expression, right_expression);
    }

    return left_expression;
}

past AddExp() {
    past left_expression = MulExp();

    while (token == Y_ADD || token == Y_SUB) {
        int operation = token;
        token = yylex();
        past right_expression = MulExp();
        left_expression = BinaryOper(operation, left_expression, right_expression);
    }

    return left_expression;
}

past WhileStmt(past left, past right) {
    past node = newAstNode();
    node->nodeType = WHILE_STMT;
    node->left = left;
    node->right = right;

    return node;
}

past IfStmt(past condition, past left, past right) {
    past node = newAstNode();
    node->nodeType = IF_STMT;
    node->if_cond = condition;
    node->left = left;
    node->right = right;

    return node;
}

past CompoundStmt(past left, past right) {
    past node = newAstNode();
    node->nodeType = COMPOUND_STMT;
    node->left = left;
    node->right = right;

    return node;
}

past BinaryOper(int operation, past left, past right) {
    past node = newAstNode();
    node->nodeType = BINARY_OPERATOR;
    node->ivalue = operation;
    node->left = left;
    node->right = right;

    return node;
}

past ParaDecl(past left, past right, past next) {
    past node = newAstNode();
    node->nodeType = PARM_DECL;
    node->left = left;
    node->right = right;

    return node;
}

past BreakStmt() {
    past node = newAstNode();
    node->nodeType = BREAK_STMT;

    return node;
}

past ContinueStmt() {
    past node = newAstNode();
    node->nodeType = CONTINUE_STMT;

    return node;
}

past ReturnStmt(past left, past right) {
    past node = newAstNode();
    node->nodeType = RETURN_STMT;
    node->left = left;
    node->right = right;

    return node;
}

past DeclRefExp(char * name, past left, past right) {
    past node = newAstNode();
    node->nodeType = DECL_REF_EXPR;
    node->svalue = name;
    node->left = left;
    node->right = right;

    return node;
}

past FuncDef(past left, char* name, past right, past next) {
    past node = newAstNode();
    node->nodeType = FUNCTION_DECL;
    node->svalue = name;
    node->left = left;
    node->right = right;
    node->next = next;

    return node;
}

past newInt(int value) {
    past node = newAstNode();
    node->nodeType = INTEGER_LITERAL;
    node->ivalue = value;

    return node;
}

past newFloat(float value) {
    past node = newAstNode();
    node->nodeType = FLOATING_LITERAL;
    node->fvalue = value;

    return node;
}

past newType(int type) {
    past node = newAstNode();
    node->nodeType = type;

    return node;
}

past UnaryOper(int oper, past left) {
    past node = newAstNode();
    node->nodeType = UNARY_OPERATOR;
    node->ivalue = oper;
    node->left = left;

    return node;
}

past rd_block() {
    past left_expression = rd_stmt(), temp_expression = left_expression;

    while (token != Y_RBRACKET) {
        past right_expression = rd_stmt();
        left_expression->next = right_expression;
        left_expression = left_expression->next;
    }

    return temp_expression;
}

past rd_array_subscripts() {
    if (token == Y_LBRACKET) {
        token = yylex();
        past index_expression = AddExp();
        if (token != Y_RBRACKET)
            return NULL;
        token = yylex();

        past array_expression = newAstNode();
        array_expression->nodeType = ARRAY_SUBSCRIPT_EXPR;
        array_expression->left = index_expression;

        return array_expression;
    }

    return NULL;
}


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

