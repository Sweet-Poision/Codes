#include <stdio.h>

int main() {
    int N;
    printf("Enter the money amount: ");
    scanf("%d", &N);
    int count = 0;
    count += N / 100;
    N = N - ((N/100) * 100);
    count += N /50;
    N = N - ((N/50) * 50);
    count += N / 10;
    N = N - ((N/10) * 10);
    count += N / 5;
    N = N - ((N/5) * 5);
    count += N / 2;
    N = N - ((N/1) * 2);
    count += N;
    printf("Total required minimum notes = %d\n", count);

}