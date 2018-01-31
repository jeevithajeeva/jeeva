#include<stdio.h>
int main()
{
int a,b,temp;
printf("enter two numbers");
scanf("%d%d",&a,&b);
printf("\nbefore swapping\n");
printf("\na=%d and b=%d",a,b);
printf("\n after swaping");
temp=a;
a=b;
b=temp;
printf("\na=%d and b=%d",a,b);
return 0;
}
