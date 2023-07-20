#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "harry";
    char s2[] = "havi";
    char s3[55];
    // printf("The length of s1 is %d\n",strlen(s1));
    // printf("The length of s2 is %d\n",strlen(s2));
    // printf("The reverse of harry is ");
    // puts(strrev(s1));
    // printf("The reverse of ravi is \n");
    // puts(strrev(s2));
    // strcpy(s3,strcat(s2,s1));
    // puts(s3);
    printf("The value of strcmp for s1 and s2 returnd is %d", strcmp(s1, s2));
    return 0;

}





