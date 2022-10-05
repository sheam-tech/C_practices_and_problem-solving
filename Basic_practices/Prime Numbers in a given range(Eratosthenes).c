#include <stdio.h>
 #include <math.h>
int b, a;
int ara[100000];
void sieve( int b){
     int i, j, root;
     ara[0] = NULL;
     ara[1] = 0;
     for(i = 2; i <=b; i++) {
         ara[i] = 1;
     }
     root = sqrt(b);

     for(i = 2; i <= root; i++) {
         if(ara[i] == 1) {
             for(j = 2; i * j <= b; j++) {
                 ara[i * j] = 0;
             }

         }
     }
 }
int is_prime(int n)
 {
     int i, root;
     if(n == 2) {
         return 1;
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
 {  int t;
     printf("Please enter the number of test case=");
     scanf("%d", &t);
     int count,i;
     while(t--) {
         printf("\t\tHelp me presenting the prime numbers from a to b, \n\t\tWhere a and b must be a natural number(1<=a<=b<=100000):-----\n\n\n");
         printf("Please enter the value of a=");
         scanf("%d", &a);
     printf("Please enter the value of b=");
         scanf("%d", &b);
         if(a<0||b<0||a>b){
            printf("!!!---Please follow the condition: (1<=a<=b<=100000)---!!!");
         }else if(a==b){

         if(a == 0) {
             printf("!!!---Please follow the condition: (1<=a<=b<=100000)---!!!");
         }
         else if(1 == is_prime(a)) {
             printf("%d is a prime number.\n", a);
         }
         else {
             printf("%d is not a prime number.\n", a);
         }

         }
        else{
         sieve(b);
         for(int i=a;i<=b;i++){
            if(ara[i]==1){
                count++;
            }
         }
          printf("\nThere are %d prime numbers between %d and %d\n",count,a,b);
          printf("\nThey are-\t");
          for(int i=a;i<=b;i++){
            if(ara[i]==1){
           printf("%d\t",i);
            }
         } }
         printf("\n\n\n");

     }
     return 0;
 }



