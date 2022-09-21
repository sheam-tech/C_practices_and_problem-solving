#include <stdio.h>
int main()
{
    int n,row,col,count;
    printf("Enter the value of N=");
    scanf("%d",&n);
   count=0;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=(row);col++)
        {
            printf("%d ",++count);

        }
        printf("\n");
    }
}
