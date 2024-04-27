// A positive integer is entered through the keyboard. Write a function
// to obtain the prime factors of this number.
// For example, prime factors of 24 are 2, 2, 2 and 3, whereas prime
// factors of 35 are 5 and 7.

#include <stdio.h>



void printPrimeFactors(int num) {
    for (int i = 2; num > 1; ++i) {
        while(num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }
}

int main() {
    
    int num;
    printf("Enter number to print prime factors: ");
    scanf("%d", &num);
    printPrimeFactors(num);
}