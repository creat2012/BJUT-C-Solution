


/*
    this finction you know
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double *getPart(double src[], int n, double x1, double x2, int *p)
{
    int i;
    *p = 0;
    double *arr = (double*)malloc(sizeof(double) * n);
    for(i = 0; i < n; ++ i){
        if(src[i] > x2 && src[i] < x1){
            arr[*p] = src[i];
            ++ *p;  
        }
    }
    return arr;
}


int main()
{
    double s[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, *s1;
    int n = 10, p, i;
    double  min = 3, max = 8;
    s1 = getPart(s, n, max, min, &p);
    for(i = 0; i < p; ++ i){
        printf("%lf ", s1[i]);
    }
    printf("\n");
    return 0;
}
