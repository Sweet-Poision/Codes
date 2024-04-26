#include <stdio.h>
#include <math.h>

int main() {
    double t, v;
    pritnf("Enter temperature: ");
    scanf("%lf", &t);
    printf("Enter Wind velocity: " );
    scanf("%lf", &v);
    double wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);
    pritnf("WCF = %lf\n", wcf);
}