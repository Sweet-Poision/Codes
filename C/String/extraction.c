// Write a program that extracts part of the given string from the
// specified position. For example, if the sting is "Working with strings
// is fun", then if from position 4, 4 characters are to be extracted
// then the program should return string as "king". If the number of
// characters to be extracted is 0 then the program should extract
// entire string from the specified position.

#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main() {
    char buf[1024], ext[1024];
    int pos, len;
    printf("Enter a string : ");
    fgets(buf, 1024, stdin);
    printf("Enter the position and range of characters to extract: ");
    scanf("%d%d", &pos, &len);
    strncpy(ext, buf + pos, len);
    printf("Extracted string: %s\n", ext);
    
}