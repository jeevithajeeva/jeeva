#include<stdio.h>
int main()
{
	int n,i,flag=0;
	printf("\n enter the number:");
	scanf("%d",&n);
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\n yes,it is composite");
	}
	else
	{
		printf("\n no,it is not composite");
	}
	return 0;
}
