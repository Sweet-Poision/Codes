// Write a function power ( a, b ), to calculate the value of a raised to
// b.

#include <stdio.h>

int power(int a, int b) {
    double result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

int main() {
    int x, y;
    printf("Enter x and y to find x ^ y: ");
    scanf("%d%d", &x, &y);
    printf("Resutl = %d\n", power(x, y));
}