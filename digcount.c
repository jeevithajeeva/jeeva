#include<stdio.h>
int main()
{
int num,count=0;
printf("\nEnter the number \t");
scanf("%d",&num);
while(num!=0)
{
    num=num/10;
    count++;
}
printf("\nThe number of digit in the number is %d",count);
return 0;
}
