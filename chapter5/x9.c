


/*
    this function is for reverse a intege
*/

#include <stdio.h>

int reverse(int value)
{
    int ans, k;
    ans = 0;
    while(value){
        ans = ans * 10 + value % 10;
        value /= 10;
    }
    return ans ;
}

int main()
{
    int x;
    printf("please input the integer :");
    scanf("%d", &x);
    printf("the reverse number : %d\n", reverse(x));
    return 0;
}
