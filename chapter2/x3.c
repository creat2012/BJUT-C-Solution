

#include <stdio.h>

/*
    this source code is inout a string
    than change the lower charcter to upper.
*/
int main()
{
    char ch;
    do{
        ch = getchar();
        if(ch >= 'a' && ch <= 'z')
            ch = ch - 32;
        putchar(ch);
    }while(ch != '\n');
    return 0;
}
