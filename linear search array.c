#include <stdio.h>
int main()
{   int n,i;
    int array[14]={12,34,54,56,2,23,45,1,2,3,4,1,8,90};// also can take input from user
    printf("Enter the value:");
    scanf("%d",&n);
    int x=0;//for testing the loop activated or not
    for(i=0;i<14;i++)
    {
        if(array[i]==n)
        {
            printf("%dth numbers value is %d\n",i+1,n);
            x=x+1;
        }

    }
    if(x==0)
        printf("Number not found");
    return 0;

}
