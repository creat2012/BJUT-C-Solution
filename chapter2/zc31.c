

/*
    this is source code is for find the min and the max in four intege
*/

#include <stdio.h>

int miner(int x, int y)
{
    return x > y ? y : x;
}
int maxer(int x, int y)
{
    return x > y ? x : y;
}
int main()
{
    int x1, x2, x3, x4;
    printf("please input four integer:\n");
    scanf("%d %d %d %d",&x1, &x2, &x3, &x4);
    printf("the minest is :%d\n", miner(miner(x1, x2), miner(x3, x4)));
    printf("the maxest is :%d\n", maxer(maxer(x1, x2), maxer(x3, x4)));
    return 0;
}
