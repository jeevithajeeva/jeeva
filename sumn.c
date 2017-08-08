#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[10],sum=0;
clrscr();
printf("\n enter the number of number:");
scanf("%d",&n);
printf("\n enter the numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("\n the sum of numbers are:%d",sum);
getch();
}
