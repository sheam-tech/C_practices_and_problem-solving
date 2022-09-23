#include <stdio.h>// local or global , jekono ekta rakhlei hobe
//global structure
struct person
{
    int age;
    int salary;
};
// global variable
struct person d1,d2,d3;
int main()
{  //local structure
     struct person
{
    int age;
    int salary;
};
    struct person d2,d3;
    struct person d1={27,25000}; //direct value assign
    d2=d1; // structure copy assign
    d3.age=500; //individual assign
    d3.salary=60000; //individual assign
    printf("%d\n",d1.age);
    printf("%d\n",d1.salary);
    printf("%d\n",d2.age);
    printf("%d\n",d2.salary);
    printf("%d\n",d3.age);
    printf("%d\n",d3.salary);
}

