#include<stdio.h>
int main()
{
	int n,rev=0,rem;
	printf("\n enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("\n%d",rev);
	return 0;
}
