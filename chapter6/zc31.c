

/*
    this source code is something about complex number
*/

#include <stdio.h>

typedef struct
{
    int a, b;    
}Complex;


Complex inputComplex()
{
    Complex c;
    printf("please input the real number : ");
    scanf("%d", &c.a);
    printf("please input the virtual number : ");
    scanf("%d", &c.b);
    printf("well done, the complex number input over\n");
    return c;
}

void outputComplex(Complex c)
{
    printf("the complex number is : %d + %di\n", c.a, c.b);
}

Complex addComplex(Complex c1, Complex c2)
{
    Complex ans;
    ans.a = c1.a + c2.a; ans.b = c1.b + c2.b;
    return ans;
}

int main()
{
    Complex c1, c2, c3;
    c1 = inputComplex();
    c2 = inputComplex();
    c3 = addComplex(c1, c2);
    outputComplex(c3);
    return 0;
}
