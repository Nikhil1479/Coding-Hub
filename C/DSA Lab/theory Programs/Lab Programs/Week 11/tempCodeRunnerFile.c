#include <stdio.h>

void printRepeating(int arr[], int size)
{
    int i, j;
    printf(" Repeating elements are ");
    for (i = 0; i < size - 1; i++)
        for (j = i + 1; j < size; j++)
            if (arr[i] == arr[j])
                printf(" %d ", arr[i]);
}

int main()
{
    int arr[5];
    printf("Enter 5 Elements in Array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    int arr_size = sizeof(arr) / sizeof(arr[0]);
    printRepeating(arr, arr_size);
    getchar();
    return 0;
}