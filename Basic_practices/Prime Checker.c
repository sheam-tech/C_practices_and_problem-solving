#include <stdio.h>
int is_prime(int n)
 {
     int i, root;
     if(n == 2) {
         return 1;
     }
     if(n<2) {
         return 0;
     }
     if(n % 2 == 0) {
         return 0;
     }
     root = sqrt(n);
     for(i = 3; i <= root; i = i + 2) {
         if(n % i == 0) {
             return 0;
         }
     }
   return 1;
 }

int main()
{

/*--------------------- inefficient Algo---------------
 int i,a;
 int s=1;
while(1){
    scanf("%d",&a);
    if(a==0)
    printf("Zero is undefined");
    else if(a<0)
        printf("Prime concept isn't eligible for negative number");
    else{
    for(i=a-1;i>1;i--)
    {

    if(a%i==0){
    printf("Its not a prime number");
    break;
    } else if(i==2)
    printf("Its a prime number");


    }
    }  }
*/
//--------------------- Better Algo ---------------------
int n, m;
     while(1) {
         printf("Please enter a number (enter 0 to exit): ");
         scanf("%d", &n);
         if(n == 0) {
             break;
         }
         if(1 == is_prime(n)) {
             printf("%d is a prime number.\n", n);
         }
         else {
             printf("%d is not a prime number.\n", n);
         }
     }
     return 0;

}

