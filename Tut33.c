#include <stdio.h>
// TO PRINT STAR PATTERN AND REVERSESTARPATTERN BY TAKING INPUT FROM THE USER!!

void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
void reversestarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{
    int rows, type;
    printf("Press 0 to print starpattern and 1 for reversestarpattern\n");
    scanf("%d", &type);
    printf("How many rows do you want?\n");
    scanf("%d", &rows);
    switch (type)
    {
    case 0:
        starpattern(rows);
        break;

    case 1:
        reversestarpattern(rows);
        break;

    default:
        printf("You have entered invalid choice");
        break;
    }
    return 0;
}