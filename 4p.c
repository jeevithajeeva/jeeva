#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("\n enter the string:");
	scanf("%s",&str);
	strcat(str,".");
	printf("\n%s",str);
	return 0;
}
