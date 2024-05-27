// Write a program to delete all vowels from a sentence. Assume that
// the sentence is not more than 80 characters long.

#include <stdio.h>
#include <string.h>

int isVowel(const char c) {
    return (c == 'a' || c == 'A' || c == 'e'  || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U');
}

int main() {
    char str[81], temp[81];
    int i = 0, j = 0;
    printf("Enter a  string to remove all vowels : ");\
    scanf("%s", str);
    for(i = 0; i < strlen(str); ++i) {
        if(!isVowel(str[i])) {
            temp[j++] = str[i];
        }
    }
    strcpy(str, temp);
    printf("New string is:\n%s\n", str);

}