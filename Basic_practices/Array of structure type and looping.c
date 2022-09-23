#include <stdio.h>
struct person
{
    int age;
    int salary;
};
struct person d1,d2,d3;
int main()
{   int i;
    struct person person[4];
    for(i=0;i<4;i++)
    {
        printf("Enter person %d information:\n",i+1);
        printf("Age:");
        scanf("%d",&person[i].age);
        printf("Salary:");
        scanf("%d",&person[i].salary);

    } printf("\n\n\n");
    for(i=0;i<4;i++)
    {
        printf("person %d information:\n",i+1);
        printf("Age:");
        printf("%d\n",person[i].age);
        printf("Salary:");
        printf("%d\n\n",person[i].salary);


    }

}

