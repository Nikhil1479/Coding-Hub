#include <stdio.h>
#include <stdlib.h>
struct array
{
    int *A;
    int size;
    int length;
};

void input(struct array *arr)
{
    printf("Enter %d elements: ", arr->length);
    for (int i = 0; i < arr->length; i++)
    {
        scanf("%d", &arr->A[i]);
    }
}

void insert(struct array *arr, int index, int value)
{
    for (int i = arr->length; i > index; i--)
    {
        arr->A[i] = arr->A[i - 1];
    }
    arr->A[index] = value;
    arr->length++;

    printf("Printing Elements...\n");
    for (int i = 0; i < arr->length; i++)
    {
        printf("%d ", arr->A[i]);
    }
}

int main()
{
    struct array arr;

    printf("Enter the Size of Array: ");
    scanf("%d", &arr.size);
    printf("Enter the Length of Array: ");
    scanf("%d", &arr.length);

    if (arr.length > arr.size)
    {
        printf("Memory Allocation Error!");
    }
    else
    {
        arr.A = (int *)malloc(arr.size * sizeof(int));

        input(&arr);

        int choice = 0;
        printf("Do you want to Insert an Element [1/0]: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            int index, value;

            printf("Enter the Index: ");
            scanf("%d", &index);

            printf("Value to be Inserted at Index %d: ", index);
            scanf("%d", &value);

            insert(&arr, index, value);
        }
        return 0;
    }
}