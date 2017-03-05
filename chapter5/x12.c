



/*
    this source code is for findding the last line of certain your sincerely
*/

#include <stdio.h>
#include <string.h>
#define MAX_LEN 1000
char son[] = "your sincerely";
int main()
{
    char str[MAX_LEN], lastc[MAX_LEN];
    printf("please input the alticle: (end of a blank line)\n");
    do{
        gets(str);
        if(strstr(str, son))
            strcpy(lastc, str);
    }while(strlen(str) != 0);
    printf("the last line of \"your sincerely\" is : %s\n", lastc);
    return 0;
}
