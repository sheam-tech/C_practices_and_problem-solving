#include <stdio.h>
int main()
{
    char n[1000]=" Abul Kashem";
    int i;
    int length=strlen(n);
    FILE *pntr;
    pntr=fopen("Test1.txt","a");
    if(pntr==NULL)
        printf("ERROR!");
    else
        printf("Test1.txt File opened");
        fputs("\n",pntr);
        fputs(n,pntr);
    printf("\nFile Written Successfully!");
    fclose(pntr);
    printf("\nTest1.txt File closed...");
    return 0;
}
