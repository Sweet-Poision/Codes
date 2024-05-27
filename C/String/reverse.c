// Write a program to reverse the strings stored in the following array
// of pointers to strings:
// char *s[ ] = {
// "To err is human...",
// "But to really mess things up...",
// "One needs to know C!!"
// } ;

#include <stdio.h>
#include <string.h>


int main() {
    char *s[ ] = {
        "To err is human...",
        "But to really mess things up...",
        "One needs to know C!!"
    };

    int i;
    for (i = 0; i < 3; i++) {
        printf("%s\n", s[i]);
    }

    for (i = 0; i < 3; i++) {
        int len = strlen(s[i]);
        int j;
        for (j = 0; j < len / 2; j++) {
            char tmp = s[i][j];
            s[i][j] = s[i][len - j - 1];
            s[i][len - j - 1] = tmp;
        }
    }

    for (i = 0; i < 3; i++) {
        printf("%s\n", s[i]);
    }

    return 0;
}