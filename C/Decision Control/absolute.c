#include <stdio.h>

int main() {
    int num;
    printf("Enter number to find its absolute value: ");
    scanf("%d", &num);
    printf("The absolute value of %d is %d", num, num < 0? -num : num);
}