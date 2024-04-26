#include <stdio.h>

int main() {
    int a ,b, ans = 1;
    printf("Enter x and y for x^y: ");
    scanf("%d %d", &a, &b);
    for(int i = 0 ; i < b; ++i) {
        ans *= a;
    }
    printf("%d^%d = %d\n", a, b, ans);
}