#include <stdio.h>
float multiply(float a, float b)
{
    return a * b;
}

int main()
{
    float a = 4.21, b = 13.47, product;

    product =multiply(a,b) ;
    printf("product is %f", product);
    return 0;
}