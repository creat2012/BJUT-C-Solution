
/*
    this source code is for changing the words' first character to upper.
*/

#include <stdio.h>

#define MAX_LEN 1000

void Word2Upper(char *s)
{
    // puts(s);
    char *p = s;
    while(*p != '\0'){
        if(p == s || *(p - 1) == ' ')
            if(*p >= 'a' && *p <= 'z' )
                *p = *p - 32;
        ++ p; 
    }
    return ;
}

int main()
{
    char string[MAX_LEN];
    puts("please input a sentence:");
    gets(string);
    Word2Upper(string);
    puts(string);
    return 0;
}
