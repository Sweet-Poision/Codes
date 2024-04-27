// sin(x) = x - (x^3/3!) + (x^5/5!) + (x^7/7!) + ...
// upto 10 terms

#include <stdio.h>
#include <math.h>

long int fact(int num) {
    long int f = 1;
    for (int i = 1; i <= num; i++) {
        f *= i;
    }
    return f;
}

double foo(int sign, int x, int j) {
    return sign * (double)pow(x,j)/fact(j);
}

void calc(int x, double *sum) {
    *sum = x;
    int sign = -1;
    for(int i = 0, j = 3; i < 9; ++i, j+=2) {
        *sum += foo(sign, x, j);
    }
}

int main(){
    int x;
    double sum;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    calc(x, &sum);
    printf("Value = %lf", sum);
}