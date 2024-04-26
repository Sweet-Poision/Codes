#include <stdio.h>

int main()
{
    int num;
    prinf("Enter a five digit number : ");
    scanf("%d", &num);
    int sum = 0;
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    printf("The sum of the digits is : %d\n", sum);
}