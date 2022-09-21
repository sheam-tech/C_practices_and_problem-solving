#include<stdio.h>
#include<string.h>
int main ()
{

    char *ptr;
    ptr=malloc(100);
    printf ("enter a character:\n");
    gets (ptr);
    puts (ptr);

    printf ("name = %c", *ptr);
}
