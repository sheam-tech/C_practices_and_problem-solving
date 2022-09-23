#include <stdio.h>
#include <math.h>
int main()
{
 int s=13,n=1,x=0,a=13;

  while(n<=100)
  {
    s=s+(pow((-1),n)*x);
    x=a+((n-1)*13);
    n++;
  }
  printf("%d",s);

    return 0;
}
