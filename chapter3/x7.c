
/*
    this source code is for computing how many peaches do you have after n days.
*/

#include <stdio.h>

int main()
{
    int i, n, ans = 1;
    printf("please input the days after: ");
    scanf("%d", &n);
    for(i = 1; i <= n; ++ i){
        ans = (ans + 1) * 2;
    }
    printf("the number of peaches is: %d\n", ans);
    return 0;
}
