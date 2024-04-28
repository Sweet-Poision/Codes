// Sudoku is a popular number-placement puzzle (refer Figure 14.9).
// The objective is to fill a 9×9 grid with digits so that each column,
// each row, and each of the nine 3×3 sub-grids that compose the grid
// contains all of the digits from 1 to 9. The puzzle setter provides a
// partially completed grid, which typically has a unique solution. One
// such solution is given below. Write a program to check whether the
// solution is correct or not.

#include <stdio.h>

#define SIZE 9

#define BIT_SET(mask, bit) (mask |= (1 << (bit - 1)))
#define CHECK_BIT(mask, bit) (mask & (1 << (bit - 1)))

int check(int (*arr)[SIZE]) {
  unsigned int rows[SIZE] = {0};
  unsigned int cols[SIZE] = {0};
  unsigned int boxes[SIZE/3][SIZE/3] = {0};

  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      if (arr[i][j] == 0) {
        continue; 
      }
      int num = arr[i][j];
      int box_row = i / 3;
      int box_col = j / 3;

      if (CHECK_BIT(rows[i], num) || CHECK_BIT(cols[j], num) || CHECK_BIT(boxes[box_row][box_col], num)) {
        return 0; // Duplicate found
      }

      BIT_SET(rows[i], num);
      BIT_SET(cols[j], num);
      BIT_SET(boxes[box_row][box_col], num);
    }
  }

  return 1;
}

int main () {
    int arr[SIZE][SIZE] = {
        {5, 3, 4, 6, 7, 8, 9, 1, 2},
        {6, 7, 2, 1, 9, 5, 3, 4, 8},
        {1, 9, 8, 3, 4, 2, 5, 6, 7},
        {8, 5, 9, 7, 6, 1, 4, 2, 3},
        {4, 2, 6, 8, 5, 3, 7, 9, 1},
        {7, 1, 3, 9, 2, 4, 8, 5, 6},
        {9, 6, 1, 5, 3, 7, 2, 8, 4},
        {3, 4, 5, 2, 8, 6, 1, 7, 9}
    };
    if(check(arr)) {
        printf("Sudoku is Correct\n");
    }
    else {
        printf("Sudoku is Incorrect\n");
    }
}