// Write a program for a matchstick game being played between the
// computer and a user. Your program should ensure that the
// computer always wins. Rules for the game are as follows:
//  There are 21 matchsticks.
//  The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
//  After the person picks, the computer does its picking.
//  Whoever is forced to pick up the last matchstick loses the game.

#include <stdio.h>

int main() {
    int matchsticks = 21, choice;
    while(matchsticks > 0) {
        printf("There are %d matchsticks.\n", matchsticks);
        printf("User : Select number of matchstick 1, 2, 4 or 4: ");
        scanf("%d", &choice);
        matchsticks -= choice;
        if(matchsticks == 0) {
            printf("Computer WON!\n");
            break;
        }
        printf("Computer : selected %d matchstick\n", 5-choice);
        matchsticks -= 5-choice;
    }
}