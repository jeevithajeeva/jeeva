#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("\n enter the string:");
	scanf("%[^\n]s",&str);
	for(i=0;str[i]!='\0',i++);
	{
		if(str[i]>=65 || str[i]<=90)
		{
			str[i]=tolower(str[i]);
		}
		else
		{
		str[i]=tolower(str[i]);	
		}
	}
}
