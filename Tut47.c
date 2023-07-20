#include <stdio.h>
#include <stdlib.h>

int main()
{
    // // Use of malloc
    // int *ptr;
    // int n;
    // printf("Enter the size of array yoy want to create \n");
    // scanf("%d",&n);
    // ptr = (int *)malloc(n * sizeof (int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value at index %d of this array is\n",i);
    //     scanf("%d",&ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value of the array at index %d is %d\n",i,ptr[i]);
    // }


     // Use of calloc
    int *ptr;
    int n;
    printf("Enter the size of array yoy want to create \n");
    scanf("%d",&n);
    ptr = (int *)calloc(n , sizeof (int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at index %d of this array is\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of the array at index %d is %d\n",i,ptr[i]);
    }


     // Use of realloc
    printf("Enter the size of new array you want to create \n");
    scanf("%d",&n);
    ptr = (int *)realloc(ptr , n*sizeof (int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at index %d of this array is\n",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of the array at index %d is %d\n",i,ptr[i]);
    }

    free(ptr);    
    
  return 0;  
}