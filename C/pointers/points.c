// Write a function to compute the distance between two points and
// use it to develop another function that will compute the area of the
// triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3). Use
// these functions to develop a function which returns a value 1 if the
// point (x, y) lines inside the triangle ABC, otherwise returns a value
// 0.

#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2, double * side) {
    *side = sqrt((double)(x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
}

void area_triangle(int x1, int x2, int y1, int y2, int x3, int y3, double * area) {
    double a, b, c;
    distance(x1, y1, x2, y2, &a);
    distance(x2, y2, x3, y3, &b);
    distance(x3, y3, x1, y1, &c);
    double s = (a + b + c) / 2;
    *area = sqrt(s * (s-a) * (s-b) * (s-c));
}

int checkPoint(int x, int y, int x1, int y1, int x2, int y2, int x3, int y3) {
    double area, area1, area2, area3;

    area_triangle(x,y,x1,y1,x2,y2, &area1);
    area_triangle(x,y,x2,y2,x3,y3, &area2);
    area_triangle(x,y,x3,y3,x1,y1, &area3);
    area_triangle(x3,y3,x1,y1,x2,y2, &area);

    if(area1 + area2 + area3 == area) return 1;
    return 0;
}


int main() {
    int x1, x2, x3, x, y1, y2, y3, y;
    printf("Enter points of triangle:\n");
    printf("Enter first (x, y): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter second (x, y): ");
    scanf("%d %d", &x2, &y2);
    printf("Enter third (x, y): ");
    scanf("%d %d", &x3, &y3);
    printf("Enter x, y point to check if its inside the triangle: ");
    scanf("%d %d", &x, &y);

    int point = checkPoint(x,y,x1,y1,x2,y2,x3,y3);
    if(point) printf("Inside triangle\n");
    else printf("Outside triangle\n");

}