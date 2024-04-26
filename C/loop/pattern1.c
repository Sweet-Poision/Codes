// Write a program to produce the following output:
//    1
//   2 3
//  4 5 6
// 7 8 9 10

#include <stdio.h>

int main() {
    int count = 1;
    for(int i = 1; i <= 4; ++i) {
        for(int j = 0; j < 4-i; ++j) {
            printf(" ");
        }
        for(int j = 0; j < i; ++j) {
            printf("%d ", count);
            ++count;
        }
        printf("\n");
    }
    return 0;
}