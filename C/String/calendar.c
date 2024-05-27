// Develop a program that receives the month and year from the
// keyboard as integers and prints the calendar in the following
// format.

/*
April 2018
Mo Tu We Th Fr Sa Su
1  2  3  4  5  6  7
8  9 10 11 12 13 14
15 16 17 18 19 20 21
22 23 24 25 26 27 28
29 30 
*/

#include <stdio.h>
#include <string.h>

#define PRINT_LINE printf("_______________________________________________\n")

void input(int *, int *);
void print_calendar(const int, const int);
int get_first_day(const int,const int);
int is_leap_year(const int);
void print_header(const char *, const int, const int);

void print_header(const char * month, const int len, 
    const int year) {
    int i;
    const int total_space = 47;
    const int string_length = len + 5;
    const int position = (total_space - string_length) / 2;
    for(i = 0; i < position; ++i) {
        printf(" ");
    }
    printf("%s %d\n", month, year);
}

int is_leap_year(const int year) {
    return (!year%400 && !year%100) || (year%100 && !year%4);
}

int get_first_day(const int year, const int month) {
    //Zeller's Rule
    int m, d, c;
    m = (month - 3)%12 + 1;
    d = year % 100;
    c = year / 100;
    return (1 + ((13 * m - 1)/ 5) + d + (d / 4) + (c / 4) - 2 * c) % 7;
}

void print_calendar(const int month, const int year) {
    int i, j, month_total_day, first_day;
    const char *MONTHS[] = {    "January",
                                "February",
                                "March",
                                "April",
                                "May",
                                "June",
                                "July",
                                "August",
                                "September",
                                "October",
                                "November",
                                "December" 
                            };
    const char *DAYS[] = {  "Sun",
                            "Mon",
                            "Tue",
                            "Wed",
                            "Thu",
                            "Fri",
                            "Sat"
                        };
    const int DAY[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if(is_leap_year(year) && month == 2) {
        month_total_day = 29;
    }
    else {
        month_total_day = DAY[month-1];
    }
    first_day = get_first_day(year, month); 

    PRINT_LINE;
    print_header(MONTHS[month-1], strlen(MONTHS[month-1]), year);
    PRINT_LINE;
    for(i = 0; i < 7; ++i) {
        printf("  %s  ", DAYS[i]);
    }
    printf("\n");
    i = 1;
    for(j = 0; j < first_day; ++j) {
            printf("       ");
    }
    j = first_day;
    while(i <= month_total_day) {
        
        printf("  %3d  ", i);
        
        j++;
        i++;
        if(j == 7) {
            printf("\n");
            j = 0;
        }
    }
    printf("\n");
    PRINT_LINE;
    
}

void input(int *month, int * year) {
    printf("Enter Month: ");
    scanf("%d", month);
    printf("Enter Year: ");
    scanf("%d", year);
}

int main() {
    int month, year;

    input(&month, &year);
    print_calendar(month, year);
}