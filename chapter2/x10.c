

/*
    this source code is for computing the last second word
*/
#include <stdio.h>
#include <string.h>
#define MAX_LEN 1000

int count_word(char *s)
{
    char *p = s + strlen(s) - 1;
    int cnt = 0, blank_num = 0;
    while(*p == ' ') -- p; // delete the last blank of the sencence
    while(p != s){
        if(blank_num == 2)
            break;
        if(*p == ' ') ++ blank_num;
        if(blank_num == 1) ++ cnt;
        -- p;
    }
    return cnt - 1;// return -1 stand for no the last second word
}

int main()
{
    char str[MAX_LEN];
    puts("please input a sentence:");
    gets(str);
    printf("the last word's character: %d\n", count_word(str));
    return 0;
}
