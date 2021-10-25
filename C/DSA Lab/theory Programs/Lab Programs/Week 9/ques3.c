#include <stdio.h>

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
    int n;
    scanf("%d", &n);
    printf("Enter the elements of the array : \n");
    int container[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &container[i]);
    }
    printf("The entered elements of the array are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", container[i]);
    }
    printf("\nEnter the element to be searched : ");
    int hunt;
    scanf("%d", &hunt);
    while (BinarySearch(container, 0, n - 1, hunt) != -1)
    {
        hunt *= 3;
    }
    printf("The value of hunt after execution is : %d\n", hunt);
}
