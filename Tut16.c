#include <stdio.h>

int main()
{

    int i, age;

    for (i = 0; i < 10; i++)
    {
        printf("%d\n Enter your age\n", i);
        scanf("%d", &age);
        if (age > 8)
        {
            continue;
        }
        printf("My name is Ankit Raj");
    }
    return 0;
}