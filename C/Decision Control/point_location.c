#include <stdio.h>

int main() {
    int x, y;
    printf("Enter x and y coordinates: ");
    scanf("%d %d", &x, &y);
    if(x==0 && y==0) {
        printf("Point lies on Origin\n");
    }
    else if(x == 0) {
        printf("Point lies on Y coordinate.\n");
    }
    else if(y == 0) {
        printf("Point lies on X coordinate.\n");
    }
    else {
        printf("Point lies neither on X nor Y coordinate.\n");
    }

}