// Write a function to calculate the factorial value of any integer
// entered through the keyboard.

#include <stdio.h>


int factorial(int value) {
    int result = 1;
    for (int i = 1; i <= value; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    printf("Enter a number to calculate the factorial value of : ");
    scanf("%d", &number);
    printf("Factorial of %d is %d\n", number, factorial(number));
}