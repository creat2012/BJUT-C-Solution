

/*
    this source code is for counting the number of word
*/

#include <stdio.h>
#include <string.h>
#define MAX 1000

char* delete_blank_end(char *s)
{
    char *p = s + strlen(s) - 1;
    while(p != s && *p == ' '){
        *p = '\0';
        -- p;
    }
    return s;
}

char* delete_blank_begin(char *s)
{
    char *p = s;
    while(*p != '\0' && *p == ' '){
        ++ s;
        ++ p;
    }
    return s;
}

char* delete_blank(char *s)
{
    int i, j;
    char s2[MAX];
    s2[0] = s[0];
    for(i = 1, j = 1; s[i] != '\0'; ++ i){
        if(s[i] == ' ' && s[i - 1] == ' ')
            continue;
        s2[j ++] = s[i];
    }
    s2[j] = '\0';
    puts(s2);
    return s2;
}

int count_word(char *str)
{
    int i, ans = 0;
    char *new_str;
    delete_blank_end(str);
    delete_blank_begin(str);
    puts(str);
    new_str = delete_blank(str);
    while(new_str != '\0'){
        if(*new_str == ' ')
            ++ ans;
        ++ new_str;
    }
    return ans;
}

int main()
{
    char str[MAX];
    gets(str);
    printf("this sentence's words : %d\n", count_word(str));
    return 0;
}
