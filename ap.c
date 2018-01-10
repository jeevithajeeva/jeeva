#include<stdio.h>
int main()
{
	int first,diff,ap,terms,sum=0,i;
	printf("\n enter the no of terms");
	scanf("%d",&terms);
	printf("\n enter the first value and difference");
	scanf("%d%d",&first,&diff);
	ap=first;
	for(i=0;i<terms;i++)
	{
		printf("%d",ap);
		sum=sum+ap;
		ap=ap+diff;
	}
	printf("\n%d %d",terms,sum);
	return 0;
}
