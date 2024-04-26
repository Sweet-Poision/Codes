#include <stdio.h>

int main() {
    double cp, sp;
    printf("Enter Cost Price and Selling Price of item: ");
    scanf("%lf %lf", &cp, &sp);
    if(cp > sp) {
        printf("Profit = %.2lf", sp - cp);
    }
    else {
        printf("Loss = %.2lf", cp - sp);
    }
}