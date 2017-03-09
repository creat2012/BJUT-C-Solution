

/*
    this source code is for prime number
*/

#include <stdio.h>
#define MAX 1000


int isprime(int x)
{
    int i;
    if(x < 2) return 0;
    for(i = 2; i * i <= x && x % i != 0; ++ i);
    if(i * i > x) return 1;
    else return 0;
}

void write2file()
{
    int i, j;
    FILE *fp = fopen("prime.txt", "w");
    for(i = 2; i <= MAX; ++ i){
        if(isprime(i))
            fprintf(fp, "%d\n", i);
    }
    fclose(fp);
    return ;
}

void readfromfile()
{
    int x, cnt;
    cnt = 1;
    FILE *fp = fopen("prime.txt", "r");
    while(!feof(fp)){
        fscanf(fp, "%d", &x);
        if(!feof(fp)) // please attention here.
            printf("%d: %d\n", cnt ++, x);
    }
    fclose(fp);
    return ;
}

int main()
{
    write2file();
    readfromfile();
    return 0;
}

