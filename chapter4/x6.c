

/*  
    this source code is for counting the birthday month
*/

#include <stdio.h>

#define NUM 120

int main()
{
    int i, n, worker_birthday_month[NUM], x, y;
    printf("please input the number of worker: ");
    scanf("%d", &n);
    printf("please input the %d worker's birthday month:", n);
    for(i = 0; i < n; ++ i){
        // printf("please input the %d worker's birthday month:", i);
        scanf("%d", &worker_birthday_month[i]);
    }
    printf("please input the month you want know:");
    scanf("%d", &y);
    for(i = 0; i < n; ++ i){
        if(worker_birthday_month[i] == y){
            printf("%4d", i);
        }
    }
    printf("\n");
    return 0;
}
