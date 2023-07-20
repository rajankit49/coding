#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of index %d is %d\n", i, array[i]);
    }
    array[0] = 750; // changing this value will also get get reflected in main
    return 0;
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of index %d is %d\n", i, ptr[i]);
    }
    *(ptr + 2) = 83;
}

void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d , %d is %d\n", i, j, arr[i][j]);
        }
    }
}
int main()
{
    int arr[][2] = {{2, 3}, {9, 7}};
    // func1(arr);
    // printf("The vlue at index 0 is %d",arr[0]);
    // func2(arr);
    // func2(arr);
    func3(arr);
    return 0;
}