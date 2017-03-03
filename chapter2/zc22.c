/*
    this source code is for changing the integer base 10 to base 8
*/

#include <stdio.h>

int main()
{
    int dec, oct, mul;
    printf("enter a integer: ");
    scanf("%d", &dec);
    printf("the decimal is %d\n", dec); 
    oct = 0;
    mul = 1;
    while(dec){
        oct = oct + dec % 8 * mul; 
        dec = dec / 8;
        mul = mul * 10;
    }
    printf("the octavo is %d\n", oct);
    return 0;
}
