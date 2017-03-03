
/*
    this source code is for computing the n!
*/

#include <stdio.h>

#define N 8

int main()
{
    long i, fact;
    fact = 1;
    for(i = 2; i <= N; ++ i){
        fact = fact * i;
    }
    printf("%d!=%ld\n", N, fact);
    return 0;
}
