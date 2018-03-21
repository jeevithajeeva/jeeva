#include <stdio.h>
 
int main() 
{
	char s[50],c;
	int i,j,count=1,max=1;
	printf("\n enter the string:");
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		for(j=i+1;s[j]!='\0';j++)
		if(s[i]==s[j])
		{
			count=count+1;
			if(count>max)
			{
				max=count;
				c=s[i];
			}
		}
 
	}
	printf("\n%c",c);
	return 0;
}
