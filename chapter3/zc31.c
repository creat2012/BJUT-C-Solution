


/*
    this source code is for  finding the integer's factors and the factor is prime number
*/



#include <stdio.h>


int isPrime(int x)
{
    int i;
    if(x < 2) return 0;
    for(i = 2; i * i <= x && x % i != 0; ++ i);
    return i * i > x;
}
int main()
{
    int x, i;
    x = 100;
    for(i = 1; i <= x; ++ i){
        if(x % i == 0 && isPrime(i)){
            printf("%5d", i);
        }
    }
    printf("\n");
    return 0;
}
