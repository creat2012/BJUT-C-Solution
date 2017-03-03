


/*
    this source code if for computing x^y
*/

#include <stdio.h>

int main()
{
    long m;
    int x, y;
    scanf("%d %d", &x, &y);
    m = 1;
    for(; y >= 1; -- y){
        m = m * x;
    }
    printf("x ^ y = %ld\n",  m);
    return 0;
}
