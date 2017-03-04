

/*
    this source code is for find the longest word
*/

#include <stdio.h>

#define MAX_LEN 1000

int count_longest(char *s)
{
    int ans = 0, cnt = 0;
    while(*s != '\0'){
        if(*s == ' '){
            cnt = 0;
            ++ s;
            continuee
        }
        ++ cnt;
        ++ s;
        if(cnt > ans) ans = cnt;
    }
    return ans;
}
int main()
{
    int i;
    char sentence[MAX_LEN];
    printf("please input a sentence: ");
    gets(sentence);
    printf("the longest word in this sentence : %d\n", count_longest(sentence));
    return 0;
}
