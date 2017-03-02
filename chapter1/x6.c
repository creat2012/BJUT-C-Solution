

#include <stdio.h>

float pi = 3.1415926;
int main()
{
    float r;
    scanf("%f", &r);
    printf("体积： %f\n", 4.0 / 3 * pi * r * r * r);
    printf("表面积：%f\n", 4 * pi * r * r);
    return 0;
}
