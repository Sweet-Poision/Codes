#include <stdio.h>

int main() {
    long long int num, fact = 1;
    printf("Enter number : ");
    scanf("%ld", &num);
    for(int i = 1; i <= num; ++i) {
        fact *= i;
    }
    printf("Factorial of %ld is %lld\n", num, fact);
}