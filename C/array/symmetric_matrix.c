// Write a program to find if a square matrix is symmetric.

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of a matrix: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter elements of the square matrix\n");
    for(int i  =0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(arr[i][j]!= arr[j][i]) {
                printf("The matrix is not symmetric\n");
                return 0;
            }
        }
    }
    printf("The matrix is symmetric\n");
}