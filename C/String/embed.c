//  Write a program that uses an array of pointers to strings str[ ].
// Receive two strings str1 and str2 and check if str1 is embedded in
// any of the strings in str[ ]. If str1 is found, then replace it with str2.
// char *str[ ] = {
// "We will teach you how to...",
// "Move a mountain",
// "Level a building",
// "Erase the past",
// "Make a million",
// "...all through C!"
// };

#include <stdio.h>
#include <string.h>

#define MAX 50

int main() {
    char * str[] = {
        "We will teach you how to...",
        "Move a mountain",
        "Level a building",
        "Erase the past",
        "Make a million",
        "...all through C!"
    };
    char str1[MAX], str2[MAX];
    printf("Enter two strings str1 and str2:\n");
    scanf("%s %s", str1, str2);
    for(int i = 0; i < 6; ++i) {
        if(strstr(str[i], str1)!= NULL) {
            strcpy(str[i], str2);
        }
    }
    printf("New string array: \n");
    for(int i = 0; i < 6; ++i) {
        printf("%s\n", str[i]);
    }
}