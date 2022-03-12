#include <stdio.h>
#include <stdlib.h>

struct array
{
    int A[10];
    int size;
    int length;
};

struct array *merge(struct array *arr1, struct array *arr2)
{
    int i = 0, j = 0, k = 0;
    struct array *arr3;
    arr3 = (struct array *)malloc(sizeof(struct array));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else
        {
            arr3->A[k++] = arr2->A[j++];
        }
    }
    for (; i < arr1->length; i++)
    {
        arr3->A[k] = arr1->A[i];
    }
    for (; j < arr2->length; j++)
    {
        arr3->A[k] = arr2->A[j];
    }
    arr3->length = arr1->length + arr2->length;
    return arr3;
}

void Display(struct array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}
int main()
{
    struct array arr1 = {{3, 8, 16, 20, 25}, 10, 5};
    struct array arr2 = {{4, 10, 12, 22, 23}, 10, 5};
    struct array *arr3;

    arr3 = merge(&arr1, &arr2);

    Display(*arr3);
    return 0;
}