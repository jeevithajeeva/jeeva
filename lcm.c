#include<stdio.h>
int main()
{
	int a,b,x,y;
	int lcm,gcd,rem;
	printf("\n enter the two numbers:");
	scanf("%d%d",&a,&b);
	x=a;
	y=b;
	do
	{
		rem=a%b;
		if(rem==0)
		{
			break;
		}
		a=b;
		b=rem;
	}while(rem!=0);
	gcd=b;
	lcm=(x*y)/gcd;
	printf("\n lcm is:%d",lcm);
	return 0;
}
