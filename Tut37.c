#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    float marks;
    char fav_char;
    char name[55];
};
struct student Vikash, Abhishek, Ankit; 
void print(){
    printf("Give your big hand for: %s",Ankit.name);

}
int main()
{
    //struct student Vikash, Abhishek, Ankit;
    Vikash.id = 1;
    Abhishek.id = 4;
    Ankit.id = 38;
    Vikash.marks = 95.4;
    Abhishek.marks = 89.2;
    Ankit.marks = 80.4;
    Vikash.fav_char = 'A';
    Abhishek.fav_char = 'A';
    Ankit.fav_char = 'A';
    // printf("The id of Vikash is %d\n",Vikash.id);
    // printf("The id of Abhishek is %d\n",Abhishek.id);
    // printf("The id of Ankit is %d\n",Ankit.id);
    // printf("The marks of Vikash is %0.1f\n", Vikash.marks);
    // printf("The marks of Abhishek is %0.1f\n", Abhishek.marks);
    // printf("The marks of Ankit is %0.1f\n", Ankit.marks);
    // printf("The fav_char of Vikash is %c\n",Vikash.fav_char);
    // printf("The fav_char of Abhishek is %c\n",Abhishek.fav_char);
    // printf("The fav_char of Ankit is %c\n",Ankit.fav_char);
    strcpy(Ankit.name,"The student of the year  ankit raj ");
    print();

}