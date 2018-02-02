#include<stdio.h>
int main()
{ 
int i,j;
char x[20],y[50];
printf("\nenter the first string");
scanf("%s",x);
printf("\nenter the second string");
scanf("%s",y);
if(x[i]>y[j])
{
printf("\nthe greatest string is %s",x);
}
else if(x[i]<y[j])
{
printf("\nthe greatest string is %s",y);
}
else
{
printf("the string is equal");
}
return 0;
}
