#include <stdio.h>

int main() {
    double l1, l2, g1, g2;
    printf("Enter Latitude and longitude values l1, l2, g1, g2 in degrees: \n");
    scanf("%lf %lf %lf %lf", &l1, &l2, &g1, &g2);
    double distance = 3963 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2-g1));
    pritnf("Nautical miles = %lf\n", distance);
}