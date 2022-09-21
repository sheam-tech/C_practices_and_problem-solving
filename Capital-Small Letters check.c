#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);

    if(c>='A'&&c<='Z'){
        printf(" Its a Capital Letter\n");
    }
    else{
        printf("Its Small Number\n");
    }
    (c>='A'&&c<='Z')?printf(" Small form is %c",c+32):printf("Capital form is %c",c-32);
 getch();
    }
