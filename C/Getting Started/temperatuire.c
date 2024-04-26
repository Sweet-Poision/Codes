#include <stdio.h>

int main() {
    double tempf;
    printf("Enter temperature in farenheit: ");
    scanf("%lf", &tempf);
    printf("Temperature in celsius: %.2lf\n", (tempf - 32) * 5 / 9);
}