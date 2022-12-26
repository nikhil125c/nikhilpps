#include <stdio.h>
#include <string.h>
struct person
{
    char name[20];
    int roll;
    int mark;
} person1, person2, person3, person4, person5;
int main()
{
    strcpy(person1.name, "ankit");
    strcpy(person2.name, "atul");
    strcpy(person3.name, "abhay");
    strcpy(person4.name, "manas");
    strcpy(person5.name, "nitesh");
    person1.roll = 1;
    person2.roll = 2;
    person3.roll = 3;
    person4.roll = 4;
    person5.roll = 5;

    person1.mark = 79;
    person2.mark = 89;
    person3.mark = 56;
    person4.mark = 43;
    person5.mark = 33;
    printf("name %s\n", person1.name);
    printf("roll %d\n", person1.roll);
    printf("mark %d\n", person1.mark);
    printf("name %s\n", person2.name);
    printf("roll %d\n", person2.roll);
    printf("mark %d\n", person2.mark);
}
