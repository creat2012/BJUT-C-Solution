


/*
    this integer is for finding the integer which is can be divided 5 and 3
*/


#include <stdio.h>

#define MAX 100

int numofdivided5(int *arr, int n)
{
    int ans, i;
    ans = 0;
    for(i = 0 ; i < n; ++ i){
        if(arr[i] % 5 == 0)
            ++ ans;
    }
    return ans;
}

int numofdivided3(int *arr, int *candiv3, int n)
{
    int i, cnt;
    cnt = 0;
    for(i = 0; i < n; ++ i){
        if(arr[i] % 3 == 0){
            candiv3[cnt ++] = arr[i];
        }
    }
    return cnt;
}

int main()
{
    int arr[MAX], candiv3[MAX];
    int n, i, n1;
    printf("please input the nunmber of integer : ");
    scanf("%d", &n);
    printf("please input %d numbers :", n);
    for(i = 0; i < n; ++ i){
        scanf("%d", &arr[i]);
    }
    printf("the number of integer can be 5 divided : %d\n", numofdivided5(arr, n));
    n1 = numofdivided3(arr, candiv3, n);
    printf("the integer can be divided by 3 : ");
    for(i = 0; i < n1; ++ i){
        printf("%4d", candiv3[i]);
    }
    printf("\n");
    return 0;
}
