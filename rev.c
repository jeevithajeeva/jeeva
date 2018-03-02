#include<stdio.h>
int main()
{
	int n,org,rem,revn=0;
	printf("\n enter the number:");
	scanf("%d",&n);
	org=n;
	while(n!=0)
	{
		rem=n%10;
		revn=revn*10+rem;
		n=n/10;
	}
	printf("\nreverse is %d",revn);
	return 0;
}
