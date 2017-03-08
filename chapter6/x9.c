


/*
    this source code is for dividing a string to
*/

#include <stdio.h>
#include <stdlib.h>

char *divstring(char *s)
{
    char *s2 = malloc(sizeof(s));
    char *p = s, *p2 = s2;
    int del_num = 0;
    while(*p != '\0'){
        if(*p >= 'a' && *p <= 'z'){
            *p2 = *p; ++ p2;
            ++ del_num;
        }
        else {
            *(p - del_num) = *p;
        }
        ++ p;
    }
    *(p - del_num) = '\0';
    *p2 = '\0';
    puts(s);
    puts(s2);
    return s2;
}

int main()
{
    char s[] = "oirtue%^&HIU#G&G#H#(*HHhfh9";
    char *s1;
    s1 = divstring(s);
    printf("%s\n", s1);
    return 0;
}
