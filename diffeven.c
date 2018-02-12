#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter the two numbers");
	scanf("%d%d",&a,&b);
	c=a-b;
	if(c%2==0)
	{
		printf("\n even");
	}
	else
	{
		printf("\n odd");
	}
	return 0;
}
