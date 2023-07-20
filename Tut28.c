#include <stdio.h>

int fib_recurssive(int n)
{
    if (n == 1 || n == 2)
    {
        return (n - 1);
    }
    else
    {
        return fib_recurssive(n - 1) + fib_recurssive(n - 2);
    }
}

int fib_iterative(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b; // 1 
        a = b - a; // 1
    }

    return a;
}
int main()
{
    int number;
    printf("Enter the index to get fibonacci series\n");
    scanf("%d", &number);
    printf("The value of fibonacci no at position %d  is %d\n", number, fib_recurssive(number));
    printf("The value of fibonacci no at position %d  is %d", number, fib_iterative(number));
    return 0;
}
