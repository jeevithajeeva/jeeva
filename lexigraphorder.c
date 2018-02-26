#include <stdio.h>
int main() 
{
	char str[50],temp[50];
	int i,j,k;
	printf("\nenter the string:");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		for(j=i+1;str[j]!='\0';j++)
		{
			if(str[i]>str[j])
			{
				temp[k]=str[i];
				str[i]=str[j];
				str[j]=temp[k];
		}	}
	}
	printf("\n%s",str);
	return 0;
}
