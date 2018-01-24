#include<stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int count = 0, i;
    printf("enter the string\n");
    scanf("%[^\n]s", str);
    for (i = 0;str[i] != '\0';i++)
    {
    if (str[i] == ' ')
            count=count+1;    
            }

    printf("number of words in given string are: %d\n", count + 1);
    return 0;

}
