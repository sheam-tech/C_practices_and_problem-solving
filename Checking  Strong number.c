#include <stdio.h>//Strong number is a special number whose sum of the factorial of digits is equal to the original number.
int fact(int x)
{
    if(x==1)
    return x;
    else
    return x*fact(x-1);
}
int main()
{
    int t,n, sum = 0, remainder;
    printf("Enter a number=");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        remainder=t % 10;
        if(remainder!=0)
        sum=sum + fact(remainder);
        t=t / 10;

    }
    if(sum==n)
    printf("The number is a Strong number");
    else
    printf("The number is not a Strong number");
    return 0;
}
