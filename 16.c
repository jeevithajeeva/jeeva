#include <stdio.h>
int main() 
{
	int n,i,j;
	int a[100];
	printf("\n enter the number:");
	scanf("%d",&n);
	printf("\n enter the n numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int count=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j] && i!=j )
			{
				count=count+1;	
			}
			}
	if(count==0)
	{
		printf("\n%d",a[i]);
	}
	}
return 0;
}
