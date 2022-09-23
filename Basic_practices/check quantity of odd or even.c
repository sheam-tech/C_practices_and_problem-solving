#include <stdio.h>
int main()
{

    int i=0;
    int x,o;
    int N=1;
    printf("\t\t\t\t\t\"WELCOME\"\n");
    printf("Enter 1 to determine the quantity of the odd number\nEnter 2 to determine the quantity of even number\n");
    scanf("%d",&o);
if(o==2)
{
        printf("Enter the Limit number to find quantity:");
        scanf("%d",&x);
    do{
        if(N%2==0)
        {
            i=i+1;
        }
        else{}
        N++;
        }
        while(N<=x);
        printf("The quantity of even number is=%d",i);
}
else if(o==1)
{
        printf("Enter the Limit number to find quantity:");
        scanf("%d",&x);
    do
    {
        if(N%2!=0)
        {
            i=i+1;
        }
        else{}
        N++;
    }
        while(N<=x);
        printf("The quantity of odd number is=%d",i);
}
else{
        printf("Invalid Input\nPlease try again later");

 }
getch();
}
