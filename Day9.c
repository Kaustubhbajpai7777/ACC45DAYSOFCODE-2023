#include <stdio.h>

int main()
{
    float bs,da,hra,gs;
    printf("Enter the basic salary of ramesh\n");
    scanf("%f",&bs);
    da = 0.4*bs;
    hra = 0.2*bs;
    gs = bs+da+hra;     // Formula for Gross salary
    printf("basic salary of ramesh %f\n",bs);
    printf("dearness allowance %f\n",da);
    printf("house rent allowance %f\n",hra);
    printf("Gross salary of ramesh is %f\n",gs);
    return 0;
}
