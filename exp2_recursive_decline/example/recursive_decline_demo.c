#include "rdlab2.h"

past rd_relexp();
past rd_call_paras();
past rd_stmt();

past ParaDecl(past left, past right, past next);
past BinaryOper(int oper, past left, past right);
past CompoundStmt(past left, past right);
past WhileStmt(past left, past right);
past IfStmt(past if_cond, past left, past right);
past ReturnStmt(past left, past right);
past DeclRefExp(char * name, past left, past right);
past BreakStmt();
past ContinueStmt();
past AddExp();
past MulExp();
past NewUnaryExp();
past NewPrimaryExp();
past LOrExp();
past LAndExp();
past EqExp();

past rd_relexp() {
    past left_expression = AddExp();

    while (cur_token.token == Y_LESS || cur_token.token == Y_LESSEQ || cur_token.token == Y_GREAT || cur_token.token == Y_GREATEQ) {
        int operation = cur_token.token;
        advance();
        past right_expression = AddExp();
        left_expression = BinaryOper(operation, left_expression, right_expression);
    }

    return left_expression;
}

past rd_call_paras() {
    past left_expression = AddExp(), temp_expression = left_expression;

    while (cur_token.token == Y_COMMA) {
        advance();
        past right_expression = AddExp();
        left_expression->next = right_expression;
        left_expression = left_expression->next;
    }

    return temp_expression;
}

past rd_stmt() {
    past temp_expression;

    if (cur_token.token == Y_ID) {
        char* identifier = cur_token.attr.svalue;
        advance();

        rd_array_subscripts();
        if (cur_token.token != Y_ASSIGN)
            return NULL;
        advance();

        past left_expression = AddExp();
        if (cur_token.token != Y_SEMICOLON)
            return NULL;
        advance();

        past right_expression = DeclRefExp(identifier, NULL, NULL);

        return BinaryOper(Y_ASSIGN, right_expression, left_expression);
    }
    else if (cur_token.token == Y_SEMICOLON) {
        advance();
        return NULL;
    }
    else if ((temp_expression = AddExp())) {
        if (cur_token.token != Y_SEMICOLON)
            return NULL;
        advance();

        return temp_expression;
    }
    else if (cur_token.token == Y_LBRACKET) {
        advance();
        past block_expression = rd_block();
        if (cur_token.token != Y_RBRACKET)
            return NULL;
        advance();

        return block_expression;
    }
    else if (cur_token.token == Y_WHILE) {
        advance();

        if (cur_token.token != Y_LPAR)
            return NULL;
        advance();

        past condition_expression = LOrExp();
        if (cur_token.token != Y_RPAR)
            return NULL;
        advance();

        past statement_expression = rd_stmt();

        return WhileStmt(condition_expression, statement_expression);
    }
    else if (cur_token.token == Y_IF) {
        advance();
        if (cur_token.token != Y_LPAR)
            return NULL;
        advance();

        past condition_expression = LOrExp();
        if (cur_token.token != Y_RPAR)
            return NULL;
        advance();

        past then_expression = rd_stmt();
        if (cur_token.token != Y_ELSE)
            return IfStmt(condition_expression, then_expression, NULL);
        advance();

        past else_expression = rd_stmt();

        return IfStmt(condition_expression, then_expression, else_expression);
    }
    else if (cur_token.token == Y_BREAK) {
        advance();
        if (cur_token.token != Y_SEMICOLON)
            return NULL;
        advance();

        return BreakStmt();
    }
    else if (cur_token.token == Y_CONTINUE) {
        advance();
        if (cur_token.token != Y_SEMICOLON)
            return NULL;
        advance();

        return ContinueStmt();
    }
    else if (cur_token.token == Y_RETURN) {
        advance();
        past return_expression = AddExp();
        if (cur_token.token != Y_SEMICOLON)
            return NULL;
        advance();

        return ReturnStmt(return_expression, NULL);
    }

    else
        return NULL;
}

past LOrExp() {
    past left_expression = LAndExp();

    while (cur_token.token == Y_OR) {
        advance();
        past right_expression = LAndExp();
        left_expression = BinaryOper(Y_OR, left_expression, right_expression);
    }

    return left_expression;
}

past LAndExp() {
    past left_expression = EqExp();

    while (cur_token.token == Y_AND) {
        advance();
        past right_expression = EqExp();
        left_expression = BinaryOper(Y_AND, left_expression, right_expression);
    }

    return left_expression;
}

past EqExp() {
    past left_expression = rd_relexp();

    while (cur_token.token == Y_EQ || cur_token.token == Y_NOTEQ) {
        int operation = cur_token.token;
        advance();
        past right_expression = rd_relexp();
        left_expression = BinaryOper(operation, left_expression, right_expression);
    }

    return left_expression;
}

past NewPrimaryExp() {
    if (cur_token.token == Y_LPAR) {
        advance();
        past expression = AddExp();
        if (cur_token.token != Y_RPAR)
            return NULL;

        return expression;
    }
    else if (cur_token.token == Y_ID) {
        char* identifier = cur_token.attr.svalue;

        past expression = DeclRefExp(identifier, NULL, NULL);
        advance();
        if (cur_token.token == Y_LPAR)
            rd_array_subscripts();

        return expression;
    }
    else if (cur_token.token == num_INT) {
        past int_expression = newInt(cur_token.attr.ivalue);
        advance();

        return int_expression;
    }
    else if (cur_token.token == num_FLOAT) {
        past float_expression = newAstNode();
        advance();
        float_expression->fvalue = cur_token.attr.fvalue;

        return float_expression;
    }

    else
        return NULL;
}

past NewUnaryExp() {
    past expression = NewPrimaryExp();

    if (expression != NULL)
        return expression;
    else if (cur_token.token == Y_ID) {
        char* identifier = cur_token.attr.svalue;
        advance();

        if (cur_token.token != Y_LPAR)
            return NULL;
        advance();

        if (cur_token.token == Y_RPAR) {
            advance();
            return DeclRefExp(identifier, NULL, NULL);
        }
        else {
            rd_call_paras();
            if (cur_token.token != Y_RPAR)
                return NULL;
            advance();

            return DeclRefExp(identifier, NULL, NULL);
        }
    }
    else if (cur_token.token == Y_ADD) {
        advance();
        past expression = NewUnaryExp();

        return BinaryOper(Y_ADD, NULL, expression);
    }
    else if (cur_token.token == Y_SUB) {
        advance();
        past expression = NewUnaryExp();

        return BinaryOper(Y_SUB, NULL, expression);
    }
    else if (cur_token.token == Y_NOT) {
        advance();
        past expression = NewUnaryExp();

        return BinaryOper(Y_NOT, NULL, expression);
    }
    else
        return NULL;
}

past MulExp() {
    past left_expression = NewUnaryExp();

    while (cur_token.token == Y_MUL || cur_token.token == Y_DIV || cur_token.token == Y_MODULO) {
        int operation = cur_token.token;
        advance();
        past right_expression = NewUnaryExp();
        left_expression = BinaryOper(operation, left_expression, right_expression);
    }

    return left_expression;
}

past AddExp() {
    past left_expression = MulExp();

    while (cur_token.token == Y_ADD || cur_token.token == Y_SUB) {
        int operation = cur_token.token;
        advance();
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
