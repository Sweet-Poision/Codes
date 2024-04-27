// Write a function that receives marks received by a student in 3
// subjects and returns the average and percentage of these marks.
// Call this function from main( ) and print the results in main( ).

#include <stdio.h>

void calc(int a, int b, int c, double * percentage, double *average) {
    *percentage = (a + b + c) / 3.0;
    *average = (a + b + c) / 3.0;
}

int main() {
    int a, b ,c;
    double percentage, average;
    printf("Enter marks of three subject: ");
    scanf("%d%d%d", &a, &b, &c);
    calc(a,b,c,&percentage, &average);
    printf("Average = %ld\n", average);
    printf("Percentage = %ld\n", percentage);
}