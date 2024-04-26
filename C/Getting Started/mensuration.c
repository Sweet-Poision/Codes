#include <stdio.h>

int main() {
    double l, b, r;
    printf("Enter length of rectangle: ");
    scanf("%lf", &l);
    printf("Enter breadth of rectangle: ");
    scanf("%lf", &b);
    printf("Enter radius of circle: ");
    scanf("%lf", &r);

    double rarea = l * b;
    double rper = 2 * (l + b);
    double carea = 3.14 * r * r;
    double cper = 2 * 3.14 * r;

    printf("Circle Area = %lf\n", carea);
    printf("Circle Perimeter = %lf\n", cper);
    printf("Rectangle Area = %lf\n", rarea);
    printf("Rectangle Perimeter = %lf\n", rper);

}