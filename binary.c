#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,m,flag=0;
	printf("\n enter the string:");
	scanf("%s",&str);
	m=strlen(str);
	for(i=0;i<m;i++)
	{
		if(str[i]=='0'||str[i]=='1')
		{
			flag=1;
		}
		else
		{
			flag=0;
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
