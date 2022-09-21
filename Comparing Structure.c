#include <stdio.h>
struct person
{
    int age;
    int salary;
};
struct person d1,d2,d3;
int main()
{
     struct person
{
    int age;
    int salary;
};
    struct person d2,d3;
    struct person d1={27,25000};
    d2=d1;
    d3.age=500;
    d3.salary=60000;
    if(d1.age==d3.age && d1.salary==d3.salary)
    printf("equal");
    else
    printf("not equal");
}

