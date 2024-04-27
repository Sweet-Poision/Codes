// Any year is entered through the keyboard. Write a function to
// determine whether the year is a leap year or not.

#include <stdio.h>

int isLeap(int year) {
    if(year % 400 == 0) return 1;
    if(year % 100 == 0) return 0;
    if(year % 4 == 0) return 1;
    return 0;
}

int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    if(isLeap(year)) printf("%d year is Leap Year\n");
    else printf("%d year is not Leap Year\n", year);
}