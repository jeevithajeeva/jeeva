#include<stdio.h>
#include<math.h>
int main()
{
int low,high,b,c=0,i;
printf("\n enter the range to find armstrong b/w range");
scanf("%d %d",&low,&high);
printf( "\n armstrong numbers between %d and %d are:");
for(i=low+1;i<high;++i)
{
b=i%10;
c=c+b*b*b;
i=i/10;
if(c==i)
{
printf("%d",i);
}
}
return 0;
}
