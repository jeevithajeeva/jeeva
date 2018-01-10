#include<stdio.h>
void main()
{
	int size,a[100],largest,i;
	printf("\n enter the size of an array");
	scanf("%d",&size);
	printf("\n enter the elements of an array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	largest=a[0];
	for(i=1;i<size;i++)
	{
		if(largest<a[i])
		{
			largest=a[i];
		}
		printf("\n the largest element of array is %d",largest);
	}
}
