#include <stdio.h>
int main()
{
    int n,row,col;
    printf("Enter the value of N=");
    scanf("%d",&n);
    for(row=n;row>=1;row--)
    {
        for(col=0;col<=(n-row);col++)
        {   if(col==0)
            continue;
            else
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("%d",row);
        }
        printf("\n");
    }
}


