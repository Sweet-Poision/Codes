// The natural logarithm can be approximated by the following series.
// If x is input through the keyboard, write a program to calculate the
// // sum of first seven terms of this series.

#include <stdio.h>
#include <math.h>

int main() {
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    double sum = 0;

    sum  += (x - 1) / (double)x;
    for(int i = 0; i < 6; ++i) {
        sum += pow(((x - 1) / (double)(x))/2.0, i+2);
    }
    printf("The sum of the first seven terms = %f\n", sum);
}