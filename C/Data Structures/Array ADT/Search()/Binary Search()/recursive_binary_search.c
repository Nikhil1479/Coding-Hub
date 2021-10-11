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

int binary_search(int a[], int low, int high, int key)
{
    int mid;
    if (low <= high)
    {
        mid = (low + high) / 2;
        if (key == a[mid])
        {
            return mid;
        }
        else if (key > a[mid])
        {
            return binary_search(a, mid + 1, high, key);
        }
        else
        {
            return binary_search(a, low, mid - 1, key);
        }
    }
    return -1;
}

int main()
{
    int key;
    struct Array arr1 = {{2, 3, 4, 5, 6, 7, 8, 9}, 10, 8}; // Array should be in sorted order

    printf("Enter the element you want to search: ");
    scanf("%d", &key);

    printf("Searched Element is at index: %d", binary_search(arr1.A, 0, arr1.length, key));

    Display(arr1);

    return 0;
}