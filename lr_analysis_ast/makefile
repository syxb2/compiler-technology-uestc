# 生成目录
BUILD_DIR = ./build

# 源文件
L_SOURCE = ./src/ast.l
Y_SOURCE = ./src/ast.y
# 头文件
HEADER = ./include/ast.h \
		 ./include/node_type.h

# flex 生成的 C 文件
LEX_C = $(BUILD_DIR)/lex.yy.c
# bison 生成的 C 文件
YACC_C = $(BUILD_DIR)/ast.tab.c

# 可执行文件
TARGET = a.out

# 编译选项
CFLAGS = -I./include

# 默认目标
all: $(TARGET)

# 链接生成可执行文件
$(TARGET): $(LEX_C) $(YACC_C) $(HEADER)
	gcc $(CFLAGS) $(LEX_C) $(YACC_C) -o $(TARGET)

# 使用 Flex 生成 C 文件
$(LEX_C): $(L_SOURCE)
	flex -o $(LEX_C) $(L_SOURCE)

# 使用 Bison 生成 C 文件
$(YACC_C): $(Y_SOURCE)
	bison -d -o $(YACC_C) $(Y_SOURCE)

# 创建生成目录
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

flex: $(LEX_C)
	flex -o $(LEX_C) $(L_SOURCE)
	gcc $(CFLAGS) $(LEX_C) -o $(TARGET)
bison: $(YACC_C)
	bison -d -o $(YACC_C) $(Y_SOURCE)
	gcc $(CFLAGS) $(YACC_C) -o $(TARGET)
# 清理生成的文件
clean:
	rm -rf $(BUILD_DIR) $(TARGET)
run:
	./$(TARGET)

# 伪目标
.PHONY: all clean
