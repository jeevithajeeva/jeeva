#include<stdio.h>
int main()
{
	char str[100];
	int n,i;
	printf("\n enter the string");
	scanf("%s",&str);
	printf("\n enter no of times to display string");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n%s",str);
	}
	return 0;
}
