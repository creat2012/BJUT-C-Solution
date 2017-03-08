

#include <stdio.h>

void sub(char*, int, int);
int main()
{
    char s[] = "abcdefxyz";
    int n = 6;
    sub(s, 0, n - 1);
    sub(s, n, 8);
    sub(s, 0, 8);
    return 0;
}


void sub(char *s, int m1, int m2)
{
    char a, *p;
    p = s + m2;
    s = s + m1;
    while(s < p){ // reverse s[m1, m2]
        a = *s;
        *s ++ = *p
        *p -- = a;
    }
    return ;
}

// sub(s, m1, m2)  reverse[m1, m2]

// after the code s = "zyxfedcba"
