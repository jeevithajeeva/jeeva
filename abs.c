#include<stdio.h>
#include<math.h>
int main()
{
	int h1,m1,h2,m2,h,m;
	printf("\n enter the first time in hrs, min");
	scanf("%d",&h1);
	scanf("%d",&m1);
	printf("\n enter the second time in hrs ,min");
	scanf("%d",&h2);
	scanf("%d",&m2);
	h=abs(h1-h2);
	m=abs(m1-m2);
	printf("\n %d %d",h,m);
	return 0;
	
}
