#include <stdio.h>
int main() 
{
	char s[50];
	int i,n;
	printf("\n enter the string:");
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		
		if(s[i]=='x')
		{
		s[i]='a';
		}
		else if(s[i]=='y')
		{
		s[i]='b';
		}
		else if(s[i]=='z')
		{
		s[i]='c';
		}
		else
		{
			s[i]=s[i]+3;
		}
	}
	printf("\n%s",s);
	return 0;
}
