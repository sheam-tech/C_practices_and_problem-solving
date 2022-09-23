#include <stdio.h>

int main()
{


   int x=10;
   int y=x++;


    printf("%d %d\t",x,y);
    x++;
    printf("%d %d\t",x,y);
    y=x;
    printf("%d %d\t",x,y);
    return 0;
}
