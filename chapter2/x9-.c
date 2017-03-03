
/*
    this source code is for computing two ?
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
    int x1, y1, x2, y2;
    printf("please input two integer stand for numberator and denominator:\n");
    scanf("%d %d", &x1, &y1);
    printf("please input two integer stand for numberator and denominator:\n");
    scanf("%d %d", &x2, &y2);
    printf("%d/%d + %d/%d = %d/%d", x1, y1, x2, y2, add(x1, y1, x2, y2));    
    printf("%d/%d - %d/%d = %d/%d", x1, y1, x2, y2, sub(x1, y1, x2, y2));    
    printf("%d/%d * %d/%d = %d/%d", x1, y1, x2, y2, mod(x1, y1, x2, y2));    
    printf("%d/%d / %d/%d = %d/%d", x1, y1, x2, y2, div(x1, y1, x2, y2));    
    return 0;
}
