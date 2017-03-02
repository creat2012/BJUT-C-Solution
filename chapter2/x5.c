

/*
    this source code is for returing the days of given month
*/


#include <stdio.h>

int month_day[] = {0, 31, 28, 31, 30, 31 ,30, 31, 31, 30, 31, 30, 31};
//                 0  1   2   3   4   5   6   7   8   9   0   1   2

int isLeapYear(int year)
{
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}


int getdays(int year, int month)
{
    if(month == 2 && isLeapYear(year))
        return month_day[month] + 1;
    return month_day[month];
}
int main()
{
    int year, month;
    printf("please input the year and the month:(use blank)\n");
    scanf("%d %d", &year, &month);
    printf("days:%d", getdays(year, month));
    return 0;
}
