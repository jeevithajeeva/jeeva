#include<stdio.h>
int main()
{
	int a,b,c,i,count=0;
	printf("\n enter the two numbers:");
	scanf("%d%d",&a,&b);
	c=a*b;
	for(i=1;i<c/2;i++)
	{
		if(i*i==c)
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
