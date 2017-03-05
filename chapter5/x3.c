



/*
    this source code is for letting you the global variables
*/

#include <stdio.h>

int ex();
int x = 1;
int main()
{
    int x = 0;
    while(x ++ < 5){
        x ++ ;
        printf("%d", x);
    }
    x += 2;
    ex();
    printf("%d", x);
    return 0;
}

int ex()
{
    x += 2;
}


/*
    the output
    2
    4
    6
    9
    please think it 
*/
