#include <stdio.h>//user defined function always main function er age declare kora ucit, noile kaj naw korte pare, or prototype declare korte hobe
float sum(float x, float y)
{
    return (.5*x*y);
}


int main()
{
   float a,b;
   scanf("%f %f",&a,&b);
  printf("%f",sum(a,b));
    return 0;
}
