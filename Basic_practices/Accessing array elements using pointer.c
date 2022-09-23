#include <stdio.h>
int main()
{
  int a[5]= {10,20,30,40,50};
    int *p,i;
    p=&a[0];
    for(i=0;i<5;i++)
    {
    printf("%d\n",*p);
    p++;
    }
//------vul bikolpo------
//     void *p;
//     int i=0;
//    p=a;
//    for(i=0; i<5; i++)
//    {
//
//        printf("%d\n",*(int*)p);
//        p++;// in void pointer p++ wont work properly, it will give garbage value
//    }

//  int x[2]={10,11};
//  float y[1]={12};
//  void *p,*q;
//  p=&x[0];
//  q=&y;
//  printf("%d\n",*(int*)p);
//  p=&x[1];
//  printf("%d\n",*(int*)p);
//  printf("%f\n",*(float*)q);
//-------------------------------------------------
 // int *p,*q;
//  p=10;
//  q=20;
 // printf("%d\n%d\n",p,q);
}
