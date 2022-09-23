#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void sort(int *n1, int *n2)
{
    int temp;
    if(*n1>*n2)
    {
        temp=*n1;
        *n1=*n2;
        *n2=temp;
    }
}
int main()
{
    int i,n,x;
     printf("Enter the quantity of numbers: ");
    scanf("%d",&n);
    int na[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &na[i]);
    }
    for(int j=0; j<pow(2,n); j++)
    {
        for(i=0; i<n-1; i++)
        {
            if(na[i]>na[i+1])
            {
                sort(&na[i],&na[i+1]);
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",na[i]);
    }

    return 0;
}
