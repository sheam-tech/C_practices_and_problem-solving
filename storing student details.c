#include <stdio.h>
int main()
{
    FILE *data;
    data=fopen("Student Info.txt","a");
    if(data==NULL)
        printf("ERROR!!!");
    else
        printf("File opened successfully");
//     fputs("Name",data);
//     fputs("\t\t",data);
//     fputs("Age",data);
//     fputs("\t\t",data);
//     fputs("Phone Number(11 digit)",data);
//     fputs("\n",data);
//     fputs("----\t\t----\t\t----",data);
//     fputs("\n",data);
    char name[1000];
    int age;
    int phone;
    int i,n;
    i=1;
    printf("\nThe amount of students present there is=");
    scanf("%d",&n);
    while ((getchar()) != '\n');//buffer clear korechi
    while(i<=n)
    {
        printf("\nEnter the name of The Student:");
        gets(name);
        printf("\nEnter the Age of The Student:");
        scanf("%d",&age);
        printf("\nEnter the Phone Number of The Student:");
        scanf("%d",&phone);
        while ((getchar()) != '\n');// buffer clear korechi
//        fputs(name,data);
//        fputs("\t\t",data);
//        fprintf(data,"%d",age);
//        fputs("\t\t",data);
//        fprintf(data,"%d",phone);
//        fputs("\n",data);
          fprintf(data,"%s\t\t%d\t\t%d\n",name,age,phone);
        i++;
    }
    fclose(data);
}
