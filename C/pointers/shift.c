// Given three variables x, y, z write a function to circularly shift their
// values to right. In other words if x = 5, y = 8, z = 10, after circular
// shift y = 5, z = 8, x =10. Call the function with variables a, b, c to
// circularly shift values.

#include <stdio.h>

void shift(int *a, int *b, int *c) {
    int temp = *c;
    *a = *b;
    *b = *c;
    *c = temp;
}


int main() {
    int a, b, c;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    shift(&a, &b, &c);
    printf("a = %d, b = %d, c = %d\n", a, b, c);

}