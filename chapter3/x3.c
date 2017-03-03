


/*
    this source code is for 韩信点兵
*/

#include <stdio.h>

int main()
{
    int i, num;
    for(i = 1; ; ++ i){
        num = 11 * i + 10;
        if(num % 5 == 1 && num % 6 == 5 && num % 7 == 4){
            printf("the number of the soidler: %d\n", num);
            break;
        }
    }
    return 0;
}
