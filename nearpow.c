#include<stdio.h>
int main()
{
	int num,i,a,b,c;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		a=pow(2,i);
		if(a>num)
		{
			b=i;
			break;
		}
	}
	c=pow(2,b);
	printf("\n%d",c);
	
	return 0;
}
