#include <stdio.h>
#include <stdlib.h>
int linearsearch(int arr[], int size, int x)
{
    int rec;
    size--;
    if (size >= 0)
    {
        if (arr[size] == x)
            return size;
        else
            rec = linearsearch(arr, size, x);
    }
    else
        return -1;

    return rec;
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

    int index = linearsearch(arr, n, s);

    if (index != -1)
        printf("Element was found at array index : %d \n", index);
    else
        printf("Element was not found at array index ");

    return 0;
}