#include <stdio.h>

int main() 
{
int x,y,rem,gcd;
printf("\n enter the two numbers:");
scanf("%d%d",&x,&y);
do
{
rem=x%y;
if(rem==0)
{
break;
}
x=y;
y=rem;
}while(rem!=0);
gcd=y;
printf("\n the gcd of the given number is: %d",gcd);
return 0;
}
