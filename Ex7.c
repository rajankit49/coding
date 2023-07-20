#include <stdio.h>
#include <string.h>
struct driver
{
    char name[45];
    char DL[45];
    char route[45];
    char distance[45];
};

int main()
{   int n;
    struct driver D[n];
    printf("Welcome ankit tour and travels!\n");
    for (size_t i = 0; i < 3; i++)
    {
        printf("Enter the name of the driver\n ");
        gets(D[i].name);

        printf("Enter DL_NO\n");
        gets(D[i].DL);

        printf("Enter the route\n");
        gets(D[i].route);

        printf("Enter the distance driven by driver\n");
        gets(D[i].distance);
    }
}