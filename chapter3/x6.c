

/*
    this source code is for computing a + aa + aaa +......+ (aaaaaaa..aaa)n
*/

#include <stdio.h>

int main()
{
    int a , n, i, sum = 0;
    printf("please input a and n :\n");
    scanf("%d %d", &a, &n);
    for(i = 1; i <= n; ++ i){
        sum += a;
        a = a * 10 + a;
    }
    printf("the sum of .. is : %d\n", sum);
    return 0;
}
