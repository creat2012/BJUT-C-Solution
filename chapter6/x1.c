

/*
    this source code is for counting the num of a e i o u
*/
#include <stdio.h>
#include <string.h>

typedef struct
{
    char ch;
    int num;
}ELEMTYPE;

int main()
{
    int i, k;
    ELEMTYPE alpha[] = {{'a', 0}, {'e', 0}, {'o', 0}, {'i', 0}, {'u', 0}};
    char line[80];
    
    puts("enter a line :");
    gets(line);
    puts(line);
    
    for(i = 0; i < strlen(line); ++ i){
        for(k = 0; k < 5; ++ k){
            if(line[i] == alpha[k].ch){
                ++ alpha[k].num ;
                break;
            }
        }
    }
    for(k = 0; k < 5; ++ k){
        printf("%c : %d\n", alpha[k].ch, alpha[k].num);
    }
    return 0;
}
/*
    elephant
    a : 1
    e : 2
    i : 0
    o : 0
    u : 0
*/
