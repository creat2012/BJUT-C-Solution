
/*
    this source code is for finding the prime number range(1,100)

*/


#include <stdio.h>

#define MAX 100

int isPrime(int x)
{
    int i;
    if(x < 2) return 0;
    for(i = 2; i * i <= x && x  % i != 0; ++ i);
    if(i * i > x) return 1;
    else return 0;
}

int main()
{
    int cnt = 0, i;
    for(i = 1; i <= MAX; ++ i){
        if(isPrime(i)){
            printf("%d ", i);
            ++ cnt;
            if(cnt % 5 == 0) printf("\n");
        }
    }
    return 0;
}
