// Very often in fairs we come across a puzzle that contains 15
// numbered square pieces mounted on a frame. These pieces can be
// moved horizontally or vertically.

#include <stdio.h>
#include <stdlib.h>

#define SIZE 4
#define LINE "\n_____________________\n"

#ifdef _WIN32
#define CLEAR system("cls")
#else
#define CLEAR system("clear")
#endif

void draw_board(const int (*arr)[SIZE]) {
    printf(LINE);
    for (int i = 0; i < SIZE; ++i) {
        printf("| ");
        for (int j = 0; j < SIZE; ++j) {
            if (arr[i][j] == 0)
                printf("   | ");
            else
                printf("%02d | ", arr[i][j]);
        }
        printf(LINE);
    }
}

char input(int (*arr)[SIZE]) {

    char in;
    while (1) {
        fflush(stdin);
        printf("\nPress a key to move the box: ");
        printf("\nW : move up\nS: move down\nA: move left\nD: move right\n\nYour input: ");
        scanf("%c", &in);
        if (in == 'w')
            in = 'W';
        else if (in == 's')
            in = 'S';
        else if (in == 'a')
            in = 'A';
        else if (in == 'd')
            in = 'D';
        if (in == 'W' || in == 'S' || in == 'A' || in == 'D')
            break;
        else
        {
            CLEAR;
            printf("\nInvalid Input: ");
            draw_board(arr);
        }
    }
    return in;
}

int isValid(const char c, const int x, const int y) {
    if (c == 'S' && x == 0)
        return 0;
    if (c == 'W' && x == SIZE - 1)
        return 0;
    if (c == 'D' && y == 0)
        return 0;
    if (c == 'A' && y == SIZE - 1)
        return 0;
    return 1;
}

void move(const char choice, int (*arr)[SIZE], int *x, int *y, int *moves) {
    switch (choice) {
        case 'S':
            arr[(*x)][(*y)] = arr[(*x) - 1][(*y)];
            arr[(*x) - 1][(*y)] = 0;
            (*x)--;
            break;
        case 'W':
            arr[(*x)][(*y)] = arr[(*x) + 1][(*y)];
            arr[(*x) + 1][(*y)] = 0;
            (*x)++;
            break;
        case 'D':
            arr[(*x)][(*y)] = arr[(*x)][(*y) - 1];
            arr[(*x)][(*y) - 1] = 0;
            (*y)--;
            break;
        case 'A':
            arr[(*x)][(*y)] = arr[(*x)][(*y) + 1];
            arr[(*x)][(*y) + 1] = 0;
            (*y)++;
            break;
    }
    (*moves)++;
}

int win(int (*arr)[SIZE]) {
    int checkValue = 1;
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            if (i == SIZE - 1 && j == SIZE - 1)
                break;
            if (arr[i][j] != checkValue)
                return 0;
            checkValue++;
        }
    }
    return 1;
}

int main() {
    int arr[SIZE][SIZE] = {{1, 4, 15, 7}, {8, 10, 2, 11}, {14, 3, 6, 13}, {12, 9, 5, 0}};
    int moves = 0, x = 3, y = 3;

    while (1) {
        if (win(arr)) {
            CLEAR;
            draw_board(arr);
            printf("You won in %d moves.\n", moves);
            break;
        }

        CLEAR;
        draw_board(arr);
        char choice = input(arr);
        if (isValid(choice, x, y))
        {
            move(choice, arr, &x, &y, &moves);
        }
    }
}