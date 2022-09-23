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
}; //local variable
    struct person d1,d2,d3;
    d1.age=5;
    d1.salary=600;
    d2.age=50;
    d2.salary=6000;
    d3.age=500;
    d3.salary=60000;
    printf("%d\n",d1.age);
    printf("%d\n",d1.salary);
    printf("%d\n",d2.age);
    printf("%d\n",d2.salary);
    printf("%d\n",d3.age);
    printf("%d\n",d3.salary);
}
