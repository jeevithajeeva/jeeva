#include <stdio.h>
#include<string.h>
int main() 
{
	char a[100],b[100];
	int n,m,i;
	printf("\nEnter the sentence (with space) : ");
	scanf("%[^\n]s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			m=i;
			break;
		}
	}
	for(i=0;i<=m;i++)
	{
		b[i]=a[i];
	}
	n=m+1;
	for(i=m+1;a[i]!='\0';i++)
	{
		if(a[i]!=' ')
		{
			b[n]=a[i];
			n++;
		}
	}
  printf("\nAfter removing extra spaces : ");
	for(i=0;b[i]!='\0';i++)
	{
		printf("%c",b[i]);
	}
	return 0;
}
