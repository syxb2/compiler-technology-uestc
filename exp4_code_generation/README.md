# Experiment 4: Code Generation

### 要求

* 查看指令手册 LLVMRef.mht
* 用 clang 学习 llvm 虚拟指令：
    * 编写简单的 C 语言程序 test.c
    * 用 clang -emit-llvm -S ./test.c
    * 生成该文件对应的 llvm 指令
* 学习示例程序，理解代码生成过程
* 在实验3及示例程序的基础上完成算术表达式、逻辑表达式、赋值语句、条件语句、循环语句对应的代码生成，函数命名分别为：

```
genArithmeticExpr, genLogicExpr, genAssignStmt, genIfStmt, genWhileStmt
```

函数参数都为：

```c
(past node, char* result)
```

node 为相关类型的结点
result 为用来保存LLVM指令，每行只放一条指令；

### Note

#### sprintf 函数

sprintf 是 C 标准库中的一个函数，用于将格式化的数据写入字符串。它的功能类似于 printf，但 printf 是将格式化的数据输出到标准输出（通常是屏幕），而 sprintf 是将格式化的数据写入到一个字符数组（字符串）中。

函数原型
    
```c
int sprintf(char *str, const char *format, ...);
```

参数

str：指向一个字符数组的指针，格式化后的字符串将被写入该数组。
format：格式字符串，指定如何格式化输出。
...：可变参数列表，包含要格式化的值。

返回值

sprintf 返回写入到字符数组中的字符数（不包括终止的空字符 \0）。

#### strcat 函数

strcat 函数用于将一个字符串追加到另一个字符串的末尾。它将源字符串的内容复制到目标字符串的末尾，并在目标字符串的末尾添加一个空字符。

函数原型

```c
char* strcat(char *dest, const char *src);
```

参数

dest：指向目标字符串的指针。目标字符串必须有足够的空间来容纳源字符串和终止的空字符。
src：指向源字符串的指针。

返回值

返回目标字符串 dest 的指针。

### 参考资料

1. LLVM IR代码生成 - 二元表达式：https://llvm-tutorial-cn.readthedocs.io/en/latest/chapter-3.html
