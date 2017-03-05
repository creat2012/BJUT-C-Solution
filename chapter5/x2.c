

/*
    this source code is for letting you know the static
*/

#include <stdio.h>

int try(int);
int w = 3;
int main()
{
    int i, k;
    k = 1;
    for(i = 0; i < 3; ++ i)
        printf("try(%d) = %d\n", i, try(i));
    return 0;
}


int try(int x)
{
    static int a = 5;
    int b = 2;
    a += x + b;
    w ++;
    return a + w;   
}

//the output:  try(0) = 11 and now the a = 7 w = 4
//             try(1) = 15 and now the a = 1o w = 5
//             try(2) = 20 and now the a = 14 w= 6
