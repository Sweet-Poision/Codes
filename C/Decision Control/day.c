#include <stdio.h>

int main() {
    int year;
    printf("Enter year to check day on 1st Jan of the year: ");
    scanf("%d", &year);
    int leap = (year - 1)/4 - (year -1)/100 + (year -1) / 400;
    int non_leap = (year - 1) - leap;
    int total = leap * 366 + non_leap * 365;
    int day = (total+1) % 7;
    printf("Day on 1st Jan of the year %d is", day);
    switch(day) {
        case 0:
            printf(" Sunday\n");
            break;
        case 1:
            printf(" Monday\n");
            break;
        case 2:
            printf(" Tuesday\n");
            break;
        case 3:
            printf(" Wednesday\n");
            break;
        case 4:
            printf(" Thursday\n");
            break;
        case 5:
            printf(" Friday\n");
            break;
        case 6:
            printf(" Saturday\n");
            break;
        default:
            printf(" Error");
    }
}