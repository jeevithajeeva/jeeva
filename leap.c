#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("\n enter the year:");
scanf("%d",&n);
if(n%4==0)
{
printf("\n %d is leap year",n);
}
else
{
printf("\n%d is not leap year",n);
}
getch();
}
