

/*
    this is source code is for building a 2d-array the problem given
*/

#include <stdio.h>

#define MAX  100

int abs(int x)
{
    return x >= 0 ? x : -x;
}
int main()
{
    int i, j, n, array[MAX][MAX];
    printf("please input the n standing for column: ");
    scanf("%d", &n);
    for(i = 1; i <= n; ++ i){
        for(j = 1; j <= n; ++ j){
            if(i - j > 2 || j - i > 2){
                array[i][j] = 0;
            }
            else{
                array[i][j] = abs(i - j) + 1;
            }
        }
    }
    for(i = 1; i <= n; ++ i){
        for(j = 1; j <= n; ++ j)
            printf("%3d", array[i][j]);
        printf("\n");
    }
    
    return 0;
}
