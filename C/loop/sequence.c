// Write a program to add first seven terms of the following series
// using a for loop: 1/1! + 2/2! + 3/3! + 4/4! + 5/5! + 6/6! + 7/7!

#include <stdio.h>

int main() {
    int i, fact = 1;
    double sum = 0;
    for (i = 1; i <= 7; i++) {
        fact *= i;
        sum += i / (double)fact;
    }
    printf("Sum = %f\n", sum);
    return 0;
}