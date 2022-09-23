#include <stdio.h>
int main ()
{
    int n;
    char row,col;
    printf("Entter the value of n=");
    scanf("%d",&n);
    int i=1;
        for(row='A';i<=n;row++)
        {
            for(col='A';col<=row;col++)
            {
                printf("%c ",row);
            }
            printf("\n");
            i++;

    }
}

