#include <stdio.h>

int main()
{
    int a,b,c,max;
    printf("Enter the three integer numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    max=(a>b?(a>c?a:c):(b>c?b:c));
    printf("max of %d,%d and %d is %d\n",a,b,c,max);
    return 0;
}
