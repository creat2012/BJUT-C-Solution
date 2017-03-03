
/*
    this source code is for computing the lcm(x, y)
*/

#include <stdio.h>


int gcd(int a, int b)
{
    if(a == 0) return b;
    else return gcd(b % a, a);
}

int lcm(int x, int y)
{
    return x * y / gcd(x, y);
}
    
int main()
{
    int x, y;
    printf("please inpit two integer:\n");
    scanf("%d %d", &x, &y);
    printf("the lcm of x, y is : %d\n", lcm(x, y));    
    return 0;
}
