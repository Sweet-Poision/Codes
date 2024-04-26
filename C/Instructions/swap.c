#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers = ");
    scanf("%d %d", &a, &b);
    printf("Before swapping, a = %d, b = %d", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping, a = %d, b = %d", a, b);
}