#include <stdio.h>
int main()
{
    char s[1000]="madam",su[1000]="Sheam",m[1000];
  strupr(s);
  strlwr(su);
    int x=0;
    int i,j=0;

    for(i=0; s[i]!='\0'; i++)
    {
       m[i]=s[i];
    }
    for(i=0; s[i]!='\0'; i++)
    {
       s[i]=su[i];
    }
    for(i=0; s[i]!='\0'; i++)
    {
       su[i]=m[i];
    }
    printf("s=%s su=%s",s,su);
}
