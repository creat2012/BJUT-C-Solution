





/*
    this source code is some math function
*/

#include <stdio.h>
#include <math.h>

void menu()
{
    printf("===== MENU =====\n");
    printf("sin  **************** 1\n");
    printf("cos  **************** 2\n");
    printf("pow  **************** 3\n");
    printf("sqrt **************** 4\n");
    printf("exit **************** 5\n");
    return ;
}
double x;
double sin_f()
{
    printf("please input the x of sin(x) : ");
    scanf("%lf", &x);
    return sin(x);
}

double cos_f()
{
    printf("please input the x of cos(x) : ");
    scanf("%lf", &x);
    return cos(x);
}

int pow_f()
{
    double x, y;
    printf("please input the x, y of pow(x, y) : ");
    scanf("%lf %lf", &x, &y);
    return pow(x, y);
}

int sqrt_f()
{
    printf("please input the x of sqrt(x) : ");
    scanf("%lf", &x);
    return sqrt(x);
}

int main()
{
    int x;
    menu();
    printf("please input the number you want operate:");
    scanf("%d", &x);
    double ans ;
    switch(x){
        case 1: ans = sin_f(); break; 
        case 2: ans = cos_f(); break;
        case 3: ans = pow_f(); break;
        case 4: ans = sqrt_f(); break;
        case 5: break;
    }
    printf("ans : %lf\n", ans);
    return 0;
}
