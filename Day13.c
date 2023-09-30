#include <stdio.h>

int main()
{
    // Reversing the six digit number
    int n,d6,d5,d4,d3,d2,d1;
    long int revnum;
    printf("Enter six digit number (less than 327678):\n");
    scanf("%d",&n);
    d6 = n%10; n = n/10;
    d5 = n%10; n = n/10;
    d4 = n%10; n = n/10;
    d3 = n%10; n = n/10;
    d2 = n%10; n = n/10;
    d1 = n%10; 
    revnum = d6*100000 + d5*10000 + d4*1000 + d3*100 + d2*10 + d1;
    printf("The reversed number is %ld\n",revnum);
    return 0;
}
