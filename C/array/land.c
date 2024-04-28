// The area of a triangle can be computed by the sine law when 2
// sides of the triangle and the angle between them are known.
// Area = (1 / 2 ) ab sin ( angle )
// Given the following 6 triangular pieces of land, write a program to
// find their area and determine which is largest.

#include <stdio.h>
#include <math.h>

int main() {
    double land[6][4] = {
        {137.4, 80.9, 0.78, 0.0},
        {155.2, 92.62, 0.89, 0.0},
        {149.3, 97.93, 1.35, 0.0},
        {160.0, 100.25, 9.00, 0.0},
        {155.6, 68.95, 1.25, 0.0},
        {149.7, 120.0, 1.75, 0.0}
    };

    for(int i = 0; i < 6; ++i) {
        land[i][3] = (land[i][0] * land[i][1] * sin(land[i][2])) / 2;
    }
    double max = land[0][3];
    int index = 0;
    for(int i = 1; i < 6; ++i) {
        if(land[i][3] > max) {
            max = land[i][3];
            index = i;
        }
    }

    printf("Plot %d is largest with area %f\n", index+1, max);
}