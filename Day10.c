#include <stdio.h>
#include <math.h>
int main()
{
    float a;
    int b;
    printf("Give the base and exponent\n"),
    scanf("%f %d",&a,&b);
    printf("Value of a to the power b is %f\n",pow(a,b));
    return 0;
}
