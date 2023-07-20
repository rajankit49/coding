#include <stdio.h>

// FUNCTIONS!
int sum(int a, int b);

int main()
{
    int a, b, c;
    a = 75;
    b = 65;
    c = sum(a, b);
    printf("The sum c is %d\n", c);
}
int sum(int a, int b)
{
    return a + b;
}
