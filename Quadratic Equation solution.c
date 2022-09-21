#include <stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x1,x2;
    printf("enter value of a,b,c in a real equation:");
    scanf("%f",&a);

    scanf("%f",&b);

    scanf("%f",&c);
    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    printf("values of roots are:%f %f",x1,x2);
    return 0;
}
