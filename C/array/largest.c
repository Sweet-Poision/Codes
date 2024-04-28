// Write a program to pick up the largest number from any 5 row by 5
// column matrix.

#include <stdio.h>

#define ROW 5
#define COL 5

int find_large(int (*arr)[COL]) {
    int max = arr[0][0];
    for(int i = 0; i < ROW; ++i) {
        for(int j = 0; j < COL; ++j) {
            if(max < arr[i][j]) {
                max =  arr[i][j];
            }
        }
    }
    return max;
}

int main() {
    int arr[ROW][COL] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    int largest = find_large(arr);
    printf("Largest number in array : %d\n", largest);

}