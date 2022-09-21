#include <stdio.h>
int main()
{  FILE *pntr;
    pntr=fopen("C:/Users/tarik/OneDrive/Desktop/ibadat.txt","r");
    if(pntr==NULL)
        printf("ERROR!");
    else
        printf("Test1.txt File opened\n");
   char ch[2000];
   char ch1[2000];
   char ch2[2000];
   char ch3[2000];
   char ch4[2000];
   char ch5[2000];
     fscanf(pntr,"%s %s %s %s %s %s",&ch,&ch1,&ch2,&ch3,&ch4,&ch5);
     printf("%s %s %s %s %s %s",ch,ch1,ch2,ch3,ch4,ch5);
   fclose(pntr);
   return 0;
}

