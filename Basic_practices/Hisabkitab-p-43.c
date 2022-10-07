#include<stdio.h>
int main()
{
int p,q,c,res=1;
scanf("%d %d %d",&p,&q,&c);
p=p%c;
for(int i=0;i<(q/4);i++){
    res=res*p;
}
res=res*res*res*res;
printf("%d",res%c);
}
