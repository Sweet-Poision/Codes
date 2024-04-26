// A machine is purchased which will produce earning of Rs. 1000 per
// year while it lasts. The machine costs Rs. 6000 and will have a
// salvage value of Rs. 2000 when it is condemned. If 9 percent per
// annum can be earned on alternate investments, write a program to
// determine what will be the minimum life of the machine to make it
// a more attractive investment compared to alternative investment?

#include <stdio.h>

int main() {
    int price = 6000;
    int salvage = 2000;
    int earning;
    double machine=0, alternate=0;
    printf("Enter annual income: ");
    scanf("%d", &earning);
    double alternate_benifit = earning * 0.09;
    for(int i = 1; ; ++i) {
        alternate += earning + alternate_benifit;
        machine += earning + 1000;
        if(machine > alternate) {
            printf("%d minimum year invcestment is best for machine\n", i);
        }
    }
}