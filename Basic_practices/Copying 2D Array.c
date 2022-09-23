#include<stdio.h>// algorithm to copy arrays
int main()
{
    int i,r,c,j;
    printf("Enter how many the 2D arrays'/ Matrixs' row number you want to copy:");
    scanf("%d",&r);
    printf("Enter how many the 2D arrays'/ Matrixs' row number you want to copy:");
    scanf("%d",&c);
    int num1[r][c];
    int num2[r][c];
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&num1[i][j]);
        }
    }
    printf("Array1:\n");
    for(i=0; i<r; i++)
    {
        printf("\t");
        for(j=0; j<c; j++)
        {
            printf("%d",num1[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            num2[i][j]=num1[i][j];
    }
    printf("Array2:\n");
    for(i=0; i<r; i++)
    {
        printf("\t");
        for(j=0; j<c; j++)
        {
            printf("%d",num2[i][j]);
            printf(" ");
        }
        printf("\n");
    }
}

