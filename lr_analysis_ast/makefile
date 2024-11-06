# 生成目录
BUILD_DIR = ./build
# 源文件
L_SOURCE = ./src/ast.l
Y_SOURCE = ./src/ast.y
# 头文件
HEADERS = ./include/ast.h \
		  ./include/node_type.h \
		  ./build/ast.tab.h
# flex 生成的 C 文件
LEX_C = $(BUILD_DIR)/lex.yy.c
# bison 生成的 C 文件
YACC_C = $(BUILD_DIR)/ast.tab.c
# 可执行文件
TARGET = a.out
# gcc 编译选项
CFLAGS = -I./include -I./build
# bison 选项
# YFLAGS = -d -Wcounterexamples
YFLAGS = -d

# 默认目标
all: $(TARGET)

# 链接生成可执行文件
$(TARGET): $(LEX_C) $(YACC_C) $(HEADERS) $(BUILD_DIR)
	gcc $(CFLAGS) $(LEX_C) $(YACC_C) -o $(TARGET)
# 使用 Flex 生成 C 文件
$(LEX_C): $(L_SOURCE) $(BUILD_DIR)
	flex -o $(LEX_C) $(L_SOURCE)
# 使用 Bison 生成 C 文件
$(YACC_C): $(Y_SOURCE) $(BUILD_DIR)
	bison $(YFLAGS) -o $(YACC_C) $(Y_SOURCE)
$(HEADERS): $(YACC_C)
# 创建生成目录
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# 仅编译 flex 生成的 c 文件
flex: $(LEX_C) $(Y_SOURCE) $(L_SOURCE)
	bison $(YFLAGS) -o $(YACC_C) $(Y_SOURCE)
	flex -o $(LEX_C) $(L_SOURCE)
	gcc $(CFLAGS) $(LEX_C) -o $(TARGET)
bison: $(YACC_C) $(Y_SOURCE)
	bison $(YFLAGS) -o $(YACC_C) $(Y_SOURCE)
# 清理生成的文件
clean:
	rm -rf $(BUILD_DIR) $(TARGET)

# 伪目标
.PHONY: all clean
