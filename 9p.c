#include<stdio.h>
int main()
{
	int l,r,i,count=0,j,mid,f;
	printf("\n enter the range:");
	scanf("%d%d",&l,&r);
	mid=(l+r)/2;
	if(l==2)
	{
		count=count+1;
	}
	for(i=l;i<=r;i++)
	{
		for(j=2;j<i;j++)
		{
		  if(i%j==0)
		   {
			f=1;
			break;
	  	   }
	  	   else
	  	   {
	  	   	f=0;
	  	   }
	
		}
	if(f==0)
	{
	count=count+1;
	}
	}
	printf("\n%d",count);
	return 0;
}
