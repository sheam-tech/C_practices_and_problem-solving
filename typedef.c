#include<stdio.h>
struct book{
char name[20];
int price;
};
int main()
{
    typedef struct book metarial;
    metarial b={"tarikul islam",350};
    typedef int number;
    number v=10;
    printf("%d\n",v);
    printf("%s\n%d",b.name,b.price);
 getchar();
}
