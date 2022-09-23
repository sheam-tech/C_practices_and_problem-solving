#include <stdio.h>
int main()
{
    while(1)
    {
        int n,k,a,i;
        printf("Enter the number of people=");
        scanf("%d",&n);
        printf("Enter the number of Prizes=");
        scanf("%d",&k);
        printf("Enter the person to start=");
        scanf("%d",&a);
        int pos[n];
        for(i=0; i<n; i++)
        {
            pos[i]=0;
        }
        i=(a-1);
        while(k>0)
        {
            pos[i]++;
            if(i<=(n-1))
            {
                if(k==1)
                {
                    break;
                }
                i++;
                if(i==n)
                {
                    i=0;
                }
            }
            else if(i>(n-1))
            {
                i=0;
            }
            k--;
        }
        printf("\nLast prize goes to person %d, who got total %d prizes.",(i+1),pos[i]);
        printf("\n\n\n------------------------------------------------\n\n");
    }
    return 0;
}

