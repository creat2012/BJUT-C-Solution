


/*
    this source code is for computing y = 1 + 1/1*2 + 1/2*3 + 1/3*4
*/

#include <stdio.h>

int main()
{
    double sum = 1;
    int i;
    for(i = 1; 1.0 / (i * (i + 1)) >= 1e-6; ++ i){
        sum += 1.0 / (i * (i + 1));
    }
    printf("the sum is : %lf\n", sum);
    return 0;
}
