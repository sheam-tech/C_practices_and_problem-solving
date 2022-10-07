#include<stdio.h>
#include<string.h>

#define MAX_SIZE 10000
int main()
{
    int T,N,i,j,*temp;

    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        char *name[N];
        //memory allocation
        for(i=0;i<N;i++){
            name[i]=(char*)malloc(MAX_SIZE*sizeof(char));
        }
        temp=(char*)malloc(MAX_SIZE*sizeof(char));
        //input string
        for(i=0;i<N;i++){
            scanf("%s",name[i]);
        }
         printf("\n");
        for(i=0;i<N;i++){
            for(j=i;j<N;j++){
                if(*name[i]>*name[j]){
                    strcpy(temp,name[i]);
                    strcpy(name[i],name[j]);
                    strcpy(name[j],temp);
                }
            }
            printf("%s\n",name[i]);
        }
        //delocate memory
        for(i=0;i<N;i++){
            free(name[i]);
        }
        free(temp);
    }
    return 0;
}
