#include<stdio.h>
#include<string.h>
int main()
{
	int count=0,i,length;
	char str[20];
	printf("\n enter the string");
	scanf("%s",&str);
	length=strlen(str);
	for(i=0;i<length;i++)
	{
		if(str[i]!='\n')
		{
	count=count+1;	
		}
	}
	printf("the count is %d",count);
	return 0;
}
