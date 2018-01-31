#include<stdio.h>
int main()
{
	int a=0,b=1,c,n,i;
	printf("\n enter the number of terms");
	scanf("%d",&n);
	printf("\n the fibonacci series is");
	for(i=0;i<n;i++)
	{
	printf("\n%d",a);
	c=a+b;
	a=b;
	b=c;
	}
	return 0;
}
