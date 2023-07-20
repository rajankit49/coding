#include <stdio.h>
int b = 34; // Global variable since it has declared outside of the main()!
int func1(int b1)
{
    static int myvar = 98;
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    // printf("The address of b inside func1 is %d\n",&b);
    // printf("The value of b inside func1 is %d\n",b);
    return b1 + 10;
}

int main()
{
    int b = 344;
        // printf("%d\n",loc);
        // printf("The value of b")
        // printf("The address of b inside main is %d\n ",&b);
        int val = func1(b);
        val = func1(b);
        val = func1(b);
        val = func1(b);
        val = func1(b);
    // printf("The value of b inside func1 is %d\n ",val);
    int *ptr = &val;

    return 0;
}