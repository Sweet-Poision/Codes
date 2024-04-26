#include <stdio.h>
#include <math.h>

int main() {
    double angle;
    printf("Enter angle in degrees: ");
    scanf("%lf", &angle);
    if(sin(angle)*sin(angle) + cos(angle)*cos(angle == 1)) {
        printf("Sum of squares of sine and cosine of this angle is eual to 1. \n");
    }
    else {
        printf("Sum of squares of sine and cosine of this angle is not equal to 1. \n");
    }
}