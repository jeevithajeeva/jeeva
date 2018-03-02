#include<stdio.h>
int main()
{
	int n,product=1,rem;
	printf("\n enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		product=product*rem;
		n=n/10;
	}
	printf("\n%d",product);
	return 0;
}
