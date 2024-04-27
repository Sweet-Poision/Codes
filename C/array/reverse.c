// Write a program to copy the contents of one array into another in
// the reverse order.

#include <stdio.h>

void reverse(const int * arr, int * arr2, const int size) {
    for (int i = 0; i < size; i++) {
        arr2[i] = arr[size - i - 1];
    }
}

int main() {
    int size; 
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr1[size], arr2[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }
    reverse(arr1, arr2, size);
    printf("The reversed array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
}