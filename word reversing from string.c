#include <stdio.h>
#include<string.h>
/*char string[1000];
char word[1000];
gets(string);
int k=0,i=0;
for(int i=0;i<strlen(string);i++){

    if(string[i]!=' '){
        word[k]=string[i];
        k++;
    }
    else if(k>0){
        word[k]='\0';
        printf("%s",word);
        k=0;
       printf(" ");
    }

    }
if(k>0){
        word[k]='\0';
        printf("%s",word);
        k=0;
        printf(" ");
                }*/



void print_reverse(char str[])
{
    int i,len;
    len=strlen(str);
    for(i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
    printf(" ");
}
int main()
{
    int T,i,j,len;
    char str[1001],word[1001];
    scanf("%d",&T);
    while(T--){
        scanf(" %[^\n]",str);
        len=strlen(str);
        for(i=0,j=0;i<len;i++){
            if(str[i]!=' '){
                word[j]=str[i];
                j++;
            }
            else if(j>0){
                word[j]='\0';
                print_reverse(word);
                j=0;
            }
        }
        if(j>0){
                word[j]='\0';
                print_reverse(word);
            }
            printf("\n");
    }
    return 0;
}
