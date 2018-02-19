#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50];
	int pal=0,length,i;
	printf("\n enter the string");
	scanf("%s",&str1);
	length=strlen(str1);
	for(i=0;i<length;i++)
	{
	if(str1[i]!=str1[length-i-1])
	{
		pal=1;
		break;
	}
	}
	if(pal==1)
	{
		printf("\n no");
	}
	else
	{
		printf("\n yes");
	}
	return 0;
}
