#include <stdio.h>
int main() 
{
	int n,k,i,len;
	printf("\n enter the two numbers");
	scanf("%d %d",&n,&k);
	if(n>k)
	{
		len=n;
	}
	else
	{
		len=k;
	}
	for(i=len;i>0;i--)
	{
		if(n%i==0 && k%i==0)
		{
			printf("\n%d",i);	
			break;
		}
	}

	return 0;
}
