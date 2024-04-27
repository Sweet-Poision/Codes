//  Write a function to compute the greatest common divisor given by
// Euclid’s algorithm, exemplified for J = 1980, K = 1617 as follows:
// 1980 / 1617 = 1 1980 – 1 * 1617 = 363
// 1617 / 363 = 4 1617 – 4 * 363 = 165
// 363 / 165 = 2 363 – 2 * 165 = 33
// 5 / 33 = 5 165 – 5 * 33 = 0
// Thus, the greatest common divisor is 33.

#include <stdio.h>

void gcd(int a, int b, int * ans) {
    while(b != 0) {
        int temp = a;
        a = b;
        b = temp % b;
    }
    *ans = a;
}

int main() {
    int a, b, ans;
    printf("Enter two numbers to find gcd: ");
    scanf("%d %d", &a, &b);

    gcd(a,b,&ans);
    printf("GCD of %d and %d  = %d\n", a, b, ans);
}