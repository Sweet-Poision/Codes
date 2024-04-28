// A SIZE x SIZE matrix is entered through the keyboard. Write a program to
// obtain the Determinant value of this matrix.

#include <stdio.h>

#define SIZE 6

int determinant(int matrix[SIZE][SIZE], int n) {
    if (n == 1) {
        return matrix[0][0];
    }

    int det = 0;
    int submatrix[SIZE][SIZE];

    for (int x = 0; x < n; x++) {
        int sub_row = 0;
        for (int i = 1; i < n; i++) {
            int sub_col = 0;
            for (int j = 0; j < n; j++) {
                if (j == x) {
                    continue;
                }
                submatrix[sub_row][sub_col] = matrix[i][j];
                sub_col++;
            }
            sub_row++;
        }

        int cofactor = (x % 2 == 0) ? 1 : -1;
        det += cofactor * matrix[0][x] * determinant(submatrix, n - 1);
    }

    return det;
}

int main() {
    int matrix[SIZE][SIZE];

    printf("Enter the elements of a %dx%d matrix:\n", SIZE, SIZE);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int det = determinant(matrix, SIZE);

    printf("The determinant of the %dx%d matrix is: %d\n", SIZE, SIZE, det);

    return 0;
}
