#include <stdio.h>
int main()
{
    int i,num[5];
    float avg,s;
    for(i=0;i<=4;i++)
    {
        scanf("%d",&num[i]);
    }
    s=0;
    for(i=0;i<=4;i++)
    {
            s=s+num[i];

    }
    printf("%d\n",i);
    avg=s/(i);
    printf("%.2f %.2f",s,avg);
    return 0;
}
