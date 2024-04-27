#include <stdio.h>

#define SIZE 25
#define PRINT(X) for(int i = 0; i < SIZE; ++i){ printf("%d ", X + i ); printf("\n"); }

void bubbleSort(int arr[], int n) {
  int i, j;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
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
    bubbleSort(arr, SIZE);
    print(arr);
}