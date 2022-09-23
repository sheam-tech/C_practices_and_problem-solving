#include <stdio.h>
union test{
 int x,y;
 char c;
 char d;
 double a1;
 double a2;
 float f1;
 float f2;
 char t[20];
};
struct test1{
int h;
int o;
char g;

} r;
int main()
{
   union test t1;
   t1.c='A';
   t1.c='a';
   t1.a1=60;
   t1.f2=70;
   printf("%d\n%d\n%c\n%c\n%lf\n%lf\n%f\n%f",t1.x,t1.y,t1.c,t1.d,t1.a1,t1.a2,t1.f1,t1.f2);
   printf("\n%ld",sizeof(t1.t));
   printf("\n%ld",sizeof(r));//// padding and packing consept er karone size besi hoye gese,cz variable gular byte padding kore beshi memory niye save korbe, ei extra memory padding er jonno, as they are in a group of sructure, its easy for a prcessor to use structure padding to save, to learn more read structure alignment or this http://www.c-faq.com/struct/align.html
}

