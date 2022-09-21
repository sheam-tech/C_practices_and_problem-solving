#include <stdio.h>
int main()
{

 int i,a;
 int s=1;
while(1){
        printf("Enter the number:");
    scanf("%d",&a);
    if(a==0)
    printf("1");
    else if(a<0)
        printf("There is no Factorial of negative number");
    else{
    for(i=a;i>=1;i--)
    {
    s=s*i;
    if(i==1)
    printf("%d",s);
    }
    }}

 return 0;

}
