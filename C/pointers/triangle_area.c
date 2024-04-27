#include <stdio.h>
#include <math.h>

void cal(double a, double b, double c, double *area) {
    double s = (a + b + c) / 2;
    *area = sqrt(s * (s-a) * (s-b) * (s-c));
}

int main() {
    double a, b, c, area;
    printf("Enter side of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    cal(a,b,c,&area);
    printf("Area of triangle = %f\n", area);

}