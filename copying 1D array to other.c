#include<stdio.h>// algorithm to copy arrays
int main()
{ int i,n;
    printf("Enter howw many numbers do u want to copy:");
    scanf("%d",&n);
    int num1[n];
    int num2[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num1[i]);
    }
    printf("Array1:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",num1[i]);
    }
    for(i=0;i<n;i++)
    {
        num2[i]=num1[i];
    }
    printf("\nArray2:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",num1[i]);
    }
    }

