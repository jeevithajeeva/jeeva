#include<stdio.h>
void main()
{
	int size,a[100],smallest,i;
	printf("\n enter the size of an array");
	scanf("%d",&size);
	printf("\n enter the elements of an array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	smallest=a[0];
	for(i=1;i<size;i++)
	{
		if(smallest>a[i])
		{
			smallest=a[i];
		}
		printf("\n the largest element of array is %d",smallest);
	}
}
