// Write a program to generate all Pythogorean Triplets with side
// length less than or equal to 30.

#include <stdio.h>
#include <math.h>

int main() {
    for (int a = 1; a <= 30; a++) {
        for (int b = 1; b <= 30; b++) {
            for (int c = 1; c <= 30; c++) {
                if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
                    printf("%d %d %d\n", a, b, c);
                }
            }
        }
    }
    return 0;
}