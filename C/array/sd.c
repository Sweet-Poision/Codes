// For the following set of sample data, compute the standard
// deviation and the mean.
// -6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2

#include <stdio.h>

int main() {
    int data[] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
    int sum = 0, i, size = sizeof(data)/sizeof(int);

    for (i = 0; i < size; i++) {
        sum += data[i];
    }

    double mean = (double)sum / size;

    double square = 0;
    for (i = 0; i < size; i++) {
        square += (data[i] - mean) * (data[i] - mean);
    }

    double standard_deviation = square / size;
}