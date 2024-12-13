# 生成目录
BUILD_DIR = ./build

# 源文件
L_SOURCE = ./src/lex.sysy.l

# 生成的 C 文件
LEX_C = $(BUILD_DIR)/lex.c

# 可执行文件
TARGET = a.out

# 默认目标
all:$(TARGET)

# 链接生成可执行文件
$(TARGET):$(LEX_C)
	gcc $(LEX_C) -o $(TARGET)

# 使用 Flex 生成 C 文件
$(LEX_C):$(L_SOURCE)
	flex -o $(LEX_C) $(L_SOURCE)

# 创建生成目录
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# 清理生成的文件
clean:
	rm -rf $(BUILD_DIR) $(TARGET)

# 伪目标
.PHONY: all clean
