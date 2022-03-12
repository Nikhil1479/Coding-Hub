#include <stdio.h>

struct array
{
    int A[10];
    int B[10];
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

int rotate(struct array *arr, int k)
{
    int temp, i, j;
    for (j = 1; j < k; j++)
    {
        temp = arr->A[0];

        for (i = 0; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->A[arr->length - 1] = temp;
    }
}

void display(struct array arr)
{
    printf("Reversed Array: ");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

int main()
{
    struct array arr;

    printf("Enter the Length of Array: ");
    scanf("%d", &arr.length);

    input(&arr);

    int index;
    printf("\n Enter the Index to Rotate: ");
    scanf("%d", &index);

    rotate(&arr, index);

    display(arr);
    return 0;
}