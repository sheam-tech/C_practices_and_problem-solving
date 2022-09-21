#include <stdio.h>
int main()
{
    char n[1000]=" Tarikul Islam";
    int i;
    int length=strlen(n);
    FILE *pntr;
    pntr=fopen("Test.txt","a");
    if(pntr==NULL)
        printf("ERROR!");
    else
        printf("Test.txt File opened");
    for(i=0; i<length; i++)
        fputc(n[i],pntr);
    printf("\nFile Written Successfully!");
    fclose(pntr);
    printf("\nTest.txt File closed...");
    return 0;
}
