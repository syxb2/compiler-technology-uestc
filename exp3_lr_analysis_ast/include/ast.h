#include "node_type.h"

typedef struct _ast ast;
typedef struct _ast* past;

struct _ast {
    int ivalue;
    float fvalue;
    char* svalue;
    node_type nodeType;
    past left;
    past right;
    past if_cond;
    past next;
};

void showAst(past node, int nest, bool use_blank);
void showToken(int Token);
past newNum(int value);
past newExpr(int oper, past left, past right);
