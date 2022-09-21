#include <stdio.h>
float sum(float x, float y)
{
    int r=1,i;
    for(i=1; i<=y; i++)
    {
        r=r*x;
    }
    return (r);
}


int main()
{
    float a,b;
    printf("enter base:");
    scanf("%f",&a);
    printf("enter power:");
    scanf("%f",&b);
    printf("%.2f",sum(a,b));
    return 0;
}
