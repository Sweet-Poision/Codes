#include <stdio.h>

#define SIZE 25
#define PRINT(X) for(int i = 0; i < SIZE; ++i){ printf("%d ", X + i ); printf("\n"); }


void insertionSort(int arr[], int n) {
  int i, key, j;
  for (i = 1; i < n; i++) {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
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
    insertionSort(arr, SIZE);
    print(arr);
}