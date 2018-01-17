#include <stdio.h>
int main()
{
    int array[100];
    int size;
    int i, j, temp;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=0; i<size; i++)
    {
    for(j=i+1; j<size; j++)
        {
        if(arr[i] > arr[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("\nElements of array in ascending order: ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", array[i]);
    }
    return 0;
}
