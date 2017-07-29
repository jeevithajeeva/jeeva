#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("\nenter the number:");
scanf("%d",&n);
if(n==0)
printf("\n thenumber is zero");
else if(n>0)
printf("\n the number is positive");
else
printf("\n the number is negative");
getch();
}
