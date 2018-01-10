#include<stdio.h>
void main()
{
	int i,n;
	printf("\n enter the number");
	scanf("%d",&n);
	for(i=n+1;i<=30;i++)
	{
		if(i%n==0)
		{
			printf("\n %d",i);
		}
	}
}
