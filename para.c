#include <stdio.h>
void main()
{
char str[200];
int line=0,i;
printf("Enter the paragraph\n");
scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='.')
line=line+1;
}
printf("Number of lines in given paragraph are:%d\n",line+1);
}
