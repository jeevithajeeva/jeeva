#include <stdio.h>
#include<string.h>
int main()
{
   char c[5]={'k','a','b','l','i'};
   char a[20][20];
   int i,j,k,count=0,n,temp=0,l;
   printf("enter the number of strings");
  scanf("%d",&n);
  printf("\nenter the strings");
   for(i=0;i<n;i++)
   {
   scanf("%s",a[i]);
  }

  for(i=0;i<n;i++)
  {
      l=strlen(a[i]);
      
      for(j=0;j<l;j++)
      {
          for(k=0;k<5;k++)
          {
            if(a[i][j]==c[k])
            {
              count++;
            }
          }
      }
      
      if(count==l)
      {
          temp++;
      }
      count=0;
      l=0;
  }
  printf("\n%d",temp);

   

    return 0;
}


