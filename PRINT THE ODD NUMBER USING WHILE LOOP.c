#include<stdio.h>
int main()
{
	int n, i=0;
	printf("ENTER THE ANY NUMBER = ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==1)
		printf("this is the odd number = %d\n",i);
		i++;
	}
}