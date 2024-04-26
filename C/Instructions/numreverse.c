#include <stdio.h>

int main() {
    int num;
    printf("Enter a five digit number: ");
    scanf("%d", &num);
    int rev = 0;
    rev = (rev * 10) + num %10;
    num /= 10;
    rev = (rev * 10) + num %10;
    num /= 10;
    rev = (rev * 10) + num %10;
    num /= 10;
    rev = (rev * 10) + num %10;
    num /= 10;
    rev = (rev * 10) + num %10;
    printf("The reversed number is: %d\n", rev);
}