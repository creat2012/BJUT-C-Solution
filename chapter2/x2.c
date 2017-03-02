

#include <stdio.h>

/*
    this source code is for finding the number which is can be devided 5 and 7
    and the number is from 1 to 1000
 
*/
int main()
{
    int i;
    for(i = 1; i <= 1000; ++ i){
        if(i % 3 == 0 && i % 7 == 0)
            printf("%5d", i);
    }
    return 0;
}
