



/*
    this souece code is for computing the average of n integer
*/

#include <stdio.h>

int main()
{
    int n, i, x, even_cnt = 0;
    scanf("%d", &n);
    printf("please input %d number(s):\n", n);
    double sum = 0;
    for(i = 1; i <= n; ++ i){
        scanf("%d", &x);
        if(x % 2 == 0){
            sum += x;
            even_cnt += 1;
        }
    }
    printf("the average of even integer : %.2lf\n", sum / even_cnt);
    return 0;
}
