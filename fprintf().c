#include <stdio.h>
int main()
{
    char n[1000];
    int age;
    FILE *pntr;
    pntr=fopen("Test1.txt","a");
    if(pntr==NULL)
        printf("ERROR!");
    else
        printf("Test1.txt File opened");
         printf("\nEnter your name:");
         gets(n);
        fputs("\n",pntr);
        printf("Enter your age:");
        scanf("%d",&age);
        fprintf(pntr,"Name:%s\nAge:%d",n,age);
    printf("\nFile Written Successfully!");
    fclose(pntr);
    printf("\nTest1.txt File closed...");
    return 0;
}
