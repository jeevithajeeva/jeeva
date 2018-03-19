#include<stdio.h>
int main()
{
 int a[50],j,i,k,n,temp;
 printf("\n enter N value:");
	scanf("%d",&n);
	printf("\n enter K value:");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(j=0;j<k;j++)
	{
			temp=a[n-1];
	for(i=n-2 ;i>=0;i--)
	{
		a[i+1]=a[i];	
	}
	a[0]=temp;
}
	for(i=0;i<n;i++)
	{
	printf("\n%d\t",a[i]);
}
return 0;
}
