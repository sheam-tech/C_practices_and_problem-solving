#include <stdio.h>
int main()
{
    int a,b,c,x;
    scanf("%d %d %d", &a,&b,&c);
   /*if(a>b&&a>c) //x=(a>b&&a>c)?a:c;
            printf("%d is the biggest",a);
            if(b>c&&b>c)
            printf("%d is the biggest",b);
             else if(c>b&&c>a)
            printf("%d is the biggest",c);*/

 printf("%d is the biggest",a > b ? (a > c ? a : c) : (b > c ? b : c));
    }
