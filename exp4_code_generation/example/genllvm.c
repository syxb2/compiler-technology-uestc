#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "genllvm.h"

int scout;

/**
 * 初始化Map结构，将数据指针设为NULL，大小设为0
 */
void initializeMap(struct Map* map) {
    map->data = NULL;
    map->size = 0;
}

/**
 * 向Map中插入键值对，动态分配内存
 */
void insertKeyValuePair(struct Map* map, const char* key, int value) {
    map->data = realloc(map->data, (map->size + 1) * sizeof(struct KeyValuePair));
    map->data[map->size].key = strdup(key);
    map->data[map->size].value = value;
    map->size++;
}

/**
 * 清理Map结构，释放所有分配的内存
 */
void cleanupMap(struct Map* map) {
    for (size_t i = 0; i < map->size; ++i) {
        free(map->data[i].key);
    }
    free(map->data);
    map->data = NULL;
    map->size = 0;
}

/**
 * 从Map中获取指定key对应的索引值
 * 返回: 找到则返回索引，否则返回-1
 */
int getValueFromMap(struct Map* map, const char* key) {
    for (size_t i = 0; i < map->size; ++i) {
        if (strcmp(map->data[i].key, key) == 0) {
            return i;
        }
    }
    return -1;
}

/**
 * 主要的LLVM IR生成函数，处理AST的根节点
 */
int genllvm(ast* root) {
    ast* cruiser = root;
    while (cruiser != NULL) {
        if (strcmp(cruiser->nodeType, "COMP_UNIT") == 0) {
            if (strcmp(cruiser->right->nodeType, "CONST_DECL") == 0) {
                GCD_CONST_DECL(cruiser->right);
            }
            else

                if (strcmp(cruiser->right->nodeType, "VAR_DECL") == 0) {
                    GVD_VAR_DECL(cruiser->right);
                }
                else

                    if (strcmp(cruiser->right->nodeType, "FUNC_DEF") == 0) {
                        GFD_FUNC_DEF(cruiser->right);
                    }
        }
        else {
            printf("DO NOT DETECT COMP_UNIT\n");
            exit(0);
        }
        cruiser = cruiser->next;
    }
    return 0;
}

/**
 * 处理常量声明节点
 */
int GCD_CONST_DECL(ast* pointer) {
    GCD_CONST_DEF(pointer->right);
    if (pointer->next != NULL) {
        GCD_CONST_DECL(pointer->next);
    }
    return 0;
}

/**
 * 处理常量定义节点，生成全局常量定义的LLVM IR
 */
int GCD_CONST_DEF(ast* pointer) {
    int value = GCD_CONST_EXPR(pointer->right->right);
    printf("@%s = constant i32 %d, align 4\n", pointer->svalue, value);

    // 使用之前定义的 Map 结构体
    char* temp = strdup(pointer->svalue);  // 复制字符串
    insertKeyValuePair(&id_global, temp, value);
    return 0;
}

/**
 * 计算常量表达式的值
 */
int GCD_CONST_EXPR(ast* pointer) {
    if (strcmp(pointer->nodeType, "DECIMAL") == 0) {
        return pointer->ivalue;
    }
    else if (strcmp(pointer->nodeType, "EXPR") == 0 || strcmp(pointer->nodeType, "EXPR_MUL") == 0) {
        switch (pointer->ivalue) {
            case '+':
                return GCD_CONST_EXPR(pointer->left) + GCD_CONST_EXPR(pointer->right);
            case '-':
                return GCD_CONST_EXPR(pointer->left) - GCD_CONST_EXPR(pointer->right);
            case '*':
                return GCD_CONST_EXPR(pointer->left) * GCD_CONST_EXPR(pointer->right);
            case '/':
                return GCD_CONST_EXPR(pointer->left) / GCD_CONST_EXPR(pointer->right);
            case '%':
                return GCD_CONST_EXPR(pointer->left) % GCD_CONST_EXPR(pointer->right);
        }
    }
    else if (strcmp(pointer->nodeType, "EXP_WITH_UNARY_OP") == 0) {
        switch (pointer->left->ivalue) {
            case '+':
                return GCD_CONST_EXPR(pointer->right);
            case '-':
                return -GCD_CONST_EXPR(pointer->right);
            case '!':
                if (GCD_CONST_EXPR(pointer->right) == 0) {
                    return 1;
                }
                else {
                    return 0;
                }
        }
    }
    return ERROR_llvm_CONST_EXPR;
}

/**
 * 处理变量声明节点
 */
int GVD_VAR_DECL(ast* pointer) {
    GVD_VAR_DEF(pointer->right);
    if (pointer->next != NULL) {
        GVD_VAR_DECL(pointer->next);
    }
    return 0;
}

/**
 * 处理变量定义节点，生成全局变量定义的LLVM IR
 */
int GVD_VAR_DEF(ast* pointer) {
    if (pointer->right == NULL) {
        printf("@%s = common global i32 0, align 4\n", pointer->svalue);
        char* temp = strdup(pointer->svalue);
        insertKeyValuePair(&id_global, temp, 0);
    }
    else {
        int value = GVD_AddExp(pointer->right->right);
        printf("@%s = global i32 %d, align 4\n", pointer->svalue, value);
        char* temp = strdup(pointer->svalue);
        insertKeyValuePair(&id_global, temp, value);
    }
    return 0;
}

/**
 * 处理加减法表达式节点
 */
int GVD_AddExp(ast* pointer) {
    if (strcmp(pointer->nodeType, "EXPR") == 0) {
        if (pointer->ivalue == '+') {
            return GVD_AddExp(pointer->left) + GVD_MulExp(pointer->right);
        }
        else if (pointer->ivalue == '-') {
            return GVD_AddExp(pointer->left) - GVD_MulExp(pointer->right);
        }
    }
    else {
        return GVD_MulExp(pointer);
    }
}

/**
 * 处理乘除法表达式节点
 */
int GVD_MulExp(ast* pointer) {
    if (strcmp(pointer->nodeType, "EXPR_MUL") == 0) {
        if (pointer->ivalue == '*') {
            return GVD_MulExp(pointer->left) * GVD_UnaryExp(pointer->right);
        }
        else if (pointer->ivalue == '/') {
            return GVD_MulExp(pointer->left) / GVD_UnaryExp(pointer->right);
        }
        else if (pointer->ivalue == '%') {
            return GVD_MulExp(pointer->left) % GVD_UnaryExp(pointer->right);
        }
    }
    else {
        return GVD_UnaryExp(pointer);
    }
}

/**
 * 处理一元表达式节点
 */
int GVD_UnaryExp(ast* pointer) {
    if (strcmp(pointer->nodeType, "EXP_WITH_UNARY_OP") == 0) {
        switch (pointer->left->ivalue) {
            case '+':
                return GVD_UnaryExp(pointer->right);
            case '-':
                return -GVD_UnaryExp(pointer->right);
            case '!':
                if (GVD_UnaryExp(pointer->right) == 0) {
                    return 1;
                }
                else {
                    return 0;
                }
        }
    }
    else if (strcmp(pointer->nodeType, "FUNC_CALL_ID") == 0) {
        printf("error: initializer element is not a compile-time constant\n");
        exit(-1);
    }
    else {
        if (strcmp(pointer->nodeType, "EXPR") == 0) {
            return GVD_AddExp(pointer);
        }
        else if (strcmp(pointer->nodeType, "IDENTIFIER") == 0) {
            char* temp = strdup(pointer->svalue);
            for (size_t i = 0; i < id_global.size; ++i) {
                if (strcmp(id_global.data[i].key, temp) == 0) {
                    return id_global.data[i].value;
                }
            }
            printf("error: initializer element is not a compile-time constant\n");
            exit(-1);
        }
        else if (strcmp(pointer->nodeType, "DECIMAL") == 0) {
            return pointer->ivalue;
        }
    }
}

/**
 * 处理函数定义节点，生成函数定义的LLVM IR
 */
int GFD_FUNC_DEF(ast* pointer) {
    if (strcmp(pointer->svalue, "int") == 0) {
        printf("define i32 @" "%s(", pointer->svalue);
    }
    else if (strcmp(pointer->svalue, "void") == 0) {
        printf("define void @" "%s(", pointer->svalue);
    }

    initializeMap(&id_local);  // 初始化 id_local 映射
    int num = 0;
    if (pointer->left != NULL) {
        GFD_FuncFParams(pointer->left, &num);
    }

    // 更新 id_local 中的值
    for (size_t i = 0; i < id_local.size; ++i) {
        id_local.data[i].value += num + 1;
    }

    scout = num * 2 + 1;
    FS_func_scout(pointer->right);  // 假设 FS_func_scout 函数已定义
    printf(") #0 {\n");

    int count = num;
    for (int i = 0; i < id_local.size; i++) {
        printf("  %%%d = alloca i32, align 4\n", ++count);
    }
    count = num;
    for (int i = 0; i < num; i++) {
        printf("  store i32 %d, i32* %d, align 4\n", i, ++count);
    }

    GFD_Block(pointer->right);

    if (strcmp(pointer->svalue, "void") == 0) {
        printf("  ret void\n}\n");
    }
    else {
        printf("}\n");
    }
    return 0;
}

/**
 * 处理函数参数列表
 */
int GFD_FuncFParams(ast* pointer, int* num) {
    GFD_FuncFParam(pointer->right, num);
    (*num)++;
    if (pointer->next != NULL) {
        GFD_FuncFParams(pointer->next, num);
    }
    return 0;
}

/**
 * 处理单个函数参数
 */
int GFD_FuncFParam(ast* pointer, int* num) {
    if (*num > 0) {
        printf(", ");
    }
    if (pointer->left == NULL) {
        printf("i32 %%%d", *num);
        char* temp = strdup(pointer->svalue);  // 复制字符串
        insertKeyValuePair(&id_local, temp, *num);
    }
    else {
     // 处理数组情况
    }
    return 0;
}

/**
 * 扫描函数体进行预处理
 */
int FS_func_scout(ast* pointer) {
    if (pointer->right != NULL) {
        FS_block_a_scout(pointer->right);
    }
    return 0;
}

/**
 * 扫描代码块进行预处理
 */
int FS_block_a_scout(ast* pointer) {
    FS_blockitem_scout(pointer->right);
    if (pointer->next != NULL) {
        FS_block_a_scout(pointer->next);
    }
    return 0;
}

/**
 * 扫描代码块项进行预处理
 */
int FS_blockitem_scout(ast* pointer) {
    if (strcmp(pointer->nodeType, "CONST_DECL") == 0) {
        FS_CONST_DECL(pointer);
    }
    else if (strcmp(pointer->nodeType, "VAR_DECL") == 0) {
        FS_VAR_DECL(pointer);
    }
    else {
        return 0;
    }
}

/**
 * 扫描常量声明进行预处理
 */
int FS_CONST_DECL(ast* pointer) {
    FS_CONST_DEF(pointer->right);
    if (pointer->next != NULL) {
        FS_CONST_DECL(pointer->next);
    }
    return 0;
}

/**
 * 扫描常量定义进行预处理
 */
int FS_CONST_DEF(ast* pointer) {
    char* temp = strdup(pointer->svalue);  // 复制字符串
    insertKeyValuePair(&id_local, temp, scout++);
    return 0;
}

/**
 * 扫描变量声明进行预处理
 */
int FS_VAR_DECL(ast* pointer) {
    FS_VAR_DEF(pointer->right);
    if (pointer->next != NULL) {
        FS_VAR_DECL(pointer->next);
    }
    return 0;
}

/**
 * 扫描变量定义进行预处理
 */
int FS_VAR_DEF(ast* pointer) {
    char* temp = strdup(pointer->svalue);  // 复制字符串
    insertKeyValuePair(&id_local, temp, scout++);
    return 0;
}

/**
 * 生成函数体的LLVM IR
 */
int GFD_Block(ast* pointer) {
    if (pointer->right != NULL) {
        GFD_Block_A(pointer->right);
    }
    return 0;
}

/**
 * 生成代码块的LLVM IR
 */
int GFD_Block_A(ast* pointer) {
    GFD_BlockItem(pointer->right);
    if (pointer->next != NULL) {
        GFD_Block_A(pointer->next);
    }
    return 0;
}

/**
 * 生成代码块项的LLVM IR
 */
int GFD_BlockItem(ast* pointer) {
    if (strcmp(pointer->nodeType, "CONST_DECL") == 0) {
        GFD_CONST_DECL(pointer);
    }
    else if (strcmp(pointer->nodeType, "VAR_DECL") == 0) {
        GFD_VAR_DECL(pointer);
    }
    else if (strcmp(pointer->nodeType, "STMT") == 0) {
        GFD_STMT(pointer);
    }
}

/**
 * 处理常量声明节点
 */
int GFD_CONST_DECL(ast* pointer) {
    GFD_CONST_DEF(pointer->right);
    if (pointer->next != NULL) {
        GFD_CONST_DECL(pointer->next);
    }
    return 0;
}

/**
 * 处理常量定义节点
 */
int GFD_CONST_DEF(ast* pointer) {
    if (pointer->left == NULL) {
        int index = getValueFromMap(&id_local, pointer->svalue);
        printf("  store i32 %d, i32* %%%d, align 4\n", GFD_CONST_EXPR(pointer->right->right), index);
    }
    else {
     // 处理数组情况
    }
    return 0;
}

/**
 * 计算常量表达式的值
 */
int GFD_CONST_EXPR(ast* pointer) {
    if (strcmp(pointer->nodeType, "DECIMAL") == 0) {
        return pointer->ivalue;
    }
    else if (strcmp(pointer->nodeType, "EXPR") == 0 || strcmp(pointer->nodeType, "EXPR_MUL") == 0) {
        switch (pointer->ivalue) {
            case '+':
                return GFD_CONST_EXPR(pointer->left) + GFD_CONST_EXPR(pointer->right);
            case '-':
                return GFD_CONST_EXPR(pointer->left) - GFD_CONST_EXPR(pointer->right);
            case '*':
                return GFD_CONST_EXPR(pointer->left) * GFD_CONST_EXPR(pointer->right);
            case '/':
                return GFD_CONST_EXPR(pointer->left) / GFD_CONST_EXPR(pointer->right);
            case '%':
                return GFD_CONST_EXPR(pointer->left) % GFD_CONST_EXPR(pointer->right);
        }
    }
    else if (strcmp(pointer->nodeType, "EXP_WITH_UNARY_OP") == 0) {
        switch (pointer->left->ivalue) {
            case '+':
                return GFD_CONST_EXPR(pointer->right);
            case '-':
                return -GFD_CONST_EXPR(pointer->right);
            case '!':
                return GFD_CONST_EXPR(pointer->right) == 0 ? 1 : 0;
        }
    }
    return ERROR_llvm_CONST_EXPR;
}

/**
 * 检查表达式中是否包含标识符或函数调用
 */
int ES_AddExp(ast* pointer) {  // 检查表达式中是否存在标识符或函数调用
    if (strcmp(pointer->nodeType, "EXPR") == 0) {
        return ES_AddExp(pointer->left) + ES_MulExp(pointer->right);
    }
    else {
        return ES_MulExp(pointer);
    }
}

/**
 * 检查乘除法表达式中是否包含标识符或函数调用
 */
int ES_MulExp(ast* pointer) {
    if (strcmp(pointer->nodeType, "EXPR_MUL") == 0) {
        return ES_MulExp(pointer->left) + ES_UnaryExp(pointer->right);
    }
    else {
        return ES_UnaryExp(pointer);
    }
}

/**
 * 检查一元表达式中是否包含标识符或函数调用
 */
int ES_UnaryExp(ast* pointer) {
    if (strcmp(pointer->nodeType, "EXP_WITH_UNARY_OP") == 0) {
        return ES_UnaryExp(pointer->right);
    }
    else if (strcmp(pointer->nodeType, "FUNC_CALL_ID") == 0) {
        return 1;  // 表示存在函数调用
    }
    else {
        if (strcmp(pointer->nodeType, "EXPR") == 0) {
            return ES_AddExp(pointer);
        }
        else if (strcmp(pointer->nodeType, "IDENTIFIER") == 0) {
            return 1;  // 表示存在标识符
        }
        else if (strcmp(pointer->nodeType, "DECIMAL") == 0) {
            return 0;  // 表示没有标识符或函数调用
        }
    }
    return 0;  // 默认情况下没有标识符或函数调用
}

/**
 * 生成局部变量声明的LLVM IR
 */
int GFD_VAR_DECL(ast* pointer) {
    GFD_VAR_DEF(pointer->right);
    if (pointer->next != NULL) {
        GFD_VAR_DECL(pointer->next);
    }
    return 0;
}

/**
 * 生成局部变量定义的LLVM IR
 */
int GFD_VAR_DEF(ast* pointer) {
    if (pointer->left == NULL && pointer->right != NULL) { // 非数组且有初始化式
        // 获取变量名
        int index = getValueFromMap(&id_local, pointer->svalue);

        if (ES_AddExp(pointer->right->right)) { // 初始化式非简单常量表达式
            GFD_AddExp(pointer->right->right);  // 生成初始化代码
            printf("  store i32 %d, i32* %%%d, align 4\n", scout - 1, index);
        }
        else { // 初始化式为简单常量表达式
            printf("  store i32 %d, i32* %%%d, align 4\n", GFD_CONST_EXPR(pointer->right->right), index);
        }
    }
    else {
     // 处理数组情况（代码未提供）
    }
    return 0;
}

/**
 * 生成加减法表达式的LLVM IR
 */
int GFD_AddExp(ast* pointer) {
    if (strcmp(pointer->nodeType, "EXPR") == 0) {
        if (pointer->ivalue == '+') {
            int scout_record = scout;
            int num1 = GFD_AddExp(pointer->left);
            if (scout_record == scout) {
                scout_record = scout;
                int num2 = GFD_MulExp(pointer->right);
                if (scout_record == scout) {
                    return num1 + num2;  // 可直接计算结果
                }
                else {
                    printf("  %%%d = add nsw i32 %d, %%%d\n", scout, num1, scout - 1);
                    scout++;
                }
            }
            else {
                scout_record = scout;
                int num2 = GFD_MulExp(pointer->right);
                if (scout_record == scout) {
                    printf("  %%%d = add nsw i32 %%%d, %d\n", scout, scout - 1, num2);
                    scout++;
                }
                else {
                    printf("  %%%d = add nsw i32 %%%d, %%%d\n", scout, scout - 2, scout - 1);
                    scout++;
                }
            }
        }
        else if (pointer->ivalue == '-') {
            int scout_record = scout;
            int num1 = GFD_AddExp(pointer->left);
            if (scout_record == scout) {
                scout_record = scout;
                int num2 = GFD_MulExp(pointer->right);
                if (scout_record == scout) {
                    return num1 - num2;  // 可直接计算结果
                }
                else {
                    printf("  %%%d = sub nsw i32 %d, %%%d\n", scout, num1, scout - 1);
                    scout++;
                }
            }
            else {
                scout_record = scout;
                int num2 = GFD_MulExp(pointer->right);
                if (scout_record == scout) {
                    printf("  %%%d = sub nsw i32 %%%d, %d\n", scout, scout - 1, num2);
                    scout++;
                }
                else {
                    printf("  %%%d = sub nsw i32 %%%d, %%%d\n", scout, scout - 2, scout - 1);
                    scout++;
                }
            }
        }
    }
    else {
        return GFD_MulExp(pointer);
    }
}

/**
 * 生成乘除法表达式的LLVM IR
 */
int GFD_MulExp(ast* pointer) {
    if (strcmp(pointer->nodeType, "EXPR_MUL") == 0) {
        if (pointer->ivalue == '*') {
            int scout_record = scout;
            int num1 = GFD_MulExp(pointer->left);
            if (scout_record == scout) {
                scout_record = scout;
                int num2 = GFD_UnaryExp(pointer->right);
                if (scout_record == scout) {
                    return num1 * num2;  // 可直接计算结果
                }
                else {
                    printf("  %%%d = mul nsw i32 %d, %%%d\n", scout, num1, scout - 1);
                    scout++;
                }
            }
            else {
                scout_record = scout;
                int num2 = GFD_UnaryExp(pointer->right);
                if (scout_record == scout) {
                    printf("  %%%d = mul nsw i32 %%%d, %d\n", scout, scout - 1, num2);
                    scout++;
                }
                else {
                    printf("  %%%d = mul nsw i32 %%%d, %%%d\n", scout, scout - 2, scout - 1);
                    scout++;
                }
            }
        }
        else if (pointer->ivalue == '/') {
            int scout_record = scout;
            int num1 = GFD_MulExp(pointer->left);
            if (scout_record == scout) {
                scout_record = scout;
                int num2 = GFD_UnaryExp(pointer->right);
                if (scout_record == scout) {
                    return num1 / num2;  // 可直接计算结果
                }
                else {
                    printf("  %%%d = sdiv i32 %d, %%%d\n", scout, num1, scout - 1);
                    scout++;
                }
            }
            else {
                scout_record = scout;
                int num2 = GFD_UnaryExp(pointer->right);
                if (scout_record == scout) {
                    printf("  %%%d = sdiv i32 %%%d, %d\n", scout, scout - 1, num2);
                    scout++;
                }
                else {
                    printf("  %%%d = sdiv i32 %%%d, %%%d\n", scout, scout - 2, scout - 1);
                    scout++;
                }
            }
        }
        else if (pointer->ivalue == '%') {
            int scout_record = scout;
            int num1 = GFD_MulExp(pointer->left);
            if (scout_record == scout) {
                scout_record = scout;
                int num2 = GFD_UnaryExp(pointer->right);
                if (scout_record == scout) {
                    return num1 % num2;  // 可直接计算结果
                }
                else {
                    printf("  %%%d = srem i32 %d, %%%d\n", scout, num1, scout - 1);
                    scout++;
                }
            }
            else {
                scout_record = scout;
                int num2 = GFD_UnaryExp(pointer->right);
                if (scout_record == scout) {
                    printf("  %%%d = srem i32 %%%d, %d\n", scout, scout - 1, num2);
                    scout++;
                }
                else {
                    printf("  %%%d = srem i32 %%%d, %%%d\n", scout, scout - 2, scout - 1);
                    scout++;
                }
            }
        }
    }
    else {
        return GFD_UnaryExp(pointer);
    }
}

char buffer[1024] = { 0 };  // 初始化为空字符串

/**
 * 生成一元表达式的LLVM IR
 */
int GFD_UnaryExp(ast* pointer) {
    if (strcmp(pointer->nodeType, "EXP_WITH_UNARY_OP") == 0) {
        switch (pointer->left->ivalue) {
            case '+':
                return GFD_UnaryExp(pointer->right);
            case '-':
                return -GFD_UnaryExp(pointer->right);
            case '!':
                return GFD_UnaryExp(pointer->right) == 0 ? 1 : 0;
        }
    }
    else if (strcmp(pointer->nodeType, "FUNC_CALL_ID") == 0) {
        if (pointer->right != NULL) {
            int scout_record = scout;
            buffer[0] = '\0';  // 清空 buffer
            GFD_FuncRParams(pointer->right, buffer);
            printf("  %%%d = call i32 @%s(%s)\n", scout++, pointer->svalue, buffer);
        }
        else {
            printf("  %%%d = call i32 @%s()\n", scout++, pointer->svalue);
        }
    }
    else {
        if (strcmp(pointer->nodeType, "EXPR") == 0) {
            return GFD_AddExp(pointer);
        }
        else if (strcmp(pointer->nodeType, "IDENTIFIER") == 0) {
            char* temp = pointer->svalue;
            if (getValueFromMap(&id_global, temp) != -1) {
                printf("  %%%d = load i32, i32* @%s, align 4\n", scout++, temp);
            }
            else if (getValueFromMap(&id_local, temp) != -1) {
                printf("  %%%d = load i32, i32* %%%d, align 4\n", scout++, getValueFromMap(&id_local, temp));
            }
            else {
                printf("wrong initialing identifier.\n");
                exit(1);
            }
        }
        else if (strcmp(pointer->nodeType, "DECIMAL") == 0) {
            return pointer->ivalue;
        }
    }
}

/**
 * 生成函数调用参数的LLVM IR
 */
int GFD_FuncRParams(ast* pointer, char* buffer) {
    int len = strlen(buffer);  // 记录当前 buffer 长度
    if (ES_AddExp(pointer->right)) {
        sprintf(buffer + len, "i32 %%%d", scout);  // 拼接参数
        GFD_AddExp(pointer->right);
    }
    else {
        sprintf(buffer + len, "i32 %d", GFD_CONST_EXPR(pointer->right));
    }
    if (pointer->next != NULL) {
        sprintf(buffer + strlen(buffer), ", ");  // 拼接逗号
        GFD_FuncRParams(pointer->next, buffer);
    }
    return 0;
}

/**
 * 生成语句的LLVM IR
 */
int GFD_STMT(ast* pointer) {
    if (strcmp(pointer->svalue, "return") == 0) {
        if (ES_AddExp(pointer->left)) {
            GFD_AddExp(pointer->left);
            printf("  ret i32 %%%d\n", scout - 1);
        }
        else {
            printf("  ret i32 %d\n", GFD_CONST_EXPR(pointer->left));
        }
    }
    return 0;
}
