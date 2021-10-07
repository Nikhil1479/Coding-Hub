#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

void Insert(struct Array *arr, int index, int x)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
    else
    {
        printf("\nIndex Error!!\n");
    }
}
int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    int index, x;

    printf("\nEnter the Index of Array: ");
    scanf("%d", &index);
    printf("\nEnter The Element: ");
    scanf("%d", &x);

    Insert(&arr, index, x);
    Display(arr);

    return 0;
}