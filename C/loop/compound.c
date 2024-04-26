// When interest compounds q times per year at an annual rate of
// r % for n years, the principal p compounds to an amount a as per
// the following formula
// a = p ( 1 + r / q )^nq
// Write a program to read 10 sets of p, r, n & q and calculate the
// corresponding as.

#include <stdio.h>

int main() {
    double p, r, n, q, a;

    for (int i = 0; i < 10; i++) {
        printf("Enter Principal Amount: ");
        scanf("%lf", &p);
        printf("Enter Annual Interest Rate: ");
        scanf("%lf", &r);
        printf("Enter Number of Years: ");
        scanf("%lf", &n);
        printf("Enter Number of Times Interest Compounded Per Year: ");
        scanf("%lf", &q);
        a = p * (1 + r / q) * n;
        printf("%.2lf\n", a);
    }

    return 0;
}