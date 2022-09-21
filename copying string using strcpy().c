#include <stdio.h>
int main()
{
    char source[1000];
  gets(source);
  printf("%s\n",source);
  char target[1000];
  strcpy(target,source);
    printf("%s",target);

}
