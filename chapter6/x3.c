

#include <stdio.h>

int main(int ac, char *av[])
{
    int i;
    while(ac > 1){
        if(ac == 2)
            for(i = 0; av[1][i] != '\0'; ++ i)
                if(av[1][i] >= 'a' && av[1][i] <= 'z')
                    av[1][i] = av[1][i] - 32;
        printf("%s\n", av[ac-1]);
        -- ac;
    }
    return 0;
 }


// cfile comp C_Language
// C_Language
// COMP 
// change the second command to upper 
