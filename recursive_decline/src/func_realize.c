#include "rdlab2.h"
//? #include "node_type.h"
#include <stdio.h>
#include <stdlib.h>

past rd_init_val();
past rd_init_vals();
past rd_exp();
past rd_add_exp();
past rd_mul_exp();
past rd_unary_exp();
past rd_primary_exp();
past rd_lval();
past rd_block();
past rd_block_items();
past rd_block_item();
past rd_decl();
past rd_const_decl();
past rd_var_decl();
past rd_type();
past rd_const_def();
past rd_const_defs();
past rd_var_decls();
past rd_const_init_var();
past rd_const_init_vars();
past rd_const_exps();
past rd_const_exp();
past rd_var_def();
past rd_lor_exp();
past rd_land_exp();
past rd_eq_exp();
past rd_rel_exp();
past rd_call_paras();
past rd_stmt();
past rd_const_init_val();
past rd_const_init_vals();

// 29 InitVal: Exp
// 30        | Y_LBRACKET Y_RBRACKET
// 31        | Y_LBRACKET InitVal Y_RBRACKET
// 32        | Y_LBRACKET InitVal InitVals Y_RBRACKET
past rd_init_val() {
    past node = newAstNode();

    if (cur_token.token == Y_LBRACKET) {
        advance();
        if (cur_token.token == Y_RBRACKET) {
            node->left = NULL;
            advance();
        }
        else {
            node->left = rd_init_val();
            if (cur_token.token == Y_RBRACKET) {
                advance();
            }
            else {
                node->right = rd_init_vals();
                if (cur_token.token == Y_RBRACKET) {
                    advance();
                }
                else {
                    printf("Error");
                    exit(1);
                }
            }
        }
    }
    else {
        node->left = rd_exp();
    }

    return node;
}

// 33 InitVals: Y_COMMA InitVal
// 34         | Y_COMMA InitVal InitVals
past rd_init_vals() {
    past node = newAstNode();
    node->next = NULL;

    if (cur_token.token == Y_COMMA) {
        advance();
        node->left = rd_init_val();
        if (cur_token.token == Y_COMMA) {
            node->next = rd_init_vals();
        } else {
            node->next = NULL;
        }
    } else {
        printf("Error");
        exit(1);
    }

    return node;
}

// 60 Exp: AddExp
past rd_exp() {
    return rd_add_exp();
}

// 81 AddExp: MulExp
// 82       | AddExp Y_ADD MulExp
// 83       | AddExp Y_SUB MulExp
past rd_add_exp() {
    past node = rd_mul_exp();

    while (cur_token.token == Y_ADD || cur_token.token == Y_SUB) {
        past newNode = newAstNode();
        newNode->left = node;
        advance();
        newNode->right = rd_mul_exp();
        node = newNode;
    }

    return node;
}

// 77 MulExp: UnaryExp
// 78       | MulExp Y_MUL UnaryExp
// 79       | MulExp Y_DIV UnaryExp
// 80       | MulExp Y_MODULO UnaryExp
past rd_mul_exp() {
    past node = rd_unary_exp();

    while (cur_token.token == Y_MUL || cur_token.token == Y_DIV || cur_token.token == Y_MODULO) {
        past newNode = newAstNode();
        newNode->left = node;
        advance();
        newNode->right = rd_unary_exp();
        node = newNode;
    }

    return node;
}

// 69 UnaryExp: PrimaryExp
// 70         | Y_ID Y_LPAR Y_RPAR
// 71         | Y_ID Y_LPAR CallParams Y_RPAR
// 72         | Y_ADD UnaryExp
// 73         | Y_SUB UnaryExp
// 74         | Y_NOT UnaryExp
past rd_unary_exp() {
    past node = NULL;

    if (cur_token.token == Y_ID) {
        node->svalue = cur_token.attr.svalue;
        advance();
        if (cur_token.token == Y_LPAR) {
            advance();
            if (cur_token.token == Y_RPAR) {
                advance();
            } else {
                node = rd_call_paras();
                if (cur_token.token == Y_RPAR) {
                    advance();
                } else {
                    printf("Error");
                    exit(1);
                }
            }
        } else {
            printf("Error");
            exit(1);
        }
    } else if (cur_token.token == Y_ADD || cur_token.token == Y_SUB || cur_token.token == Y_NOT) {
        int op = cur_token.token;
        advance();
        node = newAstNode();
        node->ivalue = op; //? ----------------------------- ?
        node->left = rd_unary_exp();
    } else {
        node = rd_primary_exp();
    }

    return node;
}

// 65 PrimaryExp: Y_LPAR Exp Y_RPAR
// 66           | LVal
// 67           | num_INT
// 68           | num_FLOAT
//* 不重要的符号，如括号，被忽略，不保存
past rd_primary_exp() {
    past node = NULL;

    if (cur_token.token == Y_LPAR) {
        advance();
        node = rd_exp();
        if (cur_token.token == Y_RPAR)
            advance();
        else {
            printf("Error");
            exit(1);
        }
    }
    else if (cur_token.token == Y_ID) {
        node = rd_lval();
    }
    else if (cur_token.token == Y_INT) {
        node = newAstNode();
        node->ivalue = cur_token.attr.ivalue;
        advance();
    }
    else if (cur_token.token == Y_FLOAT) {
        node = newAstNode();
        node->fvalue = cur_token.attr.fvalue;
        advance();
    }
    else {
        printf("Error");
        exit(1);
    }

    return node;
}

// 61 LVal: Y_ID
// 62     | Y_ID ArraySubscripts
past rd_lval() {
    past node = NULL;
    if (cur_token.token == Y_ID) {
        node = newAstNode();
        node->svalue = cur_token.attr.svalue;
        advance();

        // check if has array index
        if (cur_token.token == Y_LBRACKET) {
            node->left = rd_array_subscripts();
        }
    }
    else {
        printf("Error");
        exit(1);
    }

    return node;
}

// // 43 Block: Y_LBRACKET BlockItems Y_RBRACKET
// // 44      | Y_LBRACKET Y_RBRACKET
// past rd_block() {
//     past node = NULL;
//     if (cur_token.token == Y_LBRACKET) {
//         advance();
//         node = newAstNode();
//         if (cur_token.token == Y_RBRACKET) {
//             node->left = NULL; // 空代码块
//             advance();
//         }
//         else {
//             node->left = rd_block_items();
//             if (cur_token.token == Y_RBRACKET) {
//                 advance();
//             }
//             else {
//                 printf("Error");
//                 exit(1);
//             }
//         }
//     }
//     else {
//         printf("Error");
//         exit(1);
//     }

//     return node;
// }

// 45 BlockItems: BlockItem
// 46           | BlockItem BlockItems
past rd_block_items() {
    past node = rd_block_item();
    if (cur_token.token != Y_RBRACKET) {
        node->left = rd_block_items();
    }

    return node;
}

// 47 BlockItem: Decl
// 48          | Stmt
past rd_block_item() {
    past node = NULL;

    if (cur_token.token == Y_CONST || cur_token.token == Y_INT || cur_token.token == Y_FLOAT || cur_token.token == Y_VOID)
        node = rd_decl();
    else
        node = rd_stmt();

    return node;
}

// 5 Decl: ConstDecl
// 6     | VarDecl
past rd_decl() {
    past node = NULL;

    if (cur_token.token == Y_CONST)
        node = rd_const_decl();
    else
        node = rd_var_decl();

    return node;
}

// 7 ConstDecl: Y_CONST Type ConstDef Y_SEMICOLON
// 8          | Y_CONST Type ConstDefs Y_SEMICOLON
past rd_const_decl() {
    past node = newAstNode();

    if (cur_token.token == Y_CONST) {
        advance();
        node->left = rd_type();
        node->right = rd_const_def();
        if (cur_token.token == Y_SEMICOLON) {
            advance();
        } else {
            node->next = rd_const_defs();
            if (cur_token.token == Y_SEMICOLON) {
                advance();
            } else {
                printf("Error");
                exit(1);
            }
        }
    } else {
        printf("Error");
        exit(1);
    }

    return node;
}

// 21 VarDecl: Type VarDef Y_SEMICOLON
// 22        | Type VarDef VarDecls Y_SEMICOLON
past rd_var_decl() {
    past node = newAstNode();

    node->left = rd_type();
    node->right = rd_var_def();

    if (cur_token.token == Y_SEMICOLON) {
        advance();
    }
    else {
        node->next = rd_var_decls();
        if (cur_token.token == Y_SEMICOLON) {
            advance();
        }
        else {
            printf("Error");
            exit(1);
        }
    }

    return node;
}

// 97 Type: Y_INT
// 98     | Y_FLOAT
// 99     | Y_VOID
past rd_type() {
    past node = NULL;

    if (cur_token.token == Y_INT || cur_token.token == Y_FLOAT || cur_token.token == Y_VOID) {
        advance();
    }
    else {
        printf("Error");
        exit(1);
    }

    return node;
}

// 11 ConstDef: Y_ID Y_ASSIGN ConstInitVal
// 12         | Y_ID ConstExps Y_ASSIGN ConstInitVal
past rd_const_def() {
    past node = newAstNode();

    if (cur_token.token == Y_ID) {
        node->svalue = cur_token.attr.svalue;
        advance();
        if (cur_token.token == Y_ASSIGN) {
            advance();
            node->left = rd_const_init_var();
        }
        else {
            node->left = rd_const_exps();
            if (cur_token.token == Y_ASSIGN) {
                advance();
                node->right = rd_const_init_var();
            }
            else {
                printf("Error");
                exit(1);
            }
        }
    }
    else {
        printf("Error");
        exit(1);
    }

    return node;
}

//  9 ConstDefs: ConstDef Y_COMMA ConstDef
// 10          | ConstDefs Y_COMMA ConstDef
past rd_const_defs() {
    past node = newAstNode();
    node->next = NULL;

    if (cur_token.token == Y_COMMA) {
        advance();
        node->left = rd_const_def();

        if (cur_token.token == Y_COMMA) {
            node->next = rd_const_defs();
        }
    } else {
        printf("Error");
        exit(1);
    }

    return node;
}

// 23 VarDecls: Y_COMMA VarDef
// 24         | Y_COMMA VarDef VarDecls
past rd_var_decls() {
    past node = newAstNode();
    if (cur_token.token == Y_COMMA) {
        advance();
        node->left = rd_var_def();
        if (cur_token.token == Y_INT || cur_token.token == Y_FLOAT || cur_token.token == Y_VOID) {
            node->right = rd_var_decls();
        }
    }
    else {
        printf("Error");
        exit(1);
    }

    return node;
}

// 15 ConstInitVal: ConstExp
// 16             | Y_LBRACKET Y_RBRACKET
// 17             | Y_LBRACKET ConstInitVal Y_RBRACKET
// 18             | Y_LBRACKET ConstInitVal ConstInitVals Y_RBRACKET
past rd_const_init_var() {
    past node = NULL;

    if (cur_token.token == Y_LBRACKET) {
        advance();
        if (cur_token.token == Y_RBRACKET) {
            advance();
        }
        else {
            node = rd_const_init_val();
            if (cur_token.token == Y_RBRACKET) {
                advance();
            }
            else {
                node->right = rd_const_init_vals();
                if (cur_token.token == Y_RBRACKET) {
                    advance();
                }
                else {
                    printf("Error");
                    exit(1);
                }
            }
        }
    }
    else {
        return rd_const_exp();
    }

    return node;
}

// 19 ConstInitVals: Y_COMMA ConstInitVal
// 20              | Y_COMMA ConstInitVal ConstInitVals
past rd_const_init_vars() {
    past node = newAstNode();

    node->next = NULL;
    if (cur_token.token == Y_COMMA) {
        advance();
        node->left = rd_const_init_val();

        if (cur_token.token == Y_COMMA)
            node->right = rd_const_init_vals();
    }
    else {
        printf("Error");
        exit(1);
    }

    return node;
}

// 15 ConstInitVal: ConstExp
// 16             | Y_LBRACKET Y_RBRACKET
// 17             | Y_LBRACKET ConstInitVal Y_RBRACKET
// 18             | Y_LBRACKET ConstInitVal ConstInitVals Y_RBRACKET
past rd_const_init_val() {
    past node = newAstNode();

    if (cur_token.token == Y_LBRACKET) {
        advance();
        if (cur_token.token == Y_RBRACKET) {
            advance();
        } else {
            node->left = rd_const_init_val();
            if (cur_token.token == Y_RBRACKET) {
                advance();
            } else {
                node->right = rd_const_init_vals();
                if (cur_token.token == Y_RBRACKET) {
                    advance();
                } else {
                    printf("Error");
                    exit(1);
                }
            }
        }
    } else {
        node = rd_const_exp();
    }

    return node;
}

// 19 ConstInitVals: Y_COMMA ConstInitVal
// 20              | Y_COMMA ConstInitVal ConstInitVals
past rd_const_init_vals() {
    past node = newAstNode();
    node->next = NULL;

    if (cur_token.token == Y_COMMA) {
        advance();
        node->left = rd_const_init_val();
        if (cur_token.token == Y_COMMA) {
            node->next = rd_const_init_vals();
        }
    } else {
        printf("Error");
        exit(1);
    }

    return node;
}

// 13 ConstExps: Y_LSQUARE ConstExp Y_RSQUARE
// 14          | Y_LSQUARE ConstExp Y_RSQUARE ConstExps
past rd_const_exps() {
    past node = newAstNode();

    if (cur_token.token == Y_LSQUARE) {
        advance();
        node->left = rd_const_exp();
        if (cur_token.token == Y_RSQUARE) {
            advance();
            if (cur_token.token == Y_LSQUARE) {
                node->right = rd_const_exps();
            }
        } else {
            printf("Error");
            exit(1);
        }
    } else {
        printf("Error");
        exit(1);
    }

    return node;
}

// 96 ConstExp: AddExp
past rd_const_exp() {
    return rd_add_exp();
}

// 25 VarDef: Y_ID
// 26       | Y_ID Y_ASSIGN InitVal
// 27       | Y_ID ConstExps
// 28       | Y_ID ConstExps Y_ASSIGN InitVal
past rd_var_def() {
    past node = newAstNode();

    if (cur_token.token == Y_ID) {
        node->svalue = cur_token.attr.svalue;
        advance();
        if (cur_token.token == Y_ASSIGN) {
            advance();
            node->left = rd_init_val();
        } else if (cur_token.token == Y_LSQUARE) {
            node->left = rd_const_exps();
            if (cur_token.token == Y_ASSIGN) {
                advance();
                node->right = rd_init_val();
            }
        }
    } else {
        printf("Error");
        exit(1);
    }

    return node;
}

// 94 LOrExp: LAndExp
// 95       | LAndExp Y_OR LOrExp
past rd_lor_exp() {
    past node = rd_land_exp();

    while (cur_token.token == Y_OR) {
        past newNode = newAstNode();
        newNode->left = node;
        advance();
        newNode->right = rd_land_exp();
        node = newNode;
    }

    return node;
}

// 92 LAndExp: EqExp
// 93        | EqExp Y_AND LAndExp
past rd_land_exp() {
    past node = rd_eq_exp();

    while (cur_token.token == Y_AND) {
        past newNode = newAstNode();
        newNode->left = node;
        advance();
        newNode->right = rd_eq_exp();
        node = newNode;
    }

    return node;
}

// 89 EqExp: RelExp
// 90      | RelExp Y_EQ EqExp
// 91      | RelExp Y_NOTEQ EqExp
past rd_eq_exp() {
    past node = rd_rel_exp();

    while (cur_token.token == Y_EQ || cur_token.token == Y_NOTEQ) {
        past newNode = newAstNode();
        newNode->left = node;
        advance();
        newNode->right = rd_rel_exp();
        node = newNode;
    }

    return node;
}

// 84 RelExp: AddExp
// 85       | AddExp Y_LESS RelExp
// 86       | AddExp Y_GREAT RelExp
// 87       | AddExp Y_LESSEQ RelExp
// 88       | AddExp Y_GREATEQ RelExp
past rd_rel_exp() {
    past node = rd_add_exp();

    while (cur_token.token == Y_LESS || cur_token.token == Y_GREAT || cur_token.token == Y_LESSEQ || cur_token.token == Y_GREATEQ) {
        past newNode = newAstNode();
        newNode->left = node;
        advance();
        newNode->right = rd_add_exp();
        node = newNode;
    }

    return node;
}

// 75 CallParams: Exp
// 76           | Exp Y_COMMA CallParams
past rd_call_paras() {
    past node = rd_exp();

    if (cur_token.token == Y_COMMA) {
        advance();
        node->next = rd_call_paras();
    }

    return node;
}

// 84 RelExp: AddExp
// 85       | AddExp Y_LESS RelExp
// 86       | AddExp Y_GREAT RelExp
// 87       | AddExp Y_LESSEQ RelExp
// 88       | AddExp Y_GREATEQ RelExp
past rd_relexp() {
    past node = rd_add_exp();

    while (cur_token.token == Y_LESS || cur_token.token == Y_GREAT || cur_token.token == Y_LESSEQ || cur_token.token == Y_GREATEQ) {
        past newNode = newAstNode();
        newNode->left = node;
        advance();
        newNode->right = rd_add_exp();
        node = newNode;
    }

    return node;
}

// 49 Stmt: LVal Y_ASSIGN Exp Y_SEMICOLON
// 50     | Y_SEMICOLON
// 51     | Exp Y_SEMICOLON
// 52     | Block
// 53     | Y_WHILE Y_LPAR LOrExp Y_RPAR Stmt
// 54     | Y_IF Y_LPAR LOrExp Y_RPAR Stmt
// 55     | Y_IF Y_LPAR LOrExp Y_RPAR Stmt Y_ELSE Stmt
// 56     | Y_BREAK Y_SEMICOLON
// 57     | Y_CONTINUE Y_SEMICOLON
// 58     | Y_RETURN Exp Y_SEMICOLON
// 59     | Y_RETURN Y_SEMICOLON
past rd_stmt() {
    past node = NULL;

    if (cur_token.token == Y_ID) {
        node = rd_lval();
        if (cur_token.token == Y_ASSIGN) {
            advance();
            node->right = rd_exp();
            if (cur_token.token == Y_SEMICOLON) {
                advance();
            } else {
                printf("Error");
                exit(1);
            }
        } else {
            printf("Error");
            exit(1);
        }
    } else if (cur_token.token == Y_SEMICOLON) {
        advance();
    } else if (cur_token.token == Y_WHILE) {
        advance();
        if (cur_token.token == Y_LPAR) {
            advance();
            node = newAstNode();
            node->left = rd_lor_exp();
            if (cur_token.token == Y_RPAR) {
                advance();
                node->right = rd_stmt();
            } else {
                printf("Error");
                exit(1);
            }
        } else {
            printf("Error");
            exit(1);
        }
    } else if (cur_token.token == Y_IF) {
        advance();
        if (cur_token.token == Y_LPAR) {
            advance();
            node = newAstNode();
            node->left = rd_lor_exp();
            if (cur_token.token == Y_RPAR) {
                advance();
                node->right = rd_stmt();
                if (cur_token.token == Y_ELSE) {
                    advance();
                    node->next = rd_stmt();
                }
            } else {
                printf("Error");
                exit(1);
            }
        } else {
            printf("Error");
            exit(1);
        }
    } else if (cur_token.token == Y_BREAK || cur_token.token == Y_CONTINUE) {
        advance();
        if (cur_token.token == Y_SEMICOLON) {
            advance();
        } else {
            printf("Error");
            exit(1);
        }
    } else if (cur_token.token == Y_RETURN) {
        advance();
        if (cur_token.token == Y_SEMICOLON) {
            advance();
        } else {
            node = rd_exp();
            if (cur_token.token == Y_SEMICOLON) {
                advance();
            } else {
                printf("Error");
                exit(1);
            }
        }
    } else {
        node = rd_exp();
        if (cur_token.token == Y_SEMICOLON) {
            advance();
        } else {
            printf("Error");
            exit(1);
        }
    }

    return node;
}

