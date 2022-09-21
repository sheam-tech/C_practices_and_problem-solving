#include <stdio.h>
#include <math.h>
int main()
{
 float i=3,n,fib1,fib,fib2;
scanf("%f",&n);
      fib1=0;
      fib2=1;
      printf("%.0f\n%.0f",fib1,fib2);
  while(i<=n)
  {

    fib=fib1+fib2;
    fib1=fib2;
    fib2=fib;
    printf("\n%.0f",fib);
    i++;
  }
    return 0;
}
