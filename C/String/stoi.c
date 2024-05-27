// Write a program that converts a string like "124" to an integer 124.

#include <stdio.h>
#include <string.h>

int string_to_int(const char *str, const int len) {
    int num = 0;
    for (int i = 0; i < len; i++) {
        num = num * 10 + str[i] - '0';
    }
    return num;
}

int main() {
    char str[11];
    int num, len;
    
    printf("Enter a string to convert to integer: ");
    scanf("%s", str);
    len = strlen(str);
    num = string_to_int(str, len);
    printf("%d", num);
    return 0;
}