// Write a program which performs the following tasks:
//  Initialize an integer array of 10 elements in main( )
//  Pass the entire array to a function modify( )
//  In modify( ) multiply each element of array by 3
//  Return the control to main( ) and print the new array elements
// in main( )

#include <stdio.h>

#define SIZE 10

void modify(int * arr) {
    for(int i = 0; i < SIZE; ++i) {
        arr[i] *= 3;
    }
}

int main() {
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    modify(arr);
    return 0;
}