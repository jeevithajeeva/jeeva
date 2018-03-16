#include<stdio.h>
int main()
{
	char str[50];
	printf("\n enter the day(mon,tue,wed,thur,fri,sat,sun):");
	scanf("%s",str);
	if(str[0]=='s'||str[0]=='S')
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
	return 0;
}
