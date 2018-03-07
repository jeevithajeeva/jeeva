#include<stdio.h>
int main()
{
	int n,k,i,a[50],count=0;
	printf("\n enter the number:");
	scanf("%d",&n);
	printf("\n enter n numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter number(k)");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			count=count+1;
			
		}
	}
	printf("\n%d",count);
	return 0;
}
