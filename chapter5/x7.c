
/*
    this source code is for changing the number base 16 to base 10
*/


#include <stdio.h>
#include <string.h>

#define MAX_LEN 10

int C2N(char x)
{
    if(x >= '0' && x <= '9') return x - '0';
    if(x >= 'A' && x <= 'Z') return x - 'A' + 10;
    if(x >= 'a' && x <= 'z') return x - 'a' + 10;
}

int Base16ToBase10(char *s)
{
    int ans, k = 1;
    ans = 1; k = 1;
    char *p = s + strlen(s) - 1;
    while(p != s - 1){
        ans += C2N(*p) * k;
        -- p;
        k = k * 8;
    }
    return ans;
}

int main()
{
    char number8[MAX_LEN];
    printf("please input the number base 8:");
    scanf("%s", number8);
    printf("the number base 10 is : %d\n", Base16ToBase10(number8));
    return 0;
}
