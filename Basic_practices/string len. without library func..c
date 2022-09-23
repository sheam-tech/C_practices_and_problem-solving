#include <stdio.h>
int main()
{ char c[100];
 int i=0;
 gets(c);
 while(c[i]!='\0')
    i++;
    printf("%d",i);//i er man ekhane 1 besi ache jeta perfect, we need this, noile 1 biyog korte hoto, cz laster ekta loop besi houar karone i er man 1 bere gese

}
