#include <stdio.h>

int main()
{
   int a;
   int vippass=0;
       vippass=1;
   printf("Write the age\n");
   scanf("%d",&a);
   if((a<=90 && a>=18) || vippass==1){
       printf("You are above 18 and below 90, can drive\n");
   }
   else{
       printf("You below 18 or above 90, cannot drive\n");
   }
    return 0;
}
