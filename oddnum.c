#include <stdio.h>
int main()
{
    int i,m,n;
    printf("print odd numbers from:");
    scanf("%d",&m);
    printf("\nPrint odd numbers till: ");
    scanf("%d", &n);
    printf("\nAll odd numbers from %d to %d are:\n",m,n);
    for(i=m; i<=n; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
