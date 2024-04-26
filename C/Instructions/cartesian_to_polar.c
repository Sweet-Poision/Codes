#include <stdio.h>

int main() {
    double x, y, r, phi;
    printf("Enter Cartesian coordinates x, y : ");
    scanf("%lf %lf", &x, &y);
    r = sqrt(x * x + y * y);
    phi = atan2(y, x);
    printf("Polar coordinates r, phi : %lf %lf\n", r, phi);
}