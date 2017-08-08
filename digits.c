#include <stdio.h>
int main()
{
    long int n;
    int count=0;
    printf("Enter an integer: ");
    scanf("%ld", &n);
    while(n != 0)
    {
         n = n/10;
       ++count;
    }
 printf("Number of digits: %d", count);
 return 0;
}
