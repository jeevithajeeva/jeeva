#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i;
	printf("\n enter the  strings:");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
		if(i==0)
		{
			str[i]=toupper(str[i]);
		}
		if(str[i]==' ' )
		{
			str[i]=toupper(str[i+1]);
		}
		
	}
	printf("\n%s",str);
	return 0;
}
