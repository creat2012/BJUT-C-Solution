


#include <stdio.h>

int main()
{
    int x, y, z;
    printf("please input x, y, z\n");
    scanf("%d %d %d", &x, &y, &z);
    printf("x = %d y = %d z = %d\n", x, y, z);
    if(x + y == z) printf("x + y = z\n");
    else printf("x + y != z\n");
    return 0;
}
