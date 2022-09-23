#include <stdio.h>
int main()
{
    char s[1000]="sheam",su[1000];
    int i,j=0;
    printf("%s\n",s);
    for(i=0; s[i]!='\0'; i++)
    {
        j++;
    }
    j=j-1;
    for(i=0; s[i]!='\0'; i++)
    {

        su[j-i]=s[i];
    }
    printf("%s",su);
}
