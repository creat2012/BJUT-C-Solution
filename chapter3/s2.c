


/*
    this source code is for computing 1 - 1/2 + 1/3 ....... until 1 / n <10^-4
*/

#include <stdio.h>

int main()
{
    double sum = 0;
    int i, k = 1; // i is .... sry my english is poor...
    for(i = 1; 1. / i >= 1e-4; ++ i, k = k * (-1)){
        sum += (1.0 / i * k);
    }
    printf("the sum is : %.5lf\n", sum);
    return 0;
}
