#include <stdio.h>

int main() {
    int a, b, c, d, e;
    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int total = a+b+c+d+e;
    int full = 500;
    printf("Aggeragate marks = %f\n", total/5);
    printf("Percentage marks = %f\n", (double)total/full * 100);

}