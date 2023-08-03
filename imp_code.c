#include<stdio.h>

// TO CHECK PRIME NO BY SQRT METHOD!!
// int main(){
//  int num,  isprime=1;
//     printf("Enter a number:");
//     scanf("%d",&num);
//     for (int i = 2; i*i < num; i++)
//     {
//         if (num%i==0)
//         {
//             isprime=0;
//             break;
//         }
        
//     }
//     if (isprime==1)
//     {
//         printf("The number %d is prime!\n",num);
//     }
//     else
//     {
//         printf("The number %d is not prime!",num);
//     }
    
//     return 0;


// }


int main(){
 int num,  isprime=1;
    printf("Enter a number:");
    scanf("%d",&num);
    for (int i = 2; i < num/2; i++)
    {
        if (num%i==0)
        {
            isprime=0;
            break;
        }
        
    }
    if (isprime==1)
    {
        printf("The number %d is prime!\n",num);
    }
    else
    {
        printf("The number %d is not prime!",num);
    }
    
    return 0;


}