#include <stdio.h>

int count(int arr[], int size)
{
    int i, counter = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            counter += 1;
        }
    }
    printf("Number of Positive Integers in Array is: %d\n", counter);
}

int main()
{
    int arr[20];
    int size;
    printf("Enter the Size of Array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        // printf("\n");
    }

    count(arr, size);
    return 0;
}