//  Write a program that will read a line and delete from it all
// occurrences of the word ‘the’.

#include <stdio.h>
#include <string.h>

void remove(char *c, int len) {
    int i, j;
    for (i = 0; i < len; i++) {
        if (strncmp(c + i, "the", 3) == 0) {
            for (j = i; j < len; j++) {
                c[j] = c[j + 3];
            }
        }
    }
    c[len - 3] = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    remove(str, 100);
    printf("New string is \n%s", str);

}