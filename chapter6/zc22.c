

/*
    this source code is for print the lower to screen and write the others to a file
*/

#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    int ch, i;
    if((fp1 = fopen("one.txt", "r")) == NULL){
        printf("can't open this file\n");
        return 0;
    }

    if((fp2 = fopen("two.txt", "w")) == NULL){
        printf("can't open this file\n");
        return 0;
    }
    ch = fgetc(fp1);
    while(ch != EOF){
        if(ch >= 'a' && ch <= 'z'){
            printf("%c", ch);
        }
        else{
            fputc(ch, fp2);
        }
        ch = fgetc(fp1);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
