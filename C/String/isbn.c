// To uniquely identify a book a 10-digit ISBN (International Standard
// Book Number) is used. The rightmost digit is a checksum digit. This
// digit is determined from the other 9 digits using the condition that
// d1 + 2d2 + 3d3 + ... + 10d10 must be a multiple of 11 (where di
// denotes the ith digit from the right). The checksum digit d1 can be
// any value from 0 to 10: the ISBN convention is to use the value X to
// denote 10. Write a program that receives a 10-digit integer, 
// computes the checksum, and reports whether the ISBN number is
// correct or not.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checksum(const char *buf, const size_t len)  {
    int num = (int)strtol(buf, (char **)NULL, 10);
    int sum = 0;
    while(num) {
        sum += num % 10;
        num /= 10;
    }
    return !(sum % 11);
}

int main() {
    char buf[11];
    printf("Enter the ISBN number: ");
    scanf("%10s", buf);
    printf((checksum(buf, 11))?"Correct\n":"Error\n");
}