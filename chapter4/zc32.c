

/*
    this source code is for changing the time format
*/

#include <stdio.h>
#include <string.h>
#define MAX 20


char Month[MAX][MAX] = {"Zre", "Jan", "Fab", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

void change(char *s)
{
    int year, day, month, k;
    char *p;
    p = s + strlen(s) - 1; k = 1; year = 0; day = 0; month = 0;
    while(*p != '/'){
        year = year + (*p - '0') * k;
        k = k * 10;
        -- p;
    }
    k = 1; -- p;
    while(*p != '/'){
        day = day + (*p - '0') * k;
        k = k * 10;
        -- p;
    }
    k = 1; -- p;
    while(p != s - 1){
        month = month + (*p - '0') * k;
        k = k * 10;
        -- p; 
    }
    printf("%s,%d,%d\n", Month[month], day, year);
}
int main()
{
    char day[MAX];
    printf("please input the day: (XX/XX/XXXX) : ");
    scanf("%s", day);
    change(day);
    return 0;
}
