#include<stdio.h>
#include<string.h>
int main()
{
char s[100],i=0,length;
printf("Enter the string \n");
scanf("%s",s);
length=strlen(s);
for(i=0;i<length;i++)
if(s[i] >= '0' && s[i] <='9')
{
	printf("yes  it is numeric\n");
}
	
	return 0;
	
	
}
