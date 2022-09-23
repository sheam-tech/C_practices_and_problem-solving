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
//    int sum=0;
//    for(i=0; i<r; i++)
//    {
//        for(j=i; j<c; j++)
//        {
//
//            sum=sum+A[i][j];
//
//        }
//    }
//
//
//
//
//    printf("Sum of the matrics upper triangle is %d.\n",sum);
//
//    int sum1=0;
//    for(i=0; i<r; i++)
//    {
//        for(j=0; j<=i; j++)
//        {
//
//            sum1=sum1+A[i][j];
//
//        }
//    }
//
//
//
//
//    printf("Sum of the matrics lower triangle is %d.",sum1);
//-------------------bikolpo niyom----------------------------
   int uppersum=0,lowersum=0;
   for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        if(i<=j)
        uppersum=uppersum+A[i][j];
        if(i>=j)
        lowersum=lowersum+A[i][j];
    }
   }
   printf("Sum of the matrics upper triangle is %d.\nSum of the matrics lower triangle is %d.",uppersum,lowersum);

    }
    else{
        printf("Row and column should be matched, because diagonal terms are only applicable for square matrics.");
    }


}



