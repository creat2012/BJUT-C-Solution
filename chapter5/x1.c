

/*
    this source code is for changing the word's charcter to upper
*/
#include <stdio.h>
#include <ctype.h>

void modify(char[]);

int main()
{
    char str[] = "one world, one dream";
    puts(str);
    modify(str);
    puts(str);
    return 0;
}

void modify(char av_str[])
{
    int i;

    for(i = 0; av_str[i] != '\0'; ++ i){
        if(i == 0 || !isalpha(av_str[i - 1]))
            av_str[i] = toupper(av_str[i]);
    }
}
// 简单来说，就书把str的所有单词的首字母大写。
