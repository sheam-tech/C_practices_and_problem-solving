#include <stdio.h>//bruteforce method(not efficiant)
int main()
{
    int num1,num2,i,s,x,y,lcm;
    scanf("%d %d",&num1,&num2);
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
    for(i=1;s!=0;i++)
    {
        s=y%x;
        y=x;
        x=s;
    }
    lcm=(num1*num2)/y;
  printf("gcd=%d\nlcm=%d",y,lcm);
  return 0;
}
