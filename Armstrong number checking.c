#include <stdio.h>
#include <math.h>
//An Armstrong number is one whose sum of digits raised to the power three equals the number itself.
//int main()
//{
//    int n, t, remainder;
//    float sum = 0;
//    printf("Enter the number=");
//    scanf("%d",&n);
//    t=n;
//    int p=3;
//    while(t!=0)
//    {
//        remainder=t % 10;
//        sum=sum+pow(remainder,p);//pow() function always float return kore, tai sum k float kore neya tai best, noile ans wrong ashbe
//        t=t / 10;
//    }
//    if(sum==n)
//    printf("The number is Armstrong");
//    else
//    printf("The number is not Armstrong");
//    return 0;
//}
int main()
{
    int t,i,sum = 0,remainder;
    printf("Armstrong numbers from 1 to 1000 are:\n");
    for(i=1; i<=1000; i++)
    {
        t=i;

        while(t!=0)
        {
            remainder=t % 10;
            sum=sum+remainder*remainder*remainder;//pow() function always float return kore, tai sum k float kore neya tai best, noile ans wrong ashbe
            t=t / 10;
        }
        if(sum==i)
            printf("%d\n",i);
        sum=0;//protibar sum=0 kore dite hobe , cz sum er man proti loop sese ar 0 thake na, change hoy
    }

    return 0;
}
