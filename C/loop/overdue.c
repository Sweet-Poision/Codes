#include <stdio.h>

int main() {
    int workhour;
    for(int i = 0; i < 10; ++i) {
        printf("Enter work hour of employee %d : ", i + 1);
        scanf("%d", &workhour);
        if(workhour > 40) {
            int overtime = (workhour - 40) * 12;
            printf("Overtime pay of employee = %d", overtime);
        }
        else {
            printf("Overtime pay of employee = 0");
        }
    }
}