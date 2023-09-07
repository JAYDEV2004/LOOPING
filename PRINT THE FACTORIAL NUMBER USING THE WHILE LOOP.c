#include<stdio.h>
int main()
{
	long int i,n=1,factorial_number=1;
	printf("ENTER THE ANY YOUR NUMBER = ");
	scanf("%d",&i);
	while(n<=i)
	{
	   factorial_number= factorial_number*n;
	   n++;
	}
	printf("FACTORIAL OF %d is %d",i,factorial_number);
}