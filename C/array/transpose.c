// Write a program to obtain transpose of a 4 x 4 matrix. The
// transpose of a matrix is obtained by exchanging the elements of
// each row with the elements of the corresponding column.


#include <stdio.h>

#define ROW 4
#define COL 4

void transpose_matrix(const int matrix[][COL], int trans[][COL]) {
    for(int i = 0; i < ROW; ++i) {
        for(int j = 0; j < COL; ++j) {
            trans[j][i] = matrix[i][j];
        }
    }
}

void print(int arr[][COL]) {
    for(int i = 0; i < ROW; ++i) {
        for(int j = 0; j < COL; ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROW][COL] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int transpose[ROW][COL];
    transpose_matrix(matrix, transpose);

    print(transpose);
}