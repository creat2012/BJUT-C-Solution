
/*
    this source code is for counting the student who the first name is liu
*/
#include <stdio.h>
#include <string.h>

#define NAME 100

int lookup(char *str[], int n, char *tag[])
{
    int i, cnt;
    cnt = 0;
    for(i = 0; i < n; ++ i){
        if(strstr(str[i], "刘") != NULL){
            strcpy(tag[cnt], str[i]);
            ++ cnt;
        }    
    }
    return cnt;
}

