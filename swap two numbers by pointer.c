#include <stdio.h>
int main()
{
    int x=5,y=10,swap;
    int *p1,*p2;
    p1=&x;
    p2=&y;
//    swap=p1;//adress niye kaj kora jabe na cz adress niye korle swapping er shomoy prothom address er value haraya jay, ang garbage value theke jay
//    p1=p2;
//    p2=swap;
    swap=*p1;
    *p1=*p2;
    *p2=swap;
    printf("x=%d\n",x);
    printf("y=%d\n",y);
}
