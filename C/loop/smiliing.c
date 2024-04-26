// Write a program to fill the entire screen with a smiling face. The
// smiling face has an ASCII value 1


#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%c", 1);
        }
        printf("\n");
    }
    return 0;
}