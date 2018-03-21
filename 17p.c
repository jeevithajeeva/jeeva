#include <stdio.h>

int main() 
{
	int l,r,len,i;
	printf("\n enter the two numbers:");
	scanf("%d %d",&l,&r);
	if(l>r)
	{
		len=l;
	}
	else
	{
		len=r;
	}
	for(i=2;i<=len;i++)
	{
		if((i%l==0) && (i%r==0))
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
