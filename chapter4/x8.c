

/*
    this source code is for judging the key is legal or not
*/


#include <stdio.h>
#include <string.h>
#define MAX_LEN 255

int islegal_son(char c)
{
    if(c >= 'a' && c <= 'z') return 1;
    if(c == '_') return 1;
    if(c >= '0' && c <= '9') return 1;
    return 0;
}

int isLegal(char *s)
{
    int i, len = strlen(s);
    if(len == 0) return 0;
    if(!(s[0] >= 'a' && s[0] <= 'z' || s[0] =='_'))
        return 0;
    for(i = 0; i < len; ++ i){
        if(!islegal_son(s[i]))
            return 0;
    }
    return 1;
}

int main()
{
    char key[MAX_LEN];
    printf("please input a key: ");
    gets(key);
    if(isLegal(key))
        puts("is legal");
    else
        puts("is not legal");
}
