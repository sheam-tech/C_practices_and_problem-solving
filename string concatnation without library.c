#include <stdio.h>
int main()
{
    char p[100]="My name is ";
    char t[]="tarikul";
    int i=0;
    int len,j=0;
    len=0;
    for(i=0; p[i]!='\0'; i++)
    {
        len++;
    }// already len er man 1 beshi ase
    //--------------bikolpo 1---------------
//    while(t[j]!='\0')
//    {
//        p[len+j]=t[j];
//        j++;
//
//    }
    //--------------bikolpo 2---------------
//    for(j=0; t[j]!='\0'; j++)
//    {
//        p[len]=t[j];
//        len++;
//    }
    //--------------bikolpo 3---------------
      for (j = 0; t[j] != '\0'; j++,len++)
      {
          p[len] = t[j];
      }
    printf("%s",p);
    return 0;
}
