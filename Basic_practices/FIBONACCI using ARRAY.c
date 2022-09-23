#include <stdio.h>
int main()
{
    int n;
    float j;
    printf("Enter the amount fibonacci of numbers:");
    scanf("%d",&n);
   int i;
   float fib[n];
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];

    }
    for(i=0;i<n;i++)
    {
        j=fib[i];
       printf("%.0f\t",j);
    }

    return 0;

}
