

/*
    this source code is for some students information 
*/

#include <stdio.h>
#include <stdlib.h>

#define NUM 30
struct student
{
    int No;
    char name[20];
    int score;
}

int main()
{
    struct student s[NUM];
    int i, sum = 0;
    for(i = 0; i < NUM; ++ i){
        scanf("%d %s %d", &s[i].No, s[i].name, &s[i].score);
        sum += s[i].score;
    }
    for(i = 0; i < NUM; ++ i){
        printf("\n%4d %12d %4d", s[i].No, s[i].name, s[i].score);
    }
    printf("\naverage score is : %5.lf", (double)sum / NUM);
    return 0;
}
