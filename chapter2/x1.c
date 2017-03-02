


#include <stdio.h>

/*
    this is source code is to find the max value
    that 1 + 2 + ... + value < 32767 and get the sum
    after run this code, the answer is value  = 256 and sum = 32640
*/
int main()
{
    int sum, i;
    sum = 0;
    i = 1;
    while(sum + i < 32767){
        sum = sum + i;
        i = i + 1;
    }
    printf("\n1 + 2 + 3+ ..... + %d = %d\n", i, sum);
    return 0;
}
