// For the following set of n data points (x, y), compute the correlation
// coefficient r, 

#include <stdio.h>
#include <math.h>

int main() {
    double arr[][5] = {
        {34.22, 102.43, 0.0, 0.0, 0.0},
        {39.87, 100.93, 0.0, 0.0, 0.0},
        {41.85, 97.43, 0.0, 0.0, 0.0},
        {43.23, 97.81, 0.0, 0.0, 0.0},
        {40.06, 98.32, 0.0, 0.0, 0.0},
        {53.29, 98.32, 0.0, 0.0, 0.0},
        {53.29, 100.07, 0.0, 0.0, 0.0},
        {54.14, 97.08, 0.0, 0.0, 0.0},
        {49.12, 91.59, 0.0, 0.0, 0.0},
        {40.71, 94.85, 0.0, 0.0, 0.0},
        {55.15, 94.65, 0.0, 0.0, 0.0}
    };
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; ++i) {
        arr[i][2] = arr[i][0] * arr[i][0];
        arr[i][3] = arr[i][1] * arr[i][1];
        arr[i][4] = arr[i][0] * arr[i][1];
    }
    double sum_x = 0.0, sum_y = 0.0, sum_x2 = 0.0, sum_y2 = 0, sum_xy = 0.0;
    for(int i = 0; i < size; ++i) {
        sum_x += arr[i][0];
        sum_y += arr[i][1];
        sum_x2 += arr[i][2];
        sum_y2 += arr[i][3];
        sum_xy += arr[i][4];
    }

    double numerator = sum_xy - (sum_x * sum_y);
    double denom_1 = ((double)size * sum_x2) - (sum_x * sum_x);
    double denom_2 = ((double)size * sum_y2) - (sum_y * sum_y);
    double denominator = sqrt(denom_1 * denom_2);
    double ans = numerator / denominator;
    printf("Correlation Factor = %f\n", ans);
}