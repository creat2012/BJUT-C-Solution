

#include <stdio.h>

int main()
{
    int value, m;
    printf("please input value:\n");
    scanf("%d", &value);
    m = value % 100;
    printf("%d -> %d\n", value, m);
    return 0;
}
