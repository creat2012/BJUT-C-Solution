


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


void input_infor()
{
    work s;
    FILE *fp = fopen("work_infor.txt", "w");
    do{
        printf("please input the no of worker(end of -1) :");
        scanf("%d", &s.no);
        if(s.no == -1) break;
        printf("please input the name of the worker :");
        scanf("%s", s.name);
        printf("please input the wage of the worker :");
        scanf("%lf", &s.wage);
        fprintf(fp, "%d : %s %lf\n", s.no, s.name, s.wage);
    }while(1);
    fclose(fp);
    FILE *fp1 = fopen("lower_standard.txt", "w");
    fp = fopen("work_infor.txt", "r");
    while(!feof(fp)){
        fscanf(fp, "%d : %s %lf", &s.no, s.name, &s.wage);
        if(s.wage < 300 && !feof(fp))
            fprintf(fp1, "%d : %s %lf\n", s.no, s.name, s.wage);
    }
    fclose(fp);
    fclose(fp1);
    return ;
}

int main()
{
    work s[MAX];
    input_infor(s);
    return 0;
}
