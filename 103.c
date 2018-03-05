#include <stdio.h>
int main() 
{
	char str[50];
	int i;
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(i==0)
		{
			str[i]=toupper(str[i]);
		}
		if(str[i]==' ')
		{
			str[i+1]=toupper(str[i+1]);
		}
	}
	printf("\n%s",str);
	return 0;
}
