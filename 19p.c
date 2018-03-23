#include <stdio.h>

int main() 
{
	int n,i,j,flag=1;
	printf("\n enter the number:");
	scanf("%d",&n);
	for(j=2;j<=n;j++)
	{
		if(n%j==0)
		{
			flag=1;
			for(i=2;i<=j/2;i++)
			{
			if(j%i==0)
			{
			flag=0;
			break;
			}
			}
		
	
	if(flag==1)
	{
		printf("\n%d ",j);
	}
		}
	}
	return 0;
}
