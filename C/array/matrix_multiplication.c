// Write a program to multiply any two 3 x 3 matrices.

#include <stdio.h>

#define SIZE 3

void input(int (*arr)[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void multiply(const int (*a)[SIZE],const int (*b)[SIZE], int (*mul)[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int a[SIZE][SIZE], B[SIZE][SIZE], mult[SIZE][SIZE];
    printf("Enter elements of Matrix A:\n");
    input(a);
    printf("Enter elements of Matrix B:\n");
    input(B);
    multiply(a, B, mult);

    printf("After multiplication:\n");
    for(int i = 0; i < SIZE; ++i) {
        for(int j = 0; j < SIZE; ++j) {
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }
}