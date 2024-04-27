// A 5-digit positive integer is entered through the keyboard, write a
// recursive and a non-recursive function to calculate sum of digits of
// the 5-digit number

#include <stdio.h>

int sum(int num) {
    if( num == 0) return 0;
    return num % 10 + sum(num / 10);
}

int main() {
    int num;
    printf("Enter a five digit number: ");
    scanf("%d", &num);
    printf("Sum of all the digit = %d\n", sum(num));

}