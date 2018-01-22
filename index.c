#include<stdio.h>
int main()
{
	int size,i,a[50];
	printf("\n enter the size of an array");
	scanf("%d",&size);
	printf("\n enter the elements of array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("\n the element in a[%d] is %d",i,a[i]);
	}
	return 0;
}
