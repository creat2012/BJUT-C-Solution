

/*
    this source code is for reverse the input number
*/

#include <stdio.h>

#define NUM 20

int main()
{
    int value[NUM];
    int i, temp;
    printf("enter %d integers:\n", NUM);
    for(i = 0; i < NUM; ++ i)
        scanf("%d", &value[i]);
    for(i = 0; i < NUM; ++ i)
        printf("%4d", value[i]);
    for(i = 0; i < NUM / 2; ++ i){
        temp = value[i];
        value[i] = value[NUM - i - 1];
        value[NUM - i - 1] = temp;
    }
    for(i = 0; i < NUM; ++ i)
        printf("%4d", value[i]);
    return 0;
}

// input : 12 32 45 65 34 23 59 889 84 23 84 23 84 754 73 73 28 743 121 832 64 83 90
