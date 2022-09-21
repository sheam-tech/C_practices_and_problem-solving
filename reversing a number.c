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
        sum=sum*10 + remainder;
        t=t / 10;
    }
    printf("reverse number of the number are=%d\n",sum);
    return 0;
}
