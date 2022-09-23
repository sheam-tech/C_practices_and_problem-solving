#include <stdio.h>
void max(int x[]);
int main()
{
    int num[]={4,3,5,2,4,2,5};

    max(num);
}
void max(int x[])
{
    int i=0,max=x[i];
    for(i=0; i<=6; i++)
    {if(x[i]>max)
    max=x[i];}
    printf("%d",max);
}
