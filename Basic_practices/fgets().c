#include <stdio.h>
int main()
{  FILE *pntr;
    pntr=fopen("Test1.txt","r");
    if(pntr==NULL)
        printf("ERROR!");
    else
        printf("Test1.txt File opened\n");
   char ch[2000];
   while(!feof(pntr))
   {
     fgets(ch,1000,pntr);
     printf("%s",ch);
   }
   fclose(pntr);
   return 0;
}

