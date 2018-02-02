#include<stdio.h>
int main()
{
	int n,i;
	printf("\n enter the number");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		if(i==n)
		{
			printf("\n yes");
			break;
		}
	}
	if(i!=n)
	printf("\n no");
	return 0;
}
