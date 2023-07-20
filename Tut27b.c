#include <stdio.h>
int main()
{
    int arr[] = {2, 3, 5, 8, 14, 75};
    printf("The value of the first element of the arr is %d\n", *(&arr[0]));
    printf("The value of the first  element of the arr is %d\n", *(arr));
    printf("The value of the second  element of the arr is %d\n", *(&arr[1]));
    printf("The value of the second  element of the arr is %d\n", *(arr + 1));
    printf("The value of the second  element of the arr is %d\n", *(arr + 2));

    printf("\n");
    printf("\n");

    printf("The address of the first element of the arr is %d\n", &arr[0]);
    printf("The address of the first  element of the arr is %d\n", arr);
    printf("The address of the second  element of the arr is %d\n", &arr[1]);
    printf("The address of the second  element of the arr is %d\n", arr + 1);
}