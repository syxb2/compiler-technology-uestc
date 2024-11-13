# Build directory
BUILD_DIR = ./build

# LL 编译目标
LL_TARGET = $(BUILD_DIR)/m.ll
# llvm 源文件
LL_SOURCE = ./test/test.c
# llvm 编译选项
LL_FLAGS = -S -emit-llvm -o $(LL_TARGET)

# C 编译目标
C_TARGET = a.out
# C 源文件
C_SOURCE = ./src/main.c \
		   ./src/code_gen.c
# C 编译选项
C_FLAGS = -o $(C_TARGET) -I ./include

all: $(BUILD_DIR) $(C_TARGET)

# Ensure build directory exists
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(C_TARGET): $(C_SOURCE) | $(BUILD_DIR)
	gcc $(C_FLAGS) $(C_SOURCE)

ll: $(BUILD_DIR) $(LL_TARGET)

$(LL_TARGET): $(LL_SOURCE) | $(BUILD_DIR)
	clang $(LL_FLAGS) $(LL_SOURCE)
