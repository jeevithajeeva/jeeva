#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int len,i;
	printf("\n enter the string:");
	scanf("%s",&str);
	len=strlen(str);
	for(i=len-1;i>=0;i--)
	{
		if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u')
		{
			printf("%c",str[i]);
		}
	}
	return 0;
}
