#include <stdio.h>

int main() 
{
    int i,b,n,sum=0;
    printf("Give the number of which you want sum of its multiplication table:\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        b=n*i;
        sum+=b;
    }
    printf("%d",sum);
    return 0;
}
