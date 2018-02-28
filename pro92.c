#include<stdio.h>
int main()
{
	int n,num[50],i,sum=0;
	printf("\n enter the number:");
	scanf("%d",&n);
	printf("\n enter the numbers one by one:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+num[i];
	}
	printf("\n sum is:%d",sum);
	return 0;
}
