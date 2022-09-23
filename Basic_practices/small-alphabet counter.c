#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
   int count[26];
    gets(s);
     for(int i=0;i<26;i++){
        count[i]=0;
     }
    for(int i=0;i<strlen(s);i++){
        count[(int)s[i]-'a']++;
    }
     for(int i=0;i<26;i++){
            if(count[i]!=0){
                    printf("%c is present in the string for %d time\n",i+'a', count[i]);
            }

     }
}
