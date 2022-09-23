#include <stdio.h>
void sum(int x[7]);
int main()
{
    int num[]={4,3,5,2,4,2,5};

    sum(num);
}
void sum(int x[])
{
    int i;
    for(i=0; i<=6; i++)
    printf("%d ",x[i]);
}
