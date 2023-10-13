#include <stdio.h>
int add(); 
int main()
{
	int k;
	k=add(); 
    printf("\t answer is  %d",k);
}
    int add()  
{
	int a,b,c;
	printf("\tenter two numbers to add\n\t");
	scanf("%d%d",&a,&b); 
	c=b+a;
	return c;
}
