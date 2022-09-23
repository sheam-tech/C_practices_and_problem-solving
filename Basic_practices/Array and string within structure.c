#include <stdio.h>

struct person
{   char name[50];
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
        printf("Name:");
        fflush(stdin);//amra ei string use er shomoy null char. define kori nai, tai error aste pare, input buffer problem solve er jonno ei function diye iput buffer clean kora jay...
        gets(person[i].name);
        printf("Age:");
        scanf("%d",&person[i].age);
        printf("Salary:");
        scanf("%d",&person[i].salary);

    } printf("\n\n\n");
    for(i=0;i<4;i++)
    {
        printf("person %d information:\n",i+1);
        printf("Name:");
        printf("%s\n",person[i].name);
        printf("Age:");
        printf("%d\n",person[i].age);
        printf("Salary:");
        printf("%d\n\n",person[i].salary);


    }

}

