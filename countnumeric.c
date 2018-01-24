#include<stdio.h>
#include<string.h>
int main() {
	char str[100];
	int i,number=0;
	printf("enter the string:");
	scanf("%[^\n]s",&str);
	for(i=0;str[i]!='\0';i++)
    {
    	if(str[i]>='1'&&str[i]<='9')
	{
	number=number+1;	
	}
        
    }printf("there are %d numeric values \n",number);
	return (0);
}
