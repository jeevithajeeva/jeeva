#include<stdio.h>
int main()
{
	int num[10],i,max=0;
	printf("\n enter the 10 numbers");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<9;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
		}
	}
	printf("\n maximum of 10 numbers is %d",max);
	return 0;
}
