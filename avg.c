#include<stdio.h>
int main()
{
	int n,a[100],i,sum=0;
	float avg;
	printf("\n enter the N numbers:");
	scanf("%d",&n);
	printf("\n enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
printf("\n average of numbers is:%f",avg);
return 0;
}
