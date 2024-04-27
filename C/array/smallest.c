// Write a program using pointers to find the smallest number in an
// array of 25 integers.

#include <stdio.h>

#define SIZE 25

int smallest(int * arr) {
    int smallest = arr[0];
    for(int i = 1; i < SIZE; ++i) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

void input(int *arr) {
    printf("input 25 elements \n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }
}

int main() {
    int arr[SIZE];
    input(arr);
    printf("The smallest number in the array is: %d\n", smallest(arr));
}