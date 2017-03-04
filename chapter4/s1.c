

/*
    this source code is for ....eeee, see the book122  :)
*/

#include <stdio.h>
#define MAX 100

void init(int *num, int *count)
{
    int i;
    for(i = 0; i < MAX; ++ i){
        num[i] = i + 1;
        count[i] = random() % 100; // count is range[0, 99]
    }
    return ;
}

void find_top10_and0(int *num, int *count)
{   // this function is for sorting
    int i, j, temp;
    for(i = 0; i < MAX; ++ i){
        for(j = 1; j < MAX - i; ++ j){
            if(count[j] > count[j - 1]){
                temp = count[j];
                count[j] = count[j - 1];
                count[j - 1] = temp;
                temp = num[j];
                num[j] = num[j - 1];
                num[j - 1] = temp;
            }
        }
    }
    return ;
}

int main()
{
    int i, num[MAX], count[MAX];
    init(num, count);
    find_top10_and0(num, count);
    for(i = 0; i < 10; ++ i){
        printf("%d -- > %d\n", num[i], count[i]);
    }
    printf("the zero download: ");
    i = MAX - 1;
    while(count[i] == 0){
        printf("%4d", num[i]);
        -- i;
    }
    printf("\n");
    return 0;
}
