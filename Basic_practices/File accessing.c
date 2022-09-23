#include <stdio.h>
int main()
{   char n[1000];
    FILE *pntr;
    pntr=fopen("Test1.txt","a");
    if(pntr==NULL)
        printf("ERROR!");
    else
        printf("Test1.txt File opened");
    printf("\nType the contents:");
    gets(n);
    fprintf(pntr,"%s",n);
    fclose(pntr);
    pntr=fopen("Test1.txt","r");
        int ch;
//    while(ch!=-1)// ekahne -1 er jaygay EOF ow deya jeto , ekoi, cz eof mane end of file or error of file, end or error hole fgetc() function -1 return kore, jeta EOF nam e set kora ache librery file e
//          {   ch=fgetc(pntr);
//              printf("%c",ch);
//          }
   while(!feof(pntr))
   {
     ch=fgetc(pntr);
     printf("%c",ch);
   }
   fclose(pntr);
   return 0;
}
