// Write a program to receive an integer and find its octal equivalent.

#include <stdio.h>

int main () {
    int num, oct = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i = 0; i < num; i++) {
        oct = oct * 10 + num % 8;
        num = num / 8;
    }
    printf("%d in octal is %d", num, oct);
}