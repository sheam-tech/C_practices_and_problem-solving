#include <stdio.h>
int main()
{  while(1){

    int x,y,mod;
    float res;
    printf("devident=");
    scanf("%d",&y);
    printf("devidor=");
    scanf("%d",&x);

    res=y/x;
    mod=y-(x*res);
    printf("mod=%d\n",mod);
}
}
