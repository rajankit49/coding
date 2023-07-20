#include <stdio.h>

// WITHOUT ARGUMENT WITH RTUN VALUE!

int takenumber()
{
    int i;
    printf("Enter a number ");
    scanf("%d", &i);
    return i;
}

int main()
{
    int a, b, c;
    a = 12;
    b = 45;
    c = takenumber();

    printf("The entered number is %d", c);
}