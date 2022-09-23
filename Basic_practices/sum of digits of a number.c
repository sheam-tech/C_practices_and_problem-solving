#include <stdio.h>
int main()
{
    int n, t, sum = 0, remainder;
    printf("Enter the number=");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        remainder=t % 10;
        sum=sum + remainder;
        t=t / 10;
    }
    printf("sum of the digits are=%d\n",sum);
    return 0;
}
