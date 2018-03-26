#include <stdio.h>
int main() 
{
    int a[10],k,i=0,p,n,j=0,max=0;
    printf("\n enter the value of n and k:");
	scanf("%d %d",&n,&k);
	printf("\n enter n values:");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	
    while(j<k)
	{
	    scanf("%d",&p);
	    a[n]=p;
	    n++;
	   for(i=0;i<n;i++)
	    {
	        if(a[i]>=max)
	        {
	            max=a[i];
	        }
	    }
	    printf("\n%d ",max); 
	j++; 
	}
	return 0;
}
