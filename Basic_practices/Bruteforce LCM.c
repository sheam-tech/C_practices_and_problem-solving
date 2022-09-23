#include <stdio.h>)//bruteforce method(not efficiant)
int main()
{
    int num1,num2,a,i;
    scanf("%d %d",&num1,&num2);
    if(num1<num2)
        a=num2;
    else
        a=num1;
    for(i=a;;i++)
        {
            if(i%num1==0&&i%num2==0)
           {

            printf("%d",i);
            break;}
            else
            continue;
    }
    return 0;
}
