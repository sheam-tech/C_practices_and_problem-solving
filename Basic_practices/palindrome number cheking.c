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
    if(sum==n)
    printf("The number is palindrome");
    else
    printf("The number is not palindrome");
    return 0;
}
