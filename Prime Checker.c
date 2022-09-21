#include <stdio.h>
int main()
{

 int i,a;
 int s=1;
while(1){
    scanf("%d",&a);
    if(a==0)
    printf("Zero is undefined");
    else if(a<0)
        printf("Prime concept isn't eligible for negative number");
    else{
    for(i=a-1;i>1;i--)
    {

    if(a%i==0){
    printf("Its not a prime number");
    break;
    } else if(i==2)
    printf("Its a prime number");


    }
    }  }

 return 0;

}

