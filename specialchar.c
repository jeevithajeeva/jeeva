#include <stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char str[1000];
    printf("\n enter the string");
    scanf("%s",&str);
    for(int i = 0; str[i]!='\0'; i++)
    {
        if(!isalpha(str[i]) && !isdigit(str[i]))
        count++;
    }
    printf("%d",count);
    return 0;
   
}
