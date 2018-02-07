#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter the two elements:");
  scanf("%d %d",&x,&y);
  printf("\n before swapping");
  printf("\n x=%d and y=%d",x,y);
  x=x^y;
  y=y^x;
  x=x^y;
  printf("\nAfter swapping");
  printf("\n x=%d and y=%d",x,y);
  return 0;
}
