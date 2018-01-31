#include<stdio.h>
#include<string.h>
int main()
{ 
int i,j,a,b;
char x[20],y[50];
printf("enter the first string");
scanf("%s",x);
printf("enter the second string");
scanf("%s",y);
a=strlen(x);
b=strlen(y);
if(x[i]>y[j])
{
printf("the greatest string is %s\n",x);
}
else if(x[i]<y[j])
{
printf("the greatest string is %s\n",y);
}
else
{
printf("the string is equal");
}
return 0;
}
