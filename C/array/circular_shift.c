// Given an array p[ 5 ], write a function to shift it circularly left by two
// positions. Thus, if p[ 0 ] = 15, p[ 1 ]= 30, p[ 2 ] = 28, p[ 3 ]= 19 and p[
// 4 ] = 61 then after the shift p[ 0 ] = 28, p[ 1 ] = 19, p[ 2 ] = 61, p[ 3 ] =
// 15 and p[ 4 ] = 30. Call this function for a (4 x 5 ) matrix and get its
// rows left shifted.

#include <stdio.h>

#define SIZE 5

void shift(int *arr) {
    int temp1 = *(arr), temp2 = *(arr + 1);
    for(int i = 0; i < SIZE-2; ++i) {
        *(arr + i) = *(arr + i + 2);
    }
    *(arr + SIZE -2) = temp1;
    *(arr + SIZE -1) = temp2;
}

int main() {
    int matrix[4][SIZE];
    printf("Give elements of array:\n");
    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < SIZE; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i = 0; i < 4; ++i) {
        shift(matrix[i]);
    }

    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < SIZE; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
}
