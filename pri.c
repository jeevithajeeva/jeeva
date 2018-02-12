#include<stdio.h>
int main()
{
	int num,i,prime=0;
	printf("\n enter the number:");
	scanf("%d",&num);
	for(i=2;i<=num/2;++i)
	{
	if(num%i==0)
	{
		prime=1;
		break;
	}
	}
	if(prime==1)
	{
		printf("\n %d is not a prime number:");
	}
	else
	{
		printf("\n %d is a prime number:");
	}
	return 0;
}
