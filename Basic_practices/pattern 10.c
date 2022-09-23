#include <stdio.h>
int main()
{
 int row,col,n;
 int i=1;
 printf("Entter the value of n=");
    scanf("%d",&n);
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",row);
        }
        printf("\n");
    }
}
