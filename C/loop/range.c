// Write a program to find the range of a set of numbers entered
// through the keyboard. Range is the difference between the smallest
// and biggest number in the list.

#include <stdio.h>

int main() {
    int n, min, max, choice;

    printf("Enter a number: ");
    scanf("%d", &n);
    min = max = n;

    do {
        printf("Enter a number: ");
        scanf("%d", &n);

        if (n < min) {
            min = n;
        } else if (n > max) {
            max = n;
        }

        printf("DO you want to enter a number? (1/0): ");
        scanf("%d", &choice);
    } while(choice);
    printf("Range: %d\n", max - min);

    return 0;
}