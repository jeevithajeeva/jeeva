#include <stdio.h>
int main()
{
    int n, revenum = 0, remainder, orignum;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originum= n;
    while( n!=0 )
    {
        remainder=n%10;
        revenum=revenum*10 + remainder;
        n=n/10;
    }
    if (originum==revenum)
        printf("%d is a palindrome.",originum);
    else
        printf("%d is not a palindrome.",originum);
        return 0;
}
