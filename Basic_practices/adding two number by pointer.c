#include <stdio.h>
int main()
{
    int x=5,y=10,sum;
    int *p1,*p2;
    p1=&x;
    p2=&y;
    sum=*p1+*p2;
    printf("%d\n",sum);
}
