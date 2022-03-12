#include <stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}

int binary_search(struct Array arr, int key)
{
    int low = 0;
    int high = arr.length;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key > arr.A[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int element_search;
    struct Array arr1 = {{27, 30, 34, 45, 56, 59, 61}, 10, 7}; // Array should be in sorted order

    printf("Enter the element you want to search: ");
    scanf("%d", &element_search);

    printf("Searched Element is at index: %d", binary_search(arr1, element_search));

    Display(arr1);

    return 0;
}