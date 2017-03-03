

/*
    this source code is for find the factor of integer.
*/

#include <stdio.h>

int main()
{
    int integer, i;
    printf("please input a integer:");
    scanf("%d", &integer);
    printf("%d 's factors : ", integer);
    for(i = 1; i <= integer; ++ i){
        if(integer % i == 0){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
