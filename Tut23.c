#include <stdio.h>
int main()
{

    int marks[4];
    // marks[0] = 24;
    // marks[1] = 55;
    // printf("The marks of 1 student is %d\n", marks[0]);
    // printf("The marks of 2 student is %d\n", marks[1]);
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d the element of array\n", i);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element of the array is %d\n", i, marks[i]);
    }
}
