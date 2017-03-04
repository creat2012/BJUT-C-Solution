

/*
    this source code is for changing the format of time
*/

#include <stdio.h>

int main()
{
    char time[] = "10:50:27";
    int hour, minute, second;
    
    hour = (time[0] - '0') * 10 + time[1] - '0';
    minute = (time[3] - '0') * 10 + time[4] - '0';
    second = (time[6] - '0') * 10 + time[7] - '0';
    
    printf("the time is: %d hours, %d minutes, %d seconds\n", hour, minute, second);
    return 0;
}
