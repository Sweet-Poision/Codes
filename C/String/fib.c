// Write a program that generates and prints the Fibonacci words of
// order 0 through 5. If f(0) = "a", f(1) = "b", f(2) = "ba", f(3) = "bab",
// f(4) = "babba", etc.

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10

void compute_fib(char (*f)[MAX_LENGTH], const int len, const int col) {
    strcpy(f[0], "a");
    strcpy(f[1], "b");
    for(int i = 2; i < len; ++i) {
        strcpy(f[i], f[i-1]);
        strcat(f[i], f[i-2]);
    }
}

int main() {
    char f[6][MAX_LENGTH];
    compute_fib(f, 6, MAX_LENGTH);
    for(int i = 0; i < 6; ++i) {
        printf("%s\n", f[i]);
    }

}