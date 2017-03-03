


/*
    this source code is for finde the x's factor in rangr(1, x - 1)
*/

#include <stdio.h>

int main()
{
    int x, i;
    x = 100;
    for (i = 1; i < x; ++ i){
        if(x % i == 0){
            printf("%4d", i);
        }
    }
    printf("\n");
    return 0;
}
