#include <stdio.h>
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}

int main()
{
    int a, b, c;
    a = 0;
    b = 15;
    c = 27;
    printstar(15);
}
