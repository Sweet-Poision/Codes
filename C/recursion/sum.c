// Write a recursive function to obtain the running sum of first 25
// natural numbers.

#include <stdio.h>

int sum(int num) {
    if (num == 1) return 1;
    return num + sum(num - 1);
}

int main() {
    printf("Sum of first 25 natural numbers = %d \n", sum(25));
}