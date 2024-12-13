#ifndef GENLLVM_H
#define GENLLVM_H

#include "ast.h"

#define ERROR_llvm_CONST_EXPR -1

struct KeyValuePair {
    char* key;
    int value;
};

struct Map {
    struct KeyValuePair* data;
    size_t size;
};

struct Map id_global;
struct Map id_local;

void initializeMap(struct Map* map);
void insertKeyValuePair(struct Map* map, const char* key, int value);
void cleanupMap(struct Map* map);
int getValueFromMap(struct Map* map, const char* key);
int genllvm(ast* root);

//global constant declaration
int GCD_CONST_DECL(ast* pointer);
int GCD_CONST_DEF(ast* pointer);
int GCD_CONST_EXPR(ast* pointer);
//global variable declaration
int GVD_VAR_DECL(ast* pointer);
int GVD_VAR_DEF(ast* pointer);
int GVD_AddExp(ast* pointer);
int GVD_MulExp(ast* pointer);
int GVD_UnaryExp(ast* pointer);
//global function definition
int GFD_FUNC_DEF(ast* pointer);
int GFD_FuncFParams(ast* pointer, int* num);
int GFD_FuncFParam(ast* pointer, int* num);
int GFD_Block(ast* pointer);
int GFD_Block_A(ast* pointer);
int GFD_BlockItem(ast* pointer);
int GFD_CONST_DECL(ast* pointer);
int GFD_CONST_DEF(ast* pointer);
int GFD_CONST_EXPR(ast* pointer);
int GFD_VAR_DECL(ast* pointer);
int GFD_VAR_DEF(ast* pointer);
int GFD_AddExp(ast* pointer);
int GFD_MulExp(ast* pointer);
int GFD_UnaryExp(ast* pointer);
int GFD_FuncRParams(ast* pointer, char* buffer);
int GFD_STMT(ast* pointer);
//function scout
int FS_func_scout(ast* pointer);
int FS_block_a_scout(ast* pointer);
int FS_blockitem_scout(ast* pointer);
int FS_CONST_DECL(ast* pointer);
int FS_CONST_DEF(ast* pointer);
int FS_VAR_DECL(ast* pointer);
int FS_VAR_DEF(ast* pointer);
//expression scout
int ES_AddExp(ast* pointer);
int ES_MulExp(ast* pointer);
int ES_UnaryExp(ast* pointer);

#endif
