

/*
    this source code is for (the book123)
*/

#include <stdio.h>
#define NUM 10

int main()
{
    int value[NUM];
    int i, sum, ave;
    for(i = 0; i < NUM; ++ i)
        scanf("%d", &value[i]);
    sum = value[0];
    for(i = 1; i < NUM; ++ i)
        sum = sum + value[i];
    ave = sum / NUM;
    
    for(i = 0; i < NUM; ++ i)
        if(value[i] == ave)
            break;
    
    if(i < NUM)
        printf("Exist a element equal to average.\n");
    else
        printf("No exist any element equal to average.\n");   
    return 0;
}
