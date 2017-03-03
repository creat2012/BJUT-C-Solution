

/*
    this source code is for finding the fabonacii number
*/

#include <stdio.h>

int main()
{
    int f1 = 0, f2 = 1, f3;
    int cnt = 2;
    printf("1:0\n2:1\n");
    while(cnt < 20){
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        printf("%d:%d\n", cnt + 1, f2);
        ++ cnt;    
    }
    return 0;
}
