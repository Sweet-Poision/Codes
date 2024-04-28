// The X and Y coordinates of 10 different points are entered through
// the keyboard. Write a program to find the distance of last point
// from the first point (sum of distances between consecutive points).

#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2) {
    int x = x2 - x1;
    int y = y2 - y1;
    return sqrt(x * x + y * y);
}

int main() {
    int xy[10][2];
    double distance = 0.0;
    printf("Enter ten coordinates x and y: \n");
    for (int i = 0; i < 10; i++) {
        scanf("%d %d", &xy[i][0], &xy[i][1]);
    }

    for(int i = 0; i < 9; ++i) {
        distance += calcDis((xy[i][0], xy[i][1], xy[i+1][0], xy[i+1][1]));
    }

    printf("Total Distance : %f\n", distance);

}