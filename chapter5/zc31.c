

/*
    this source code is for computing A(n, m)
*/

#include <stdio.h>
#define LL long

LL Ncompute(int n)
{
    LL ans = 1, i;
    for(i = 2; i <= n; ++ i)
        ans *= i;
    return ans;
}

int main()
{
    long x, y;
    printf("please input A(n, m)'s n, m : ");
    scanf("%ld %ld", &x, &y);
    printf("A(n, m) : %ld\n", Ncompute(y)/Ncompute(y - x));
    return 0;
}
