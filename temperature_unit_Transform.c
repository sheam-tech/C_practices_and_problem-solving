#include <stdio.h>
int main()
{
  int x;
    float c,f;
    printf("1. Farenhite to Celcius\n2. Celcius to Farenhite\nPress the digit and enter to choose the scale to scale for transform--");
    scanf("%d",&x);
    if(x==1){
    printf("Enter the scale reading point=");
    scanf("%f",&f);
    c=((f-32)*5)/9;
    printf("%.2f",c);
    }
    else if(x==2){
    printf("Enter the scale reading point=");
    scanf("%f",&c);
    f=((c*9)/5)+32;
    printf("%.2f",f);
    }
    else{
        printf("Invalid Input!!!");
    }
   return 0;
}