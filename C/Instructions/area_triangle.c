#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Enter three sides of triangel: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    double semiperimeter = (a+b+c)/2.0;
    double area = sqrt(semiperimeter*(semiperimeter-a)*(semiperimeter-b)*(semiperimeter-c));
    printf("The area of the triangle is: %lf\n", area);
}
