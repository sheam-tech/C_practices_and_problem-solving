#include <stdio.h>
int main()
{
    int x=5,y=10,z=15;
    int *p;
    p=x;
    printf("%d\n",p);
    p=&y;
    printf("%d\n",*p);
    p=&z;
    printf("%d\n",*p);
 int array[5]={1,2,3,4,5};
 int *t;
 int i;

 t =array;

 for(i=0;i<5;i++)
    { printf("%d",*t);//star dita hobe, array-pointer relation normal variable pointer relation er moto na//p[i]=*(p+i); ekhane p=p[0]
     t++ ;

    }
return 0;

}
