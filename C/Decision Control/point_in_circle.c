#include <stdio.h>

int main() {
    double x, y, r, a, b;
    printf("Enter the center coordinates of Circle: ");
    scanf("%lf %lf", &x, &y);
    printf("Enter the radius of Circle: ");
    scanf("%lf", &r);
    printf("Enter coordinates of point: x, y: ");
    scanf("%lf %lf", &a, &b);

    if ((a - x) * (a - x) + (b - y) * (b - y) <= r * r) {
        printf("The point is inside the circle\n");
    } else {
        printf("The point is outside the circle\n");
    }
}