




/*
    this source code is for computing.
*/

#include <stdio.h>

int main()
{
    int i, ans = 0;
    for(i = 2; i <= 100; ++ i){
        ans += (i * 3);
    }
    printf("the sum = %d\n", ans);
    return 0;
}
