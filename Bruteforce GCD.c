#include <stdio.h>//bruteforce method(not efficiant)
int main()
{
    int num1,num2,x,a,i;
    scanf("%d %d",&num1,&num2);
    if(num1<num2)
        a=num1;
    else
        a=num2;
    for(i=1;i<=a;i++)
    {
        if(num1%i==0&&num2%i==0)
            x=i;
        else
            continue;
    }
    printf("%d",x);
}
