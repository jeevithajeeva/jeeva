#include <stdio.h>
#include<string.h>
int main() 
{
	char str1[50],str2[50];
	int i,j,flag=0,u,v,l1,l2;
	printf("\n enter the two strings:");
	scanf("%s %s",str1,str2);
	l1=strlen(str1);
	l2=strlen(str2);
	if(l1==l2)
	{
	for(i=0;i<l1;i++)
	{
		for(j=i+1;j<l2;j++)
		{
			u=str1[i]-str1[j];
			v=str2[i]-str2[j];
			if(u==v)
			{
				flag=1;
			}
			else
			{
				flag=0;
				break;
			}
		}
	}
	}
	else
	{
		printf("\nno");
	}
	if(flag==0)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}

	return 0;
}
