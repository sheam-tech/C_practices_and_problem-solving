#include <stdio.h>
#include<math.h>
int main()
{
    int base;
    float area;
    printf("Enter base:");
    scanf("%d",&base);
    area=M_PI*base*base;
    printf("The area is %.2f square unit",area);
    return 0;
}
