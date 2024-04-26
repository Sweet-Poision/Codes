#include <stdio.h>

int main() {
    double distance;
    printf("Enter distance in Kilometers : ");
    scanf("%lf", &distance);
    double meter, feet, inch, centimeter;
    meter = distance * 1000;
    feet = distance * 3280.84;
    inch = distance * 39370.1;
    centimeter = distance * 100000;
    pritnf("Distance in meters = %f\n", meter);
    pritnf("Distance in inch = %f\n", inch);
    pritnf("Distance in feet = %f\n", feet);
    pritnf("Distance in centimeters = %f\n", centimeter);
}