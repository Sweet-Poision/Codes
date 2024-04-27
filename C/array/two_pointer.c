// If an array arr contains n elements, then write a program to check if
// arr[ 0 ] = arr[ n-1 ], arr[ 1 ] = arr[ n - 2 ] and so on.

#include <stdio.h>

int valid(int * arr, int size) {
    for(int i = 0; i < size; ++i) {
        if(arr[i]!= arr[size - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    if(valid(arr, size)) printf("Array Satisfied\n");
    else printf("Array Not Satisfied\n");
}