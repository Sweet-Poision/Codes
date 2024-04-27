// Write a recursive function to obtain the first 25 numbers of a
// Fibonacci sequence. In a Fibonacci sequence the sum of two
// successive terms gives the third term. Following are the first few
// terms of the Fibonacci sequence:
// 1 1 2 3 5 8 13 21 34 55 89...

#include <stdio.h>

void fib(int first, int second, int count) {
    if(count == 0) return;
    printf("%d ", first);
    fib(second, first + second, count -1);
}

int main() {
    int n = 25, first = 1, second = 1;
    fib(first, second, n);
}