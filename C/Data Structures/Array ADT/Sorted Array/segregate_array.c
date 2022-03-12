#include <stdio.h>
#include <stdlib.h>

struct array
{
    int *A;
    int size;
    int length;
};

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void segregate(struct array *arr)
{
    int i = 0, j = arr->length - 1;

    while (i < j)
    {
        while (arr->A[i] < 0)
        {
            i++;
        }

        while (arr->A[j] >= 0)
        {
            j--;
        }

        if (i < j)
        {
            swap(&arr->A[i], &arr->A[j]);
        }
    }
}

void Display(struct array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d\t", arr.A[i]);
    }
}

int main()
{
    struct array arr;
    int i, j;

    printf("Enter the Size of Array: ");
    scanf("%d", &arr.size);

    printf("Enter the Length of Array: ");
    scanf("%d", &arr.length);

    arr.A = (int *)malloc(arr.size * sizeof(int));

    printf("Enter %d elements in Array: ", arr.length);

    for (i = 0; i < arr.length; i++)
    {
        scanf("%d", &arr.A[i]);
    }

    printf("\nOriginal Array: ");
    for (j = 0; j < arr.length; j++)
    {
        printf("%d\t", arr.A[j]);
    }

    segregate(&arr);
    printf("\n\nSegregated Array: ");
    Display(arr);
    return 0;
}