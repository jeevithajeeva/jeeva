#include<stdio.h>
int main()
{
	int n,rem,sq,sum=0;
	printf("\n enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sq=rem*rem;
		sum=sum+sq;
		n=n/10;
	}
	printf("\n%d",sum);
	return 0;
}
