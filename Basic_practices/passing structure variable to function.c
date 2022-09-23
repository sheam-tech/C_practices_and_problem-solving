#include<stdio.h>
struct person
{
 char name[50];
 int age;
 int salary;
};
void print(struct person p)
{
    printf("%s\n",p.name);
    printf("%d\n",p.age);
    printf("%d\n",p.salary);
}
int main()
{
    struct person person1;
    strcpy(person1.name,"Tarikul islam");
    person1.age=25;
    person1.salary=600000;
    print(person1);
}
