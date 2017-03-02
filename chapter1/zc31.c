


#include <stdio.h>

#define NAME_MAX 100

typedef struct
{
    int year, month, day;    
}birthday;

int main()
{
    birthday bir;
    char name[NAME_MAX];
    printf("please input the name:\n");
    scanf("%s", name);
    printf("please input the birthday (day/month/year):\n");
    scanf("%d/%d/%d", &bir.day, &bir.month, &bir.year);
    printf("%s: %d/%d/%d", name, bir.day, bir.month, bir.year);
    return 0;
}
