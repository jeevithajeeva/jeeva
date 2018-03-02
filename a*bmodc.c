#include<stdio.h>
int main()
{
	int a,b,c,result;
	printf("\n enter the  3 numbers:");
	scanf("%d %d %d",&a,&b,&c);
	result=a*b%c;
	printf("\n %d",result);
	return 0;
}
