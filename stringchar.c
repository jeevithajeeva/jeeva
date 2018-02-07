#include<stdio.h>
int main()
{
char str[50];
int num,i;
printf("Enter the string:");
scanf("%s",&str);
printf("Enter the limit:");
scanf("%d",&num);
for(i=0;i<num;i++)
{
printf("%c",str[i]);
}
return 0;
}
