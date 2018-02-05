#include<stdio.h>
int main()
{
	int n,m;;
	printf("\n enter the number:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("\n %d",n);
	}
	else
	{
		m=n-1;
		printf("\n %d",m);
		
	}
	return 0;
}
