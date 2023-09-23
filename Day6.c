#include <stdio.h>

int main()
{
   int i,n,prime=1;
   printf("Give the number\n");
   scanf("%d",&n);
   for(i=2;i<n;i++) {
        if(n%i==0) {
        prime=0;
        break;
        }
   }
   if(prime==0 && n!=2) {
       printf("the number is not prime number\n");
   }
   else {
       printf("the number is prime number\n");
   }
   
    return 0;
}

