


#include <stdio.h>

/*
    this source code is for judging the given year is leap year or not
*/

int isLeapYear(int year)
{
    return year % 4 == 0&& year % 100 != 0 || year % 400 == 0;
}
int main()
{
    int year;
    printf("please input the year:\n");
    scanf("%d", &year);
    if(isLeapYear(year))
        puts("this year is the leap year");
    else
        puts("this year is not the leap year");
}
