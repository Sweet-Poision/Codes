#include <stdio.h>

int main() {
    int year;
    printf("Enter year to check if its leap year: ");
    scanf("%d", &year);
    if (year % 400 == 0 || (year % 4 == 0 && year % 100!= 0)) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }
}