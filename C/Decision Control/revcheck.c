#include <stdio.h>

int main() {
    int num, num_copy;;
    printf("Enter a five digit number: ");
    scanf("%d", &num);
    num_copy = num;
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
    if(rev == num_copy) {
        printf("%d is a equal to reverse\n", num_copy);
    }
    else {
        printf("%d is not a equal to reverse\n", num_copy);
    }
}