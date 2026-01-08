#include<stdio.h>

struct date
{
    int dd;
    int mm;
    int year;
};

struct student
{
    char day[15];
    struct date doj;
};

struct student s1 = {"Tuesday", {25, 11, 2025}};

int main()
{
    printf("Today is %s\n", s1.day);
    printf("And today's date is %d %d %d\n", s1.doj.dd, s1.doj.mm, s1.doj.year);
    return 0;
}
