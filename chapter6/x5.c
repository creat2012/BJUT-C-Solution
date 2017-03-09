


/*
    this source code is for worker information
*/

#include <stdio.h>

#define MAX 100
#define NAME_LEN 100

typedef struct
{
    int no;
    char name[NAME_LEN];
    double wage;
}work;


void input_infor(work s[])
{
    double sum_wage;
    int cnt, i;
    cnt = 0; sum_wage = 0;
    do{
        printf("please input the no of worker(end of -1) :");
        scanf("%d", &s[cnt].no);
        if(s[cnt].no == -1) break;
        printf("please input the name of the worker :");
        scanf("%s", s[cnt].name);
        printf("please input the wage of the worker :");
        scanf("%lf", &s[cnt].wage);
        sum_wage += s[cnt].wage;
        ++ cnt;
    }while(cnt < MAX);
    if(cnt == MAX) printf("out of room!\n");
    printf("the average wage is : %lf\n and the lower the standard :\n", sum_wage / cnt);
    for(i = 0; i < cnt; ++ i)
        if(s[i].wage < 300)
            printf("%d : %s %lf\n", s[i].no, s[i].name, s[i].wage);
    return ;
}

int main()
{
    work s[MAX];
    input_infor(s);
    return 0;
}
