BUILD_DIR = build

all: $(BUILD_DIR) $(BUILD_DIR)/lex.yy.c $(BUILD_DIR)/lrparser.tab.c
	gcc -L/evecode/libs -I/evecode/include/ -I$(BUILD_DIR) -o 203 -O0 -g \
		ast.c ast.h genllvm.c genllvm.h \
		$(BUILD_DIR)/lex.yy.c $(BUILD_DIR)/lrparser.tab.c \
		main.c -lfl -lm 

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/lrparser.tab.c: lrparser.y
	bison -d lrparser.y
	mv lrparser.tab.c lrparser.tab.h $(BUILD_DIR)/

$(BUILD_DIR)/lex.yy.c: lrlex.l
	flex -o $(BUILD_DIR)/lex.yy.c lrlex.l

clean:
	rm -rf $(BUILD_DIR)
	rm -f 203
