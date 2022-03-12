#include <stdio.h>

struct array
{
    int A[10];
    int B[10];
    int size;
    int length;
};

int reverse(struct array *arr)
{
    int i, j;
    for (i = 0, j = arr->length; i < j; i++, j--)
    {
        int temp;
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
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

int main()
{
    struct array arr;

    printf("Enter the Length of Array: ");
    scanf("%d", &arr.length);

    input(&arr);

    for (int i = 0; i < arr.length; i++)
    {
        printf("%d", reverse(&arr));
    }
    return 0;
}