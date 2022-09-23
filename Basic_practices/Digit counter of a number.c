#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
int i;
  int num[10]={0};
  for(i=0;i<strlen(s);i++){
    if(s[i]=='0'){
        num[0]=num[0]+1;
    }if(s[i]=='1'){
        num[1]=num[1]+1;
    }if(s[i]=='2'){
        num[2]=num[2]+1;
    }if(s[i]=='3'){
        num[3]=num[3]+1;
    }if(s[i]=='4'){
        num[4]=num[4]+1;
    }if(s[i]=='5'){
        num[5]=num[5]+1;
    }if(s[i]=='6'){
        num[6]=num[6]+1;
    }if(s[i]=='7'){
        num[7]=num[7]+1;
    }if(s[i]=='8'){
        num[8]=num[8]+1;
    }if(s[i]=='9'){
        num[9]=num[9]+1;
    }
  }
  for(i=0;i<10;i++){
    printf("%d ", num[i]);
  }

    return 0;
}
