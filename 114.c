#include<stdio.h>
int main()
{
	int n,k,i,a[50],count=1;
	printf("\n enter the number:");
	scanf("%d",&n);
	printf("\n enter number(k)");
	scanf("%d",&k);
	printf("\n enter n numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
	if(a[i]%2==1)
		{
			if(count==k)
			{
				printf("\n%d",a[i]);
			}
		count=count+1;
		}	
	}

	return 0;
}
