#include<stdio.h>
int main()
{
	int n,num[100],i,low,high;
	printf("\n enter the N value");
	scanf("%d",&n);
	printf("\n enter the N numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	low=num[0];
	high=num[0];
	for(i=1;i<n;i++)
	{
		if(low>num[i])
		{
			low=num[i];

		}
	}
	for(i=1;i<n;i++)
	{
		if(high<num[i])
		{
			high=num[i];
		}
	}
	printf("\n lowest is %d",low);
		printf("\n greatest is %d",high);
	return 0;
	
}
