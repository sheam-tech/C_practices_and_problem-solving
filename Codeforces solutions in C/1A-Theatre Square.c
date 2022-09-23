#include <stdio.h>
int main()
{
  long long int n,m,a,x,y;
    scanf("%lld %lld %lld",&n,&m,&a);
    x=ceil((double)m/a);
    y=ceil((double)n/a);
    printf("%lld",x*y);

/*      int y;
    scanf("%d",&y);
    printf("%d",y);*/
return 0;
}

