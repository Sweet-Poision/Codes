// Write a program to produce the following output:
// A B C D E F G F E D C B A
// A B C D E F   F E D C B A
// A B C D E       E D C B A
// A B C D           D C B A
// A B C               C B A
// A B                   B A
// A                       A

#include <stdio.h>

int main() {
    char loop = 'G';
    int flag = 0, spaces = 2;
    for (char i = loop; i >= 'A'; i--) {
        for(char c = 'A'; c <= i; c++) printf("%c ", c);
        if(flag) {
            for(int j = 0; j < spaces; ++j) printf(" ");
            spaces += 4;
            printf("%c ", i);
        }
        else flag = 1;
        for(char c = i-1; c >= 'A'; c--) printf("%c ", c);
        printf("\n");
    }
}