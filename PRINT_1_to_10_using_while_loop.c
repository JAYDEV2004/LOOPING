#include<stdio.h>
int main()
{
	int i=1;
	printf("please enter between 1 to 10 any number =");
	scanf("%d",&i);
	while(i<=10)
	{
		printf("%d\n",i);
		i++;
	}
}