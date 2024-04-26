#include <stdio.h>
#include <math.h>

int main() {
    double angle;
    printf("Enter angle in radians: ");
    scanf("%lf", &angle);
    printf("sin(%lf) = %lf\n", angle, sin(angle));
    printf("cos(%lf) = %lf\n", angle, cos(angle));
    printf("tan(%lf) = %lf\n", angle, tan(angle));
    printf("cosec(%lf) = %lf\n", angle, asin(angle));
    printf("sec(%lf) = %lf\n", angle, acos(angle));
    printf("cot(%lf) = %lf\n", angle, atan(angle));
}