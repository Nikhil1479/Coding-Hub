#include <stdio.h>

void segregate(int arr[], int size)
{
    int left = 0, right = size - 1;
    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }
        while (arr[right] == 1 && left < right)
        {
            right--;
        }
        if (left < right)
        {
            arr[left] = 0;
            arr[right] = 1;
            left++;
            right--;
        }
    }
}

int main()
{
    int no_elements;
    printf("Elements in Array: ");

    scanf("%d", &no_elements);
    int arr[no_elements];

    printf("Enter %d Elements in Array: ", no_elements);

    for (int i = 0; i < no_elements; i++)
    {
        scanf("%d", &arr[i]);
    }

    segregate(arr, no_elements);

    printf("Array after segregation: \n");

    for (int i = 0; i < no_elements; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}