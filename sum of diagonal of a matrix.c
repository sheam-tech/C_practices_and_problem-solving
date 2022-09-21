#include<stdio.h>// algorithm to copy arrays
int main()
{
    int i,j,r,c;
    printf("Enter the row number of A matrix:");
    scanf("%d",&r);
    printf("Enter the column number of A matrix:");
    scanf("%d",&c);
    if(r==c){
    int A[r][c];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("A[%d][%d]=",(i+1),(j+1));
            scanf("%d",&A[i][j]);

        }
        printf("\n");
    }
    printf("A(%d,%d)=\n",r,c);
    for(i=0; i<r; i++)
    {
        printf("\t");
        for(j=0; j<c; j++)
        {
            printf("%d ",A[i][j]);

        }
        printf("\n");
    }

    int sum=0;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(i==j)
            {
                sum=sum+A[i][j];
            }
        }
    }




    printf("Sum of the matrics diagonal is %d.",sum);

    }
    else{
        printf("Row and column should be matched, because diagonal terms are only applicable for square matrics.");
    }

}



