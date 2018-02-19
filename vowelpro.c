#include<stdio.h>
#include<string.h>
int main()
{
	int i,flag=0,len;
	char str[50];
	printf("\n enter the string:");
	scanf("%s",&str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='i'||str[i]=='o')
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
	return 0;
}
