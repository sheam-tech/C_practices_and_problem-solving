#include <stdio.h>
int main()
{
    int n,i=0, t;
    printf("Enter the number=");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        t=t / 10;
        i++;
    }
    printf("The quantity of digits in this number is=%d",i);
    return 0;
}
