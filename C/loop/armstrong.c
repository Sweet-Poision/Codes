// Write a program to print out all Armstrong numbers between 1 and
// 500. If sum of cubes of each digit of the number is equal to the
// number itself, then the number is called an Armstrong number. For
// example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ).

#include <stdio.h>

int main() {
    for(int i = 1; i <= 500; ++i) {
        int num = i;
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            sum += digit * digit * digit;
            num /= 10;
        }
        if (sum == i) {
            printf("%d\n", i);
        }
    }
}

