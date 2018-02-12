#include<stdio.h>
int main()
{
	int num,i;
	printf("\n enter the number:");
	scanf("%d",&num);
	if(num%7==0)
	{
		printf("\n %d is a multiple of 7",num);
	}
	else
	{
		printf("\n %d is not a multiple of 7",num);
	}
}
