#include <stdio.h>

int main() {
    int l = 1189, b = 841, temp;;
    printf("A0 = %d x %d\n", l, b);
    temp = l;
    b = l/2;
    l = b;
    printf("A1 = %d x %d\n", l, b);
    temp =  l;
    b = l/2;
    l = b;
    printf("A2 = %d x %d\n", l, b);
    temp =  l;
    b = l/2;
    l = b;
    printf("A3 = %d x %d\n", l, b);
    temp =  l;
    b = l/2;
    l = b;
    printf("A4 = %d x %d\n", l, b);
    temp =  l;
    b = l/2;
    l = b;
    printf("A5 = %d x %d\n", l, b);
    temp =  l;
    b = l/2;
    l = b;
    printf("A6 = %d x %d\n", l, b);
    temp =  l;
    b = l/2;
    l = b;
    printf("A7 = %d x %d\n", l, b);
    temp =  l; 
    b = l/2;
    l = b;
    printf("A8 = %d x %d\n", l, b);
}