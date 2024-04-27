// Write a general-purpose function to convert any given year into its
// Roman equivalent. Use these Roman equivalents for decimal
// numbers: 1 – I, 5 – V, 10 – X, 50 – L, 100 – C, 500 – D, 1000 – M.

#include <stdio.h>

void printRoman(int num) {
    while(num >= 1000) {
        printf("M");
        num -= 1000;
    }
    while(num >= 500) {
        printf("D");
        num -= 500;
    }
    while (num >= 100) {
        printf("C");
        num -= 100;
    }
    while (num >= 50) {
        printf("L");
        num -= 50;
    }
    while(num >= 10) {
        printf("X");
        num -= 10;
    }
    while(num >= 5) {
        printf("V");
        num -= 5;
    }
    while(num >= 1) {
        printf("I");
        num -= 1;
    }
}

int main() {
    int num;
    printf("Enter number to convert into Roman: ");
    scanf("%d", &num);
    printRoman(num);
}