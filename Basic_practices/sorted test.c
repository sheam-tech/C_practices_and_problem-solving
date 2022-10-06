#include <stdio.h>
int main()
{
    while(1)
    {
        int n;
        scanf("%d",&n);
        int x[n];
        int odho=0, udho=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&x[i]);
        }
        for(int i=0; i<n; ++i)
        {
            if((x[i]>x[i+1])||(x[i]==x[i+1]))
            {
                odho=0;

            }
            else
            {
                odho=1;

                break;
            }

        }
        for(int i=0; i<n; ++i)
        {
            if((x[i]<x[i+1])||(x[i]==x[i+1]))
            {
                udho=0;
            }
            else
            {
                udho=1;
                break;
            }

        }
        if(udho==0)
        {
            printf("UPPER SORTED");
        }
        else if(odho==0)
        {
            printf("LOWER SORTED");
        }
        else
        {
            printf("NOT SORTED");
        }
    }
    return 0;
}
