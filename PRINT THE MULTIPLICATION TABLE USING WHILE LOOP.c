#include<stdio.h>
int main()
{
	int i, n=1;
	printf("ENTER THE NUMBER = ");
	scanf("%d",&i);
	printf("MULTIPLICATION OF TABLE FOR %d IS :\n\n ",i);
	while(n<=10)
	{
	 printf("\n%d x %d = %d\n",i,n,(i*n));
	 n++;
	}
	return 0;
}