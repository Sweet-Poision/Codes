// Write a program for this pattern
//     1 
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1 

#include <stdio.h>

int main() {
    int n = 6; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" "); 
        }
        int current_value = 1; 
        for (int j = 0; j <= i; j++) {
            printf("%d ", current_value); 

            if (j < i) {
                current_value = current_value * (i - j) / (j + 1);
            }
        }
        printf("\n");
    }

    return 0;
}
