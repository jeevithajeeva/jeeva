#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the two elements:");
  scanf("%d %d",&a,&b);
  printf("\n before swapping");
  printf("\n a=%d and b=%d",a,b);
  a=a^b;
  b=b^a;
  a=a^b;
  printf("\nAfter swapping");
  printf("\n a=%d and b=%d",a,b);
  return 0;
}
