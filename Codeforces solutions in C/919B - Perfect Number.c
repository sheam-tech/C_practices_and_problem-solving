#include<stdio.h>
int main()
{
  int k,sum,remainder,t,count=0,j=17;
          scanf("%d",&k);
while(j++){
            t=j;
            sum=0;
    while(t)
    {
        remainder=t % 10;
        sum=sum + remainder;
        t=t / 10;
    }
    if(sum==10){
        count++;
    }
    if(count==k){

        break;
    }
  }
  printf("%d",j);
  return 0;
}
