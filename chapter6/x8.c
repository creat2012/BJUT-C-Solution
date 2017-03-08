

/*
    this source code is for deleting all the blank
*/

#include <stdio.h>


int delSpace(char *str)
{
    int del_num;
    del_num = 0;
    char *p = str;
    while(*str != '\0'){
        if(*str == ' ')
            ++ del_num;
        else *(str - del_num)  = *str; 
        ++ str;
    }
    *(str - del_num) = '\0';
    puts(p);
    return del_num;
}

int main()
{
    char s[] = "hello buddies!";
    printf("%d\n", delSpace(s));
    return 0;
}
