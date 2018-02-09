#include <stdio.h>
#include<string.h>
int main() {
	char str[100];
	printf("\n enter the string");
	gets(str);
	int i,count=1;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			count=count+1;
		}
	}
	printf("number of sentence in word is %d",count);
	return 0;
}
