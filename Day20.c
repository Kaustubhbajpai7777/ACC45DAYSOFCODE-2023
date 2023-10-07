#include <stdio.h>

int main()
{
   int p,m,c;
   float total;
   printf("enter marks in p\n");
   scanf("%d",&p);
   printf("enter marks in m\n");
   scanf("%d",&m);
   printf("enter marks in c\n");
   scanf("%d",&c);
   total=(p+m+c)/3;
   if((total<40) || p<33 || m<33 || c<33){
       printf("your total percentage is %f and you are fail\n",total);
   }
   else{
       printf("your total percentage is %f and you are pass\n",total);
   }
    return 0;
}
