#include <stdio.h>

void printstr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c", str[i]);
        i++;
    }
    //printf("\n");
}
int main()
{
    //char str[] = {'a', 'n', 'k', 'i', 't', '\0' };
    //char str[]="Ankit";
    char str[34];
    ///gets(str);
    //printStr(str);
    printf("Using printf %s",str);
    puts(str);
    return 0;
}      