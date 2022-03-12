#include <stdio.h>

void segregateEvenOdd(int arr[], int size)
{

    int left = 0, right = size - 1;
    while (left < right)
    {
        while (arr[left] % 2 == 0 && left < right)
        {
            left++;
        }
        while (arr[right] % 2 == 1 && left < right)
        {
            right--;
        }
        if (left < right)
        {
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int arr[5];

    printf("Enter 5 Elements in Array: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array before segregation : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n");
    segregateEvenOdd(arr, 5);

    printf("Array after segregation : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}