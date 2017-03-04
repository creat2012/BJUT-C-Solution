


/*
    this source code is for findding the select sort
*/

#include <stdio.h>
#define MAX 100

void select_top10(int *arr, int n, int m)
{
    int i, j, index, temp;
    for(i = 0; i < m; ++ i){
        index = i;
        for(j = i; j < n; ++ j){
            if(arr[j] < arr[index])
                index = j;
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
        printf("%4d", arr[i]);
    }
    printf("\n");
    return ;
}

int main()
{
    int i, arr[MAX], n, m;
    printf("please input the n and m :");
    scanf("%d %d", &n, &m);
    printf("please input n integer: ");
    for(i = 0; i < n; ++ i)
        scanf("%d", &arr[i]);
    select_top10(arr, n, m);
    return 0;
}
