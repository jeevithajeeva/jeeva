#include<stdio.h>
int main()
{
	int n,k,num[50],i;
	printf("\n enter the number:");
	scanf("%d",&n);
	printf("\n enter k th value:");
	scanf("%d",&k);
	printf("\n enter numbers one by one:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=1;i<=n;i++)
	{
		while(i==k)
		{
			printf("\n%d",num[i]);
			break;
		}
	}
	return 0;
}
