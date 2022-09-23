#include <stdio.h>
int main()
{
    int x;
    printf("\"Welcome to Charatcter Transformation Engine\"\n 1.input 1 to transform character upper too lower;\n 2.input 2 to transform character lower to upper;\n");
    scanf("%d", &x);
    if (x == 1)
    {
        char upper, lower;
        printf("Enter the character=");
        scanf(" %c", &upper);

        printf("The lower case is=%c", upper+32);
    }
    else if (x == 2)
    {
        char lower, upper;
        printf("Enter the character=");
        scanf(" %c", &lower);    /* if else, loop, switch case er under e scanf k charecter scan korar jonno use korle %c er age ekta space diye nite hoy ,
         noile program keyboard er enter key k read kore new line create kore and charecter read kore na,..... fole scanf thik moto kaj kore na,
         it is also known as keyboard buffer issue or input stream issue....https://www.youtube.com/watch?v=uNVfJLudeAQ&t=240s */

        printf("the upper case is=%c",lower-32);
    }
    else
    {
        printf("Miss Guid-_-");
    }
    return 0;
}
