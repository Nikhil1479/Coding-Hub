#include <stdio.h>

struct array
{
    int A[10];
    int B[10];
    int size;
    int length;
};

void reverse(struct array *arr)
{
    int i, j;
    for (i = arr->length - 1, j = 0; i >= 0, j < arr->length; i--, j++)
    {
        arr->B[j] = arr->A[i];
    }

    for (i = 0; i < arr->length; i++)
    {
        arr->A[i] = arr->B[i];
    }
}

void input(struct array *arr)
{
    printf("Enter %d elements: ", arr->length);

    for (int i = 0; i < arr->length; i++)
    {
        scanf("%d", &arr->A[i]);
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

    reverse(&arr);
    display(arr);
    return 0;
}