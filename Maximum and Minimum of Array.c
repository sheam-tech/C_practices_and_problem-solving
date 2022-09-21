#include <stdio.h>
int main()
{  int n;
    printf("Enter the amount of numbers:");
    scanf("%d",&n);
    int num[n],i;
    for(i=0;i<n;i++)
    {
      scanf("%d",&num[i]);

    }
    int max;
    max=num[0];
    for(i=1;i<n;i++)
    {
        if(max<num[i])
            max=num[i];
    }

    int min;
    min=num[0];
    for(i=1;i<n;i++)
    {
        if(min>num[i])
            min=num[i];
    }
    if(max!=min){
    printf("The biggest number is:%d\n",max);
    printf("The minimum number is:%d",min);}
    else{
    printf("These numbers are equal...",min);
    }
    return 0;
}
