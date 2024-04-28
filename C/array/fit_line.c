// For the following set of point given by (x, y) fit a straight line given
// by y = a + bx

#include <stdio.h>
#include <math.h>

int main() {
    double arr[][4] = {
        {3.0, 1.5, 0.0, 0.0},
        {4.5, 2.0, 0.0, 0.0},
        {5.5, 3.5, 0.0, 0.0},
        {6.5, 5.0, 0.0, 0.0},
        {7.5, 6.0, 0.0, 0.0},
        {8.5, 7.0, 0.0, 0.0},
        {8.0, 9.0, 0.0, 0.0},
        {9.0, 10.5, 0.0, 0.0},
        {9.5, 12.0, 0.0, 0.0},
        {10.0, 14.0, 0.0, 0.0}
    };

    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; ++i) {
        arr[i][2] = arr[i][0] * arr[i][0];
        arr[i][3] = arr[i][0] * arr[i][1];
    }
    double sum_x = 0.0, sum_y = 0.0, sum_xy = 0.0, sum_x2 = 0.0;
    for(int i = 0; i < size; ++i) {
        sum_x += arr[i][0];
        sum_y += arr[i][1];
        sum_xy += arr[i][2];
        sum_x2 += arr[i][2];
    } 

    double avg_x = sum_x/size;
    double avg_y = sum_y/size;
    double b_numerator = size * sum_xy - sum_x * sum_y;
    double b_denominator = size * sum_x2 - sum_x * sum_x;
    double b = b_numerator / b_denominator;
    double a = avg_y - b * avg_x;
    printf("Equation : y = %f + %fx\n", a, b);

}