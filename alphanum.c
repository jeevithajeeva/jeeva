#include <stdio.h>
int main()
{
    char str[100],count;
    int i;
    printf("Enter any string : ");
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='0' && str[i]<='9'))
        {
         count=1;
        }
        else 
        {
        	count=2;
        }
    }
    if(count==1)
       {
       	printf("\n yes");
       }
     else
       {
       	printf("\n no");
       }
       return 0;
}
