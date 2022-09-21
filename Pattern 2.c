#include <stdio.h>
int main ()
{
    int n;
    char row,col;
    printf("Entter the value of n=");
    scanf("%d",&n);
    //--------bikolpo-1-----------
//    int i=1;
//        for(row='A';i<=n;row++)
//        {
//            for(col='A';col<=row;col++)
//            {
//                printf("%c ",col);
//            }
//            printf("\n");
//            i++;
//
//    }
//------bikolpo 2---------
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",col+64);
        }
        printf("\n");
    }
}

