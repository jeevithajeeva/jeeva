#include<stdio.h>
int main()
{
	int n,k,i,a[50],count=0;
	printf("\n enter the number:");
	scanf("%d",&n);
	printf("\n enter n numbers:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter number to search");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			count=1;
			break;
		}
	}
	if(count==1)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
	return 0;
}
