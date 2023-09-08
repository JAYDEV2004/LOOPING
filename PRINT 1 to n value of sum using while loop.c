#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf ("ENTER THE YOUR DESIRE VALUE = ");
	scanf ("%d",&n);
	
	while(i<=n)
	{
		printf("%d\n",i);
	    sum= sum+i;
		i++;
	}
	
	printf("\nSUM OF ALL VALUE WITH YOUR DESIRE VALUE = %d",sum);
}