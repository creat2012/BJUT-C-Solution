


/*
    this source code is for deleting the blank.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[80], str2[80];
    int i, j;
    
    printf("enter a text line:\n");
    gets(str1);
    str2[0] = str1[0];
    for(i = 1, j = 1; str1[i] != '\0'; ++ i){
        if(str1[i] == ' ' && str1[i - 1] == ' ')
            continue;
        str2[j ++] = str1[i];
    }
    str2[j] = '\0';
    puts(str2);
    return 0;
}

// input : lkjfriljriewj       ewjrk
// output: lkjfriljriewj ewjrk
