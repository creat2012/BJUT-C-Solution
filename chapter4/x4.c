



/*
    this source code is for processing 100 integer and change the odd number to the oppsite number
*/


#include <stdio.h>

#define NUM 100

int main()
{
    int i, arr[NUM];
    for(i = 0; i < NUM; ++ i){
        arr[i] = random() % 100; // the random is range(0, 99)
        if(arr[i] % 2) arr[i] = -arr[i];
    }
    for(i = 0; i < NUM; ++ i)
        printf("%d\n", arr[i]);
    printf("\n");
}
