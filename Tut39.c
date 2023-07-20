#include <stdio.h>
#include <string.h>
union student
{
    int id;
    int marks;
    char fav_char;
    char name[55];
};

int main()
{
    union student s1;
    strcpy(s1.name, "Harry");
    s1.marks = 45;
    s1.fav_char = 'u';
    s1.id = 1;

    printf("The id is %d\n", s1.id);
    printf("The marks is %d\n", s1.marks);
    printf("The fav char is %c\n", s1.fav_char);
    printf("The name is %s", s1.name);

    return 0;
}