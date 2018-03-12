#include <stdio.h>
#include<string.h>
int main(void) {
	char str[10];
	int i,j,len,temp;
	printf("\n enter the string");
	scanf("%s",str);
	len=strlen(str);
	for(i=len-1,j=0;i>len/2,j<len/2;j++,i--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	printf("\n%s",str);
	return 0;
}
