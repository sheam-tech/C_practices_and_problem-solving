#include <stdio.h>
int main()
{
    FILE *txt;
    char name[1000];
    printf("Enter the name of the text file with extension:");
    gets(name);

if ((fopen(name, "r")))
    printf("\ncreated");
    else
    printf("\nnot created");
}
