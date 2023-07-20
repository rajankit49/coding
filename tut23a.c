#include <stdio.h>

// ARRAY_(DECLARATION WITH INITIALIZATION) !

int main(){
    int marks[4]={15,17,23,28};

    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d of the element of the array is %d\n",i,marks[i]);
    }
    //return 0;
}
