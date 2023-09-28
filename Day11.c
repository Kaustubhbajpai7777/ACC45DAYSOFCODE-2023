#include <stdio.h>

int main()
{
    float celsius;
    float fahrenheit;
    printf("Enter temperature in celsius:\n");
    scanf("%f",&celsius);
    printf("The given value of celsius in fahrenheit is %f",fahrenheit=(celsius*9/5)+32);
    return 0;
}
