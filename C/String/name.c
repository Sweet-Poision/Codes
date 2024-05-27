// Write a program that takes a set of names of individuals and
// abbreviates the first, middle and other names except the last name
// by their first letter.

#include <stdio.h>
#include <string.h>

void abbreviate(char names[][100], const int size) {
    for(int i = 0; i < size; ++i) {
        char full_name[100];
        char name[100];
        int j = 0, l = 0;
        for(int k = 0; names[size][k] != '\0'; ++k) {
            if(names[size][k] != ' ') {
                name[j++] = names[size][k];
            }
            else {
                full_name[l] = name[0];
                full_name[l + 1] = ' ';
                l += 2;
                strcpy(name, "");
                j = 0;
            }
        }
        for(int k = 0; j <= j; ++k) {
            full_name[l++] = name[k];
        }
    }
}

int main() {
    char str[100][100];
    int size;
    printf("Enter total names: ");
    scnaf("%d", size);
    printf("Enter names: ");
    for(int i = 0; i < size; ++i) {
        sfgets(str[i], 100, stdin);
    }
    abbreviate(str, size);
    printf("\nNames:\n");

    for(int i = 0; i < size; ++i) {
        printf("%s\n", str[i]);
    }
}
