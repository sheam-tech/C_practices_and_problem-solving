#include <stdio.h>

void update(int *a,unsigned int *b) {
    // Complete this function
    int x;
     int y;

    x=(*a+*b);
    y=(*a-*b);
    *a=x;
    *b=y;
}

int main() {
    int a, b;
    int *pa, *pb;
    pa = &a;
    pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%u", a, b);

    return 0;
}
