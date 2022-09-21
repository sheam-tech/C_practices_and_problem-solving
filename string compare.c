#include<stdio.h>
int main()
{
    char string1[100]="my name is sheam", string2[100]="my name is sheam";
    int i=strcmp(string1,string2);
    if(i==0)
        printf("Equal");
    else
        printf("not equal");

}
