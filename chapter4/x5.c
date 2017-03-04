



/*
    this source code is for processing 100 integer and if key is among them
*/


#include <stdio.h>

#define NUM 100

void find_key(int *arr, int key)
{
    int i;
    for(i = 0; i < NUM; ++ i)
        if(arr[i] == key)
            printf("%4d", i);
    return ;
}
int main()
{
    int i, arr[NUM], key;
    for(i = 0; i < NUM; ++ i){
        arr[i] = random() % 100; // the random is range(0, 99)
        if(arr[i] % 2) arr[i] = -arr[i];
    }
    printf("please input the key[0, 99] you want find in the 100 numbers: ");
    scanf("%d", &key);
    printf("the key's position: ");
    find_key(arr, key);
    printf("\n");
}
