// Twenty-five numbers are entered from the keyboard into an array.
// Write a program to find out how many of them are positive, how
// many are negative, how many are even and how many odd.

#include <stdio.h>

#define SIZE 25

int count(int *arr, int * pos, int * odd) {
    for(int i = 0; i < SIZE; ++i) {
        *pos += (arr[i] >= 0);
        *odd += (arr[i] & 1);
    }
}

int main() {
    int arr, pos = 0, odd = 0;
    input(arr);
    count(arr, &pos, &odd);
    printf("Positive = %d\nNegative = %d\nEven = %d\Odd = %d", pos, SIZE - pos, SIZE - odd, odd);
}