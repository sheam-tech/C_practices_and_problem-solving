#include <stdio.h>
int main()
{
    char s[1000]="madam",su[1000];
    int x=0;
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
    printf("%s\n",su);
    for (i=0;s[i]!='\0';i++)
    {
        if(su[i]==s[i])
        {
            x++;

        }else
        continue;
    }
    x=x-1;
    if(x==j)
        printf("its a palindrome string");
    else
        printf("its not a palindrome string");
}
