// A dequeue is an ordered set of elements in which elements may be
// inserted or retrieved from either end. Using an array simulate a
// dequeue of characters and the operations retrieve left, retrieve
// right, insert left, insert right. Exceptional conditions such as
// dequeue full or empty should be indicated. Two pointers (namely,
// left and right) are needed in this simulation.

#include <stdio.h>

#define DEQUEUE_SIZE 100

int LEFT, RIGHT, FLAG=0;
char DEQUEUE[DEQUEUE_SIZE];

void init_dequeue() {
    LEFT = 50;
    RIGHT = 50;
    FLAG = 1;
}

void insert_left(int num) {
    if(FLAG == 0) {
        printf("Dequeue not initialized\n");
        return;
    }
    if( LEFT == -1) {
        printf("Dequeue is full\n");
        return;
    }
    DEQUEUE[LEFT] = num;
    LEFT--;
}

void insert_right(int num) {
    if(FLAG == 0) {
        printf("Dequeue not initialized\n");
        return;
    }
    if( RIGHT == 100) {
        printf("Dequeue is full\n");
        return;
    }
    DEQUEUE[RIGHT] = num;
    RIGHT++;
}

void retrieve_left() {
    if(FLAG == 0) {
        printf("Dequeue not initialized\n");
        return;
    }
    if(LEFT == RIGHT) {
        printf("Dequeue is empty\n");
        return;
    }
    printf("%d\n", DEQUEUE[LEFT+1]);
    LEFT++;
}

void retrieve_right() {
    if(FLAG == 0) {
        printf("Dequeue not initialized\n");
        return;
    }
    if(LEFT == RIGHT) {
        printf("Dequeue is empty\n");
        return;
    }
    printf("%d\n", DEQUEUE[RIGHT-1]);
    RIGHT--;
}

int main() {
    init_dequeue();
    insert_left(1);
    insert_left(2);
    insert_left(3);
    insert_right(4);
    insert_right(5);
    insert_right(6);
    retrieve_left();
    retrieve_left();
    retrieve_left();
    retrieve_right();
    retrieve_right();
    retrieve_right();
    insert_left(7);
    insert_left(8);
    insert_left(9);
    insert_right(10);
    insert_right(11);
    insert_right(12);
    retrieve_left();
    retrieve_left();
    retrieve_left();
    retrieve_right();
    retrieve_right();
    retrieve_right();
    insert_left(13);
    insert_left(14);
    insert_left(15);
    insert_right(16);
    insert_right(17);
}