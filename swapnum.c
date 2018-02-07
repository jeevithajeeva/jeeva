#include<stdio.h>
int main()
{
int x,y,temp;
printf("enter two numbers");
scanf("%d%d",&x,&y);
printf("\nbefore swapping\n");
printf("\nx=%d and y=%d",x,y);
printf("\n after swaping");
temp=x;
x=y;
y=temp;
printf("\nx=%d and y=%d",x,y);
return 0;
}
