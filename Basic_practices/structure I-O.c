#include <stdio.h>
struct person
{
    int age;
    int salary;
};

int main()
{
    struct person d1,d2,d3;
    printf("person 1s info:\n");
    printf("Age:");
    scanf("%d",&d1.age);
    printf("salary:");
    scanf("%d",&d1.salary);
    printf("person 2s info:\n");
    printf("Age:");
    scanf("%d",&d2.age);
    printf("salary:");
    scanf("%d",&d2.salary);
    printf("person 3s info:\n");
    printf("Age:");
    scanf("%d",&d3.age);
    printf("salary:");
    scanf("%d",&d3.salary);
    printf("Review:\n");
    printf("person 1s info:\n");
    printf("Age:");
    printf("%d\n",d1.age);
    printf("salary:");
    printf("%d\n",d1.salary);
    printf("person 2s info:\n");
    printf("Age:");
    printf("%d\n",d2.age);
    printf("salary:");
    printf("%d\n",d2.salary);
    printf("person 3s info:\n");
    printf("Age:");
    printf("%d\n",d3.age);
    printf("salary:");
    printf("%d\n",d3.salary);
}
