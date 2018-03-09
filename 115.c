#include<stdio.h>
int main()
{
	int n,k,i,a[50],temp;
	printf("\n enter the number:");
	scanf("%d",&n);
	printf("\n enter number(k)");
	scanf("%d",&k);
	printf("\n enter n numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]>a[i+1])
		{
	temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
	}
}
for(i=1;i<=n;i++)
{
	if(i==k-1)
	{
		printf("\n%d",a[i]);
	}
}
	return 0;
}
