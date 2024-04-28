// Write a program to add two 6 x 6 matrices.

#include <stdio.h>

#define SIZE 6

int main() {
    int a[SIZE][SIZE], b[SIZE][SIZE], sum[SIZE][SIZE];
    printf("Enter element of matrix A\n");
    for(int i = 0; i < SIZE; ++i) {
        scanf("%d", &a[i]);
    }
    printf("Enter element of matrix B\n");

    for(int i = 0; i < SIZE; ++i) {
        scanf("%d", &b[i]);
    }

    for(int i = 0; i < SIZE; ++i) {
        for(int j = 0; j < SIZE; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("sum of Matrix A and Matrix B: \n");
    for(int i = 0; i < SIZE; ++i) {
        for(int j = 0; j < SIZE; ++j) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}