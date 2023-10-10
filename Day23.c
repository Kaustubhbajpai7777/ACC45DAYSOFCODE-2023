#include <stdio.h>
void add();
int main()
{
	add(); 
}
void add() 
{
	float a,b,c;
	printf("\tenter two numbers to add\n\t"); 
	scanf("%f%f",&a,&b);
	c=a+b;
	printf("\t addtion is:%f",c); 
}
