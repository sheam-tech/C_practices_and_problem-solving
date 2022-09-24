#include <stdio.h>
long int gcd(long int num1,long int num2)
{ long int x,y,s=1;
         if(num1>num2)
       {

        x=num2;
        y=num1;
        }
    else
       {

        x=num1;
        y=num2;
        }
    for(long int i=1;s!=0;i++)
    {
        s=y%x;
        y=x;
        x=s;
    }
    return y;
}
long int gcd(long int num1, long int num2);

long int lcm(long int a,long int b)
{

    return ((a*b)/gcd(a,b));
}
int main()
{
    long int n,i,j,t;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    long int count=0;
    for( i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(lcm(i,j)/gcd(i,j)<=3)
            {
                ++count;
            }
        }
    }
    printf("%ld",count);
    }
return 0;
}

