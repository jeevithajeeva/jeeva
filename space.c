#include<stdio.h>
#include<string.h>
int main()
{
int i,space,length;
char str[50];
printf("enter the string");
scanf("%s",&str);
length=strlen(str);
for(i=0;i<length;i++)
{
if(str[i]=' ')
{
space=space+1;
}
}
printf("the number of space is:%d",space);
return 0;
}
