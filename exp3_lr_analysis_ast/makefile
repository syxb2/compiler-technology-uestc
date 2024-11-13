# 生成目录
BUILD_DIR = ./build
# 源文件
L_SOURCE = ./src/ast.l
Y_SOURCE = ./src/ast.y
C_SOURCE = ./src/ast.c
# flex 生成的 C 文件
LEX_C = $(BUILD_DIR)/lex.yy.c
# bison 生成的 C 文件
YACC_C = $(BUILD_DIR)/ast.tab.c
# bison 生成的头文件
YACC_H = ./build/ast.tab.h
# gcc 编译选项
C_FLAGS = -I./include -I./build -o $(TARGET)
# bison 编译选项
Y_FLAGS = -d -o $(YACC_C) -Wcounterexamples
# flex 编译选项
L_FLAGS = -o $(LEX_C)
# 可执行文件
TARGET = a.out

# 默认目标
all: $(TARGET)

# 链接生成可执行文件
$(TARGET): $(LEX_C) $(YACC_C) $(YACC_H) $(BUILD_DIR)
	gcc $(C_FLAGS) $(LEX_C) $(YACC_C) $(C_SOURCE)
# 使用 Flex 生成 C 文件
$(LEX_C): $(L_SOURCE) $(YACC_H) $(BUILD_DIR)
	flex $(L_FLAGS) $(L_SOURCE)
# Bison 生成的头文件
$(YACC_H): $(YACC_C)
# 使用 Bison 生成 C 文件
$(YACC_C): $(Y_SOURCE) $(BUILD_DIR)
	bison $(Y_FLAGS) $(Y_SOURCE)
# 创建生成目录
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

flex: $(LEX_C) $(Y_SOURCE) $(L_SOURCE)
	flex $(L_FLAGS) $(L_SOURCE)
bison: $(YACC_C) $(Y_SOURCE)
	bison $(Y_FLAGS) $(Y_SOURCE)
# 清理生成的文件
clean:
	rm -rf $(BUILD_DIR) $(TARGET)

# 伪目标
.PHONY: all clean
