


/*
    this source code is for findding the prime number range[1, 1000]
*/

#include <stdio.h>

#define NUM 1000

int isPrime(int x)
{
    int i;
    if(x < 2) return 0;
    for(i = 2; i * i < x  && x % i != 0; ++ i);
    return i * i > x;
}

int main()
{
    int i, cnt = 0;
    for(i = 1; i <= NUM; ++ i){
        if(isPrime(i)){
            printf("%4d", i);
            ++ cnt;
            if(cnt % 8 == 0)
                printf("\n");
        }
    }
    return 0;
}
