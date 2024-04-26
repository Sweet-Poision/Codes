#include <stdio.h>

int main() {
    int num;
    printf("Enter number to check if its even or odd: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd/\n", num);
    }
}