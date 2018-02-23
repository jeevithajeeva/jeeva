#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter the two numbers:");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		c=a-b;
		printf("\n%d",c);
	}
	else
	{
		c=b-a;
		printf("\n%d",c);
	}
	return 0;
}
