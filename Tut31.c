#include <stdio.h>
void changevalue(int *address)
{
    *address = 545;
}
int main()
{
    int a = 34, b = 74;
    printf("The valueof a now is %d\n", a);
    changevalue(&a);
    printf("The value of a now is %d\n", a);
}
