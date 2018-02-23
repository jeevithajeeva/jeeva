#include <stdio.h>
int main() 
{
	char str[20];
	int i,len;
	printf("\nenter the string:\n");
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(i%2==0)
		{
			printf("%c",str[i]);
		}
		
	}
	printf(" ");
	for(i=0;i<len;i++)
	{
		if(i%2==1)
		{
			printf("%c",str[i]);
		}
		
	}
	
	return 0;
}
