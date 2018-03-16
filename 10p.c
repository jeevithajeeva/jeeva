#include <stdio.h>
#include<string.h>
int main() 
{
	char str1[50],str2[50];
	int i,j,len1,len2,count=0;
	printf("\n enter the two strings:");
	scanf("%s %s",str1,str2);
	len1=strlen(str1);
	len2=strlen(str2);
	if(len1==len2)
	{
		for(i=0;i<len1;i++)
		{
			if(str1[i]==str2[i])
			{
				count=count+1;
			}
			else
			{
				count=count+2;
			}
			
		}
		if(count==2)
		{
			printf("\nyes");
		}
		else
		{
			printf("\nno");
		}
	}
	else
	{
		printf("\nno");
	}
	return 0;
}
