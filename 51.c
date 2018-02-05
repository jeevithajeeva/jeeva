#include<stdio.h>
void main()
{
int n,a,b,c=0;
printf("\n Enter the number");
scanf("%d",&n);
a=n;
while(a!=0)
{
b=a%10;
c=(c*10)+b;
a=a/10;
}
while(c!=0)
{
b=c%10;
printf(" \t%d",b);
c=c/10;
}
}
