/* 给定正则表达式(a|b)(aa|bb)*(a|b)，请画出对应的非确定有限自动机（NFA），并转换为确定有限自动机（DFA），并最小化DFA；请编程实现从字符串中提取符合该正则表达式的C语言程序。*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


typedef enum {
    G3,
    G4,
    G5,
    G6
} State;


bool match(const char* code) {
    int pos = 0;
    char currentChar = code[pos];
    State state = G3;

    while (currentChar != '\0') {
        currentChar = code[pos];
        pos++;
        switch (state) {
            case G3:
                if (currentChar == 'a')
                    state = G4;
                else if (currentChar == 'b')
                    state = G4;
                else
                    return false;
                break;
            case G4:
                if (currentChar == 'a')
                    state = G5;
                else if (currentChar == 'b')
                    state = G6;
                else
                    return false;
                break;
            case G5:
                if (currentChar == 'a')
                    state = G4;
                else {
                    if (currentChar == '\0')
                        return true;
                    else
                        return false;
                }
                break;
            case G6:
                if (currentChar == 'b')
                    state = G4;
                else {
                    if (currentChar == '\0')
                        return true;
                    else return false;
                }
                break;
            default:
                break;
        }
    }

    return false;
}

int main() {
    char code[100];
    char presentstr[100];
    int presentstr_pos = 0;
    scanf("%s", code);
    // int a = match(code);
    // printf("%d\n", a);
    int len = strlen(code);

    for (int i = 0; i < len; ++i)
        for (int j = i; j < len; ++j) { // i is the last pointer and j is the front pointer
            // refresh presentstr
            for (int t = i; t <= j; ++t) {
                presentstr[presentstr_pos] = code[t];
                ++presentstr_pos;
            }
            presentstr[presentstr_pos] = '\0';

            if (match(presentstr) == true) {
                printf("%s\n", presentstr);
            }
            presentstr_pos = 0;
        }

    return 0;
}
