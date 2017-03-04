

/*
    this source code is for findding the first 20 fibonaci number
*/

#include <stdio.h>

#define NUM 20
int main()
{
    int fib[NUM];
    int i;
    fib[0] = 0;
    fib[1] = 1;
    for(i = 2; i < NUM; ++ i)
        fib[i] = fib[i - 1] + fib[i - 2];
    for(i = 0; i < NUM; ++ i){
        if(i % 10 == 0) printf("\n");
        else printf("%6d", fib[i]);
    }
    printf("\n");
    return 0;
}

