### 产生式的解释

1-4   CompUnit: 这是最顶层的产生式，表示一个程序的结构。一个程序可以包含多个声明（Decl）和函数定义（FuncDef）。

5-6   Decl: 声明语句，可以是常量声明（ConstDecl）或变量声明（VarDecl）。

7-10  ConstDecl, ConstDefs: 常量声明。ConstDecl表示单个或多个常量声明，以分号结尾；ConstDefs表示常量列表。

11-12 ConstDef: 单个常量定义，包括常量名称（ID）、赋值符号和初始值；ConstExps表示数组下标。

13-14 ConstExps: 用于多维数组下标的定义，支持嵌套数组。

15-18 ConstInitVal, ConstInitVals: 常量初始化的值，可以是单个表达式或嵌套数组形式。

19-20 ConstInitVals: 常量初始化值的列表，用逗号分隔。

21-24 VarDecl, VarDecls: 变量声明，VarDecl表示单个或多个变量声明；VarDecls是逗号分隔的变量列表。

25-28 VarDef: 单个变量定义，包括名称、可选的下标和初始值。

29-32 InitVal, InitVals: 变量初始化值，类似于常量初始化值，可以是单个表达式或数组形式。

33-34 InitVals: 变量初始化值列表，逗号分隔。

35-36 FuncDef: 函数定义，包括返回类型、函数名称、参数和代码块。

37-42 FuncParams, FuncParam: 函数参数列表，支持多维数组参数。

43-44 Block: 代码块，使用大括号包围一系列语句。

45-46 BlockItems: 代码块中的内容，可以是声明或语句。

47-48 BlockItem: 代码块中的单个元素，可以是声明或语句。

49-59 Stmt: 语句定义，包括赋值语句、控制流语句（如while和if）、break、continue和return语句。

60    Exp: 表达式类型，为AddExp。

61-62 LVal: 左值，可以是变量或数组元素。

63-64 ArraySubscripts: 数组下标，支持多维数组。

65-68 PrimaryExp: 基本表达式，包含括号表达式、左值、整数和浮点数。

69-74 UnaryExp: 一元表达式，包括函数调用和一元运算符（+、-、!）。

75-76 CallParams: 函数调用参数列表，用逗号分隔。

77-80 MulExp: 乘法表达式，支持乘、除和取模操作。

81-83 AddExp: 加法表达式，支持加法和减法操作。

84-88 RelExp: 关系表达式，支持比较操作符（<、>、<=、>=）。

89-91 EqExp: 等式表达式，支持相等（==）和不等（!=）操作。

92-93 LAndExp: 逻辑与表达式。

94-95 LOrExp: 逻辑或表达式。

96    ConstExp: 常量表达式，使用AddExp。

97-99 Type: 数据类型，包括整型（int）、浮点型（float）和void类型。
