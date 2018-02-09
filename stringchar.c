#include<stdio.h>
int main()
{
char str[50];
int n,i;
printf("Enter the string:");
scanf("%s",&str);
printf("Enter the limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%c",str[i]);
}
return 0;
}
