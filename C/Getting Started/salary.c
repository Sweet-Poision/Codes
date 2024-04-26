#include <stdio.h>

int main() {
    double salary;
    scanf("%lf", &salary);
    double dearness = 0.4 * salary;
    double rent = 0.2 * salary;
    double total = salary + dearness + rent;
    printf("Total Salary = %f\n", total);
}