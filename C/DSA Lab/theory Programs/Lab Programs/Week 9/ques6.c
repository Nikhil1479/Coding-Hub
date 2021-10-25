#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int array[], int start_index, int end_index, int element)
{
    if (end_index >= start_index)
    {
        int middle = start_index + (end_index - start_index) / 2;
        if (array[middle] == element)
            return middle;
        if (array[middle] > element)
            return BinarySearch(array, start_index, middle - 1, element);
        return BinarySearch(array, middle + 1, end_index, element);
    }
    return -1;
}

int main(void)
{
    printf("Enter the number of elements you want to enter : ");
    int n, *arr;
    scanf("%d", &n);
    printf("Enter the elements of the array : \n");
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The entered elements of the array are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\nEnter the element to be searched : ");
    int s;
    scanf("%d", &s);

    int index = BinarySearch(arr, 0, n - 1, s);

    if (index != -1)
        printf("Element was found at array index : %d \n", index);
    else
        printf("Element was not found at array index ");

    return 0;
}
