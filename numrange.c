#include<stdio.h>
int main()
{
	int n,l,h,i,flag=0;
	printf("\n enter the number:");
	scanf("%d",&n);
	printf("\n enter the range:");
	scanf("%d %d",&l,&h);
	for(i=l;i<h;i++)
	{
		if(n==i)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
	return 0;
}
