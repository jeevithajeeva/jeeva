#include<stdio.h>
int main()
{
	int givenmin,hours,minutes;
	printf("\n enter the time in minutes");
	scanf("%d",&givenmin);
	hours=givenmin/60;
	minutes=givenmin%60;
	printf("\n %d hours %d minutes",hours,minutes);
	return 0;
}
