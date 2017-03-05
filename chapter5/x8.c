

/*
    this source code is for book160   binary search
*/

#include <stdio.h>

#define MAX 20

void binary_search(int *arr, int low, int high, int key) // so this is not the dfs. 
{
    int mid;
    while(low <= high){
        printf("[%d %d]\n", low, high);
        mid = (low + high) / 2;
        if(arr[mid] == key){
            printf("sry, i find you in the position : %d\n", mid);
            return ;
        }
        if(arr[mid] > key) high = mid - 1;
        else low = mid + 1;
    }
    return ;
}
int main()
{
    int arr[MAX] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int key;
    key = 80;
    binary_search(arr, 0, 8, key);
    key = 10;
    binary_search(arr, 0, 8, key);
    return 0;
}
