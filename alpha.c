#include<stdio.h>
#include<conio.h>
void main()
{
char n;
clrscr();
printf("\n enter number or alphabet");
scanf("%s",&n);
if(n>='a'&&n<='z')
{
  printf("\n the character is a alphabet");
}
  else
  {
    printf("\n the character is a number");
  }
  getch();
}
