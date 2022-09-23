#include <stdio.h>
void print(char x[]);
int main()
{
    char string[]="sheam";

    print(string);
}
void print(char x[])
{   int i;
     for(i=0;x[i]!=0;i++)
     printf("%c\n",x[i]);
}

