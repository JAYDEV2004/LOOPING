#include<stdio.h>
int main()
{
	int i=2000;
	printf("ENTER THE ANY YEAR BETWEEN THE 2000 TO 3000..");
	scanf("%d",&i);
	while(i<=3000)
	{
		if(i%4==0)
		printf("%d\n",i);
		i++;
		
	}
}