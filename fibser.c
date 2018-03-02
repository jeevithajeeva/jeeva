#include<stdio.h>
int main()
{
	int x=0,y=1,z=1,n,i;
	printf("\n enter the number of terms");
	scanf("%d",&n);
	printf("\n the fibonacci series is");
	for(i=1;i<=n;i++)
	{
	printf("\n%d",z);
	z=x+y;
	x=y;
	y=z;
	}
	return 0;
}
