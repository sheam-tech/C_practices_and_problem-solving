#include <stdio.h>
#include<string.h>
int main()
{
    char s[10000];
    fgets(s,10001,stdin);
    char *word;
    int count=0;
    word=strtok(s," ,-?'\!;:");// https://youtu.be/nrO_pXGZc3Y to know more about this function
    while(word!=NULL){

        if(strlen(word)>0){
            count++;
        }
        word=strtok(NULL," ,-?'\!;:");
    }
    printf("%d",count);
}
