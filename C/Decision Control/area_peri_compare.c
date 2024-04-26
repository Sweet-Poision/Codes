#include <stdio.h>

int main() {
    int l, b;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &l, &b);
    int area = (l + b);
    int perimeter = 2 * (l + b);
    if(area < perimeter) {
        printf("Area is less than perimeter\n");
    }
    else if(area > perimeter) {
        printf("Area is greater than perimeter\n");
    }
    else {
        printf("Area is equal to perimeter\n");
    }
}