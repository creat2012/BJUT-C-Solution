


/*
    this source code is for findding out all the 水仙花数
*/


#include <stdio.h>

#define pow3(x) ((x) * (x) * (x))  // please pay atention here.




int isFlowerNumber(int x)
{
    int cnt = 0, x1 = x;
    while(x){
        cnt += pow3(x % 10);
        x = x / 10;
    }
    return cnt == x1;
}

int main()
{
    int i;
    printf("all the water flower number: ");
    for(i = 100; i <= 999; ++ i){
        if(isFlowerNumber(i)){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
