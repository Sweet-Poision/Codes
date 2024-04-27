// A positive integer is entered through the keyboard, write a function
// to find the binary equivalent of this number :

#include <stdio.h>

void tobin(int num) {
    if( num == 0) return;
    tobin(num / 2);
    printf("%d", num % 2);
}

int main() {
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    tobin(num);
}