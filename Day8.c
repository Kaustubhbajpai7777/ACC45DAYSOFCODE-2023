#include <stdio.h>

int main()
{
    int principal, years; 
    float rate, simpleinterest;
    printf("Enter the value of principal, years, rate\n");
    scanf("%d %d %f",&principal, &years, &rate);
    
    simpleinterest = principal*years*rate/100; 
    printf("the value of simpleinterest is %f\n",simpleinterest);
    return 0;
}
