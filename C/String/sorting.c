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
    char tmp[3][100];

    int i;
    for (i = 0; i < 3; i++) {
        printf("%s\n", s[i]);
    }

    for (i = 0; i < 3; i++) {
        int j, length;
        strcpy(tmp[i], s[i]);
        length = strlen(tmp[i]);
        for(j = 0; j < length/2; ++j) {
            char temp = tmp[i][j];
            tmp[i][j] = tmp[i][length - j - 1];
            tmp[i][length - j - 1] = temp;
            
            
        }
        s[i] = tmp[i];
    }

    for (i = 0; i < 3; i++) {
        printf("%s\n", s[i]);
    }

    return 0;
}