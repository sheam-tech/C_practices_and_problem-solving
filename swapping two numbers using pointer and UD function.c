#include <stdio.h>
//-------bikolpo1------------
//void swap(int a, int b)
//{
//    int *p1,*p2,swap;
//    p1=&a;
//    p2=&b;
//    swap=*p1;
//    *p1=*p2;
//    *p2=swap;
//    printf("%d %d",a,b);
//}----------------------------
//int swapedy(int a, int b)
//{
//    int *p1,*p2,swap;
//    p1=&a;
//    p2=&b;
//    swap=*p1;
//    *p1=*p2;
//    *p2=swap;
//    return b;
//}
// evabe double funct. diye kora jabe na karon ekbar value change hoye gese,porer func. e vul man dekhabe vule mane dekhabe
//-----------------bikolpo2--------------
void swap(int *a, int *b)//ekhane a er moddhe address joma hobe ,*a er moddhe na(its only aplicable for when inputiing a function variable value from main function, ofcourse u have to input the addess to the pointer format, other wise it wont work)
{
    int swap;
    swap=*a;
    *a=*b;
    *b =swap;
}

int main()
{
    int x=5,y=10;
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    swap(&x,&y);
    printf("x=%d\n",x);
    printf("y=%d\n",y);

}

