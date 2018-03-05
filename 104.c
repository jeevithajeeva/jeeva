#include<stdio.h>
int main()
{
	int n,k,i;
	long int r=1;
	printf("\n enter the two numbers");
	scanf("%d %d",&n,&k);
	for(i=1;i<=k;i++)
	{
		r=r*n;
	}
	printf("\n%ld",r);
	return 0;
}
