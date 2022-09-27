#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    struct vector{
    int x;
    int y;
    int z;
    };
typedef struct vector vect;
vect vector[n];
for(int i=0;i<n;i++){
    scanf("%d %d %d",&vector[i].x,&vector[i].y,&vector[i].z);
}
int x=0,y=0,z=0;
for(int i=0;i<n;i++){
x=x+vector[i].x;
y=y+vector[i].y;
z=z+vector[i].z;
}
if(x==0&&y==0&&z==0){
    printf("YES");
}else{
    printf("NO");
}
return 0;
}
