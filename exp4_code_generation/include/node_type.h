//////
// 声明种类
#ifndef COMPILER_LAB_NODE_TYPE_H
#define COMPILER_LAB_NODE_TYPE_H

enum _node_type{

    // 未通过此接口公开的特定类型的声明
    //

    // C 或 C++ 结构体
    STRUCT_DECL = 2,

    // C 或 C++ 联合体
    UNION_DECL = 3,

    // 枚举
    ENUM_DECL = 5,

    // C 中的字段，或 C++ 中的非静态数据成员，在结构体、联合体或 C++ 类中
    FIELD_DECL = 6,

    // 枚举常量
    ENUM_CONSTANT_DECL = 7,

    // 函数
    FUNCTION_DECL = 8,

    // 变量
    VAR_DECL = 9,

    // 函数或方法参数
    PARM_DECL = 10,

    // 类型定义
    TYPEDEF_DECL = 20,

    // 类型别名声明
    TYPE_ALIAS_DECL = 36,

    // 在某些非表达式上下文中出现的结构体、联合体或类成员的引用，例如指定初始化器
    MEMBER_REF = 47,

    // 标签语句的引用
    LABEL_REF = 48,

    // 尚未解析为特定函数或函数模板的一组重载函数或函数模板的引用
    OVERLOADED_DECL_REF = 49,

    // 在某些非表达式上下文中出现的变量引用，例如 C++ lambda 捕获列表
    VARIABLE_REF = 50,

    //////
    // 无效/错误种类

    // 无效文件
    INVALID_FILE = 70,
    // 未找到声明
    NO_DECL_FOUND = 71,
    // 未实现
    NOT_IMPLEMENTED = 72,
    // 无效代码
    INVALID_CODE = 73,

    //////
    // 表达式种类

    // 未通过此接口公开的特定类型的表达式
    //
    // 未公开的表达式具有与任何其他类型的表达式相同的操作；可以提取其位置信息、拼写、子节点等。
    // 但是，不报告表达式的具体类型
    UNEXPOSED_EXPR = 100,

    // 引用某个值声明的表达式，例如函数、变量或枚举常量
    DECL_REF_EXPR = 101,

    // 引用结构体、联合体、类、Objective-C 类等成员的表达式
    MEMBER_REF_EXPR = 102,

    // 调用函数的表达式
    CALL_EXPR = 103,

    // 表示块字面的表达式
    BLOCK_EXPR = 105,

    // 整数字面量
    INTEGER_LITERAL = 106,

    // 浮点数字面量
    FLOATING_LITERAL = 107,

    // 虚数字面量
    IMAGINARY_LITERAL = 108,

    // 字符串字面量
    STRING_LITERAL = 109,

    // 字符字面量
    CHARACTER_LITERAL = 110,

    // 括号表达式，例如 "1,"
    //
    // 仅在请求完整位置信息时形成此 AST 节点
    PAREN_EXPR = 111,

    // 表示一元表达式，除了 sizeof 和 alignof
    UNARY_OPERATOR = 112,

    // [C99 6.5.2.1] 数组下标
    ARRAY_SUBSCRIPT_EXPR = 113,

    // 内置二元操作表达式，例如 "x + y" 或 "x <= y"
    BINARY_OPERATOR = 114,

    // 复合赋值，例如 "+="
    COMPOUND_ASSIGNMENT_OPERATOR = 115,

    // ?: 三元操作符
    CONDITIONAL_OPERATOR = 116,

    // C99 6.5.4 中的显式类型转换，或 C++ 中的 C 风格类型转换
    // C++ [expr.cast]，使用语法 Type(expr)
    //
    // 例如：int(f)
    CSTYLE_CAST_EXPR = 117,

    // [C99 6.5.2.5]
    COMPOUND_LITERAL_EXPR = 118,

    // 描述 C 或 C++ 初始化列表
    INIT_LIST_EXPR = 119,

    // GNU 标签地址扩展，表示 &&label
    ADDR_LABEL_EXPR = 120,

    //////
    // 语句种类

    // 未通过此接口公开的特定类型的语句
    //
    // 未公开的语句具有与任何其他类型的语句相同的操作；可以提取其位置信息、拼写、子节点等。
    // 但是，不报告语句的具体类型
    UNEXPOSED_STMT = 200,

    // 函数中的标记语句
    LABEL_STMT = 201,

    // 复合语句
    COMPOUND_STMT = 202,

    // case 语句
    CASE_STMT = 203,

    // default 语句
    DEFAULT_STMT = 204,

    // if 语句
    IF_STMT = 205,

    // switch 语句
    SWITCH_STMT = 206,

    // while 语句
    WHILE_STMT = 207,

    // do 语句
    DO_STMT = 208,

    // for 语句
    FOR_STMT = 209,

    // goto 语句
    GOTO_STMT = 210,

    // 间接 goto 语句
    INDIRECT_GOTO_STMT = 211,

    // continue 语句
    CONTINUE_STMT = 212,

    // break 语句
    BREAK_STMT = 213,

    // return 语句
    RETURN_STMT = 214,

    // 空语句
    NULL_STMT = 230,

    // 用于将声明与语句和表达式混合的适配器类
    DECL_STMT = 231,

    //////
    // 其他种类

    // 表示翻译单元本身的游标
    //
    // 翻译单元游标主要用于作为遍历翻译单元内容的根游标
    TRANSLATION_UNIT = 300,
};

typedef enum _node_type node_type;

#endif
