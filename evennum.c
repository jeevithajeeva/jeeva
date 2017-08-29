#include <stdio.h>
int main()
{
    int i,m,n;
    printf("print even numbers from:");
    scanf("%d",&m);
    printf("\nPrint even numbers till: ");
    scanf("%d", &n);
    printf("\nAll even numbers from %d to %d are:\n",m,n);
    for(i=m; i<=n; i++)
    {
        if(i%2==0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
