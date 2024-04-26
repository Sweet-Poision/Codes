// Write a program to print 24 hours of day with suitable suffixes like
// AM, PM, Noon and Midnight.

#include <stdio.h>

int main() {
    int hour = 12, dur = 0;
    for(int i = 0; i <24; ++i, hour++) {
        int current_hour = ((hour-1) % 12) + 1;
        for(int j = 0; j < 60; ++j) {

            printf("%02d : %02d", current_hour, j);
            if(current_hour == 12 && j == 0 && dur == 0) {
                printf(" Midnight\n");
            }
            else if(current_hour == 12 && j == 0 && dur == 1) {
                printf(" Noon\n");
            }
            else if(dur == 0) {
                printf(" AM\n");
            }
            else if(dur == 1) {
                printf(" PM\n");
            }
        }
        if(i == 11) dur = 1;
    }
}