#include <stdio.h>
int main()
{
    int n,m, i, flag=0;
    printf("Enter prime number from: ");
    scanf("%d",m);
    printf("\n enter prime number till:");
    scanf("%d",&n);
    printf("Prime numbers between %d and %d are: ",m,n);
    while (m <n)
    {
    for(i = 2; i <= m/2; ++i)
        {
            if(m% i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ",m);
            ++m;
    }
    return 0;
}
