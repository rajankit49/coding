#include <stdio.h>
void changenumber(int *x, int *y)
{

    *x = *x + *y; // put *x-*y into x//
    *y = *x - *y; // put *x+*y into y
    return 0;
}
int main()
{
    int a = 4;
    int b = 3;
    printf("The sum is %d\n", a + b);
    printf("The subtract is  %d\n", a - b);
    void changenumber();
    printf("The new value is %d and %d", a, b);
    return 0;
}