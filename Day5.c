#include <stdio.h>

int main()
{
   int n,i=0,sum=0;
   printf("Give the number:\n");
   scanf("%d",&n);
   
   for(i; i<=n; i++){
       sum = sum + i; 
   }
   printf("The value of sum(1 to n) is %d\n",sum);
    return 0;
}
