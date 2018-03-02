#include<stdio.h>
int main()
{
	int n,num[100],i;
	printf("\n enter the number:");
	scanf("%d",&n);
	printf("\n enter the natural numbers with one change");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(i!=num[i])
		{
			printf("\n %d",i);
			break;
		}
	}
	return 0;
}
