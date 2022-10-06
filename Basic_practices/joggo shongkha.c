//example: 6.... 6=1*2*3(factors).... 1+2+3=6(asume 6 is a perfect number);
// determine these kind of number from 1 to N

#include <stdio.h>
#include <math.h>
int main()
{

        int x;
        int sum=0,sqroot;
        scanf("%d",&x);
                                                    //----- not good Algo-----
//        for(int j=1;j<x;++j){
//        for(int i=1;i<j;++i){
//            if(j%i==0){
//                sum=sum+i;
//            }
//        }
//        if(sum==j){
//            printf("%d\n",j);
//        }
//        sum=0;
//        }
                                                    //----- good Algo-----

        for(int j=1;j<=x;j++){

            sqroot=sqrt(j);
        for(int i=2;i<=sqroot;i++){
            if(j%i==0){
                sum=sum+i+(j/i);
            }
        }
        if(sum==j){
            printf("%d\n",j);
        }
            sum=1;//karon iteration e 1 ke bad disi
        }
    return 0;
}
