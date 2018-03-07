#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("\n enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\nsum of  n natural numbers is %d",sum);
	return 0;
}
