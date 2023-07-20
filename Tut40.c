#include <stdio.h>
// ARRAY REVERSAL!!
void arrayRev(int arr[])
{
    for (int i = 0; i < 7 / 2; i++)
    {
        int temp;
        temp = arr[i];       // store i in temp//
        arr[i] = arr[6 - i]; // swap i with (6-i)//
        arr[6 - i] = temp;
    }
}
void arrayprint(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value of index %d is %d\n", i, arr[i]);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printf("Before reversig, the array is:\n");
    arrayprint(arr);
    arrayRev(arr);
    printf("\nAfter reversing, the array is: \n");
    for (int i = 0; i < 7; i++)
    {
        printf("The value of index %d is %d\n", i, arr[i]);
    }

    return 0;
}