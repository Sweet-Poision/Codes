// Write a menu driven program which has following options:
// 1. Factorial of a number
// 2. Prime or not
// 3. Odd or even
// 4. Exit
// Once a menu item is selected the appropriate action should be
// taken and once this action is finished, the menu should reappear.
// Unless the user selects the ‘Exit’ option the program should
// continue to run.


#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    while(choice != 4) {
        printf("Enter 1 to find factorial\n"
                "Enter 2 to Check Prime\n"
                "Enter 3 to check Odd or even\n"
                "Enter 4 to Exit program\n: ");
        scanf("%d", &choice);
        fflush(stdin);
        switch(choice) {
            case 1:
                {
                long long int fact = 1, num;
                printf("Enter number to find factorial: ");
                scanf("%lld", &num);
                for(int i = 1; i <= num; ++i) {
                  fact *= i;  
                }
                printf("Factorial of %lld is %lld\n", num, fact);
                break;
                }
            case 2:
                {
                int num, found = 0;
                printf("Enter number to check if its prime: ");
                scanf("%d", &num);
                for(int i = 2; i <= sqrt(num); ++i) {
                    if(num % i == 0) {
                        found = 1;
                        break;
                    }
                }
                if(found) {
                    printf("%d is not a Prime Number\n", num);
                }
                else {
                    printf("%d is a Prime Number\n", num);
                }
                break;
                }
            case 3:
                {
                int num;
                printf("Enter Number to check Odd or Even: ");
                scanf("%d", &num);
                if(num & 1) {
                    printf("%d is Odd Number.\n", num);
                }
                else {
                    printf("%d is Even Number.\n", num);
                }
                break;
                }
            case 4:
                break;
            default:
                printf("Invalid Input\n");
        }
    }
}