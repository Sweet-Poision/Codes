#include <stdio.h>

int main() {
    int ram, shyam, ajay;
    printf("Enter age of Ram: ");
    scanf("%d", &ram);
    printf("Enter age of Shyam: ");
    scanf("%d", &shyam);
    printf("Enter age of Ajay: ");
    scanf("%d", &ajay);

    if (ram < shyam && ram < ajay) {
        printf("Ram is youngest\n");
    }
    else if (shyam < ram && shyam < ajay) {
        printf("Shyam is youngest\n");
    }
    else {
        printf("Ajay is youngest\n");
    }
}