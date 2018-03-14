#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i,temp,n;
	printf("\n enter the string:");
	scanf("%s",str);
	n=strlen(str);
	if(n%2==0)
	{
	for(i=0;i<n;i=i+2)
	{
	temp=str[i];
	str[i]=str[i+1];
	str[i+1]=temp;
	}
	printf("\n%s",str);
	}
	else
	{
	for(i=0;i<n-1;i=i+2)
	{
	temp=str[i];
	str[i]=str[i+1];
	str[i+1]=temp;
	}
	printf("\n %s",str);
	}
	return 0;
}
