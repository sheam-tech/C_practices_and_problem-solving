#include <stdio.h>
#include<string.h>

struct student{
    int id;
    float cgpa;
    char name[103];
    char school[100];
    char distric[100];
}s;

int main() {
    printf("Enter Your id: ");
    scanf("%d",&s.id);

    printf("Enter Your name: ");
    scanf("%s", s.name);

    printf("Enter Your school: ");
    scanf("%s", s.school);

    printf("Enter Your Distric: ");
    scanf("%s", s.distric);

    printf("Enter Your CGPA: ");
    scanf("%f",&s.cgpa);

    return 0;

}
