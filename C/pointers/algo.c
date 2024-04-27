// Write a function that receives 5 integers and returns the sum,
// average and standard deviation of these numbers. Call this function
// from main( ) and print the results in main( ).

#include <stdio.h>
#include <math.h>

void algo(int a, int b, int c, int d, int e, int *sum, double *average, double *sd) {
    *sum = a + b + c + d + e;
    *average = *sum / 5.0;
    *sd = 0;
    double num = (a - *average) * (a - *average);
    num += (b - *average) * (b - *average);
    num += (c - *average) * (c - *average);
    num += (d - *average) * (d - *average);
    num += (e - *average) * (e - *average);
    *sd = sqrt(num / 5.0);
}

int main() {
    int a, b, c, d, e, sum;
    double average, sd;
    printf("Enter five numbers: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    algo(a, b, c, d, e, &sum, &average, &sd);
    printf("Sum = %d\nAverage = %d\nStandard Deviation = %d\n", sum, average, sd);
}