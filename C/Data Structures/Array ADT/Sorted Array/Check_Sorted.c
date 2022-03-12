#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int size;
    printf("Enter the size of Array: ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));

    printf("Enter %d Elements: ", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int j, sorted;
    for (j = 0; j < size - 1; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            sorted = 0;
        }
        else
        {
            sorted = 1;
        }
    }

    if (sorted == 1)
    {
        printf("\nArray is Sorted");
    }
    else
    {
        printf("\nArray is Not Sorted");
    }
    return 0;
}