#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i,len;
	printf("\n enter the string:");
	scanf("%s",&str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]>='0' && str[i]<='9' )
		{
			printf("%c",str[i]);
		}
	}
	return 0;
}
