// Write a program to find the grace marks for a student using switch.
// The user should enter the class obtained by the student and the
// number of subjects he has failed in. Use the following logic:
//  If the student gets first class and the number of subjects he
// failed in is greater than 3, then he does not get any grace.
// Otherwise the grace is of 5 marks per subject.
//  If the student gets second class and the number of subjects he
// failed in is greater than 2, then he does not get any grace.
// Otherwise the grace is of 4 marks per subject.
//  If the student gets third class and the number of subjects he
// failed in is greater than 1, then he does not get any grace.
// Otherwise the grace is of 5 marks.

#include <stdio.h>

int main() {
    int class, fail_subjects, grace;
    printf("Enter class of the student: ");
    scanf("%d", &class);
    printf("Enter number of subject student failed: ");
    scanf("%d", &fail_subjects);
    switch (class) {
        case 1: 
            grace = (fail_subjects > 3)?0:5;
            break;
        case 2: 
            grace = (fail_subjects > 2)?0:4;
            break;
        case 3:
            grace = (fail_subjects > 1)? 0:5;
            break;
        default:
            grace = 0;
            break;
    }
    printf("Grace = %d per subject.\n", grace);
}