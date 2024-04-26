// Write a program to print all prime numbers from 1 to 300. (Hint:
// Use nested loops, break and continue)

#include <stdio.h>

int main() {
    for(int i = 1; i <= 300; ++i) {
        int isPrime = 1;
        for(int j = 2; j < i; ++j) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) {
            printf("%d\n", i);
        }
    }
}