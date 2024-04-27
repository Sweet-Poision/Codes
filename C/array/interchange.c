// Write a program that interchanges the odd and even elements of
// an array.

#include <stdio.h>

void swap(int * a, int * b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void interchange(int *arr,const int size) {
    for(int i = 0; i < size; i+=2) {
        if(i + 1 >= size) return;
        swap(arr + i, arr + i + 1);
    }
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
    interchange(arr, size);
    printf("The array after interchange is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}