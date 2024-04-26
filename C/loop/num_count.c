// Write a program to enter numbers till the user wants. At the end it
// should display the count of positive, negative and zeros entered.

#include <stdio.h>

int main() {
    int num, pos = 0, neg = 0, zero = 0, choice = 0;
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num > 0) {
            pos++;
        } else if (num < 0) {
            neg++;
        } else {
            zero++;
        }
        printf("Do you want to continue? (1/0): ");
        scanf("%d", &choice);
    }
    while(choice);
    printf("Positive: %d\nNegative: %d\nZero: %d\n", pos, neg, zero);
}