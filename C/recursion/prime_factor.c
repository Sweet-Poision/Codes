// A positive integer is entered through the keyboard, write a program
// to obtain the prime factors of the number. Modify the function
// suitably to obtain the prime factors recursively

#include <stdio.h>

void pf(int num, int i) {
     if (i <= num) {
        if (num % i == 0) {
            printf("%d ", i);
        } 
        pf(num, i + 1);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The prime factors of %d are: \n");
    pf(num, 1);
}