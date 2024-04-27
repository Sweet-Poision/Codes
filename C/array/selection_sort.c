#include <stdio.h>

#define SIZE 25
#define PRINT(X) for(int i = 0; i < SIZE; ++i){ printf("%d ", X + i ); printf("\n"); }

void selectionSort(int arr[], int n) {
  int i, j, min_idx;
  for (i = 0; i < n - 1; i++) {
    min_idx = i;
    for (j = i + 1; j < n; j++) {
      if (arr[j] < arr[min_idx]) {
        min_idx = j;
      }
    }
    if (min_idx != i) {
      int temp = arr[min_idx];
      arr[min_idx] = arr[i];
      arr[i] = temp;
    }
  }
}

void input(int *arr) {
    printf("Enter %d numbers\n ", SIZE);
    for(int i = 0; i < SIZE; ++i) {
        scanf("%d", arr + i);
    }
}

int main() {
    int arr[SIZE], key;
    input(arr);
    selectionSort(arr, SIZE);
    print(arr);
}