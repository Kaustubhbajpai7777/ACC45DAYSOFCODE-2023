#include <stdio.h>

int main()
{
    int i=1, n,factorial=1;
    printf("enter the number\n");
    scanf("%d",&n);
    do{
      factorial *=i; 
      i++;
    }
    while(i<=n);
    printf("the value factorial %d is %d\n",n,factorial);
    return 0;
}
