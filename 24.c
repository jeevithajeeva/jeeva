#include<stdio.h>
int  main()
{
int a[200],size,i,j,k,b;
printf("\n enter the size");
scanf("%d",&size);
printf("\n enter the elements");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<size;j++)
{
for(k=0;k<size;k++)
{
b=a[j];
a[j]=a[k];
a[k]=b;
}
}
printf("%d",b);
return 0;
}
