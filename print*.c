#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int len;
	printf("\n enter the string");
	scanf("%s",&str);
	len=strlen(str);
	if(len%2==0)
	{
		str[len/2]='*';
		str[len/2-1]='*';
	}
	else
	{
		str[len/2]='*';
	}
	printf("\n%s",str);
	return 0;
}
