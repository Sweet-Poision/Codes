// Twenty-five numbers are entered from the keyboard into an array.
// The number to be searched is entered through the keyboard by the
// user. Write a program to find if the number to be searched is
// present in the array and if it is present, display the number of times
// it appears in the array.


#include <stdio.h>

#define SIZE 25

void input(int *arr) {
    printf("Enter %d numbers\n ", SIZE);
    for(int i = 0; i < SIZE; ++i) {
        scanf("%d", arr + i);
    }
}

int count(int key, int *arr) {
    int count = 0;
    for(int i = 0; i < SIZE; ++i) {
        if(arr[i] == key) {
            ++count;
        }
    }
    return count;
}

int main() {
    int arr[SIZE], key;
    input(arr);
    printf("Enter number to search: ");
    scanf("%d", &key);
    int count = search(key, arr);
}