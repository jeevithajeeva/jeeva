#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("\n enter the number:");
scanf("%d",&n);
if(n>0)
{
printf("\n the number is positive");
}
else if(n<0)
{
printf("\n the number is negative");
}
else
{
printf("\n the number is zero");
}
getch();
}
