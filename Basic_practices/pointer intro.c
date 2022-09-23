#include <stdio.h>
int main()
{
    int x=5,y=10;
    char f='h';
    int *p;
    char *g;
    p=&x;
    g=&f;
    printf("%d\n",x);
    printf("%u\n",&x);
    printf("%u\n",p);
    printf("%d\n",*p);
    printf("%u\n",&p);//pointer er address
    printf("%u\n",&f);
    printf("%c\n",*g);
}
