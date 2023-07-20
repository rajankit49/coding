#include <stdio.h>

/* write a code to print the multiplication table of a given number entered by the user. */

int main(){
    int n;
    printf("Enter an integer : ");
    scanf("%d", &n);

    for(int i = 1; i <= 10; ++i)
        {printf("%d X %d = %d\n", n, i, n * i);
        }
        return 0;
}






