#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[10];
    int size;
    int elements;
};
int check = 0;

void input(struct Array *input_arr)
{
    printf("How many Elements do you want to Input: ");
    scanf("%d", &input_arr->elements);
    if (input_arr->elements <= sizeof(input_arr->A) / sizeof(int))
    {
        check = 1;
        for (int i = 0; i < input_arr->elements; i++)
        {
            scanf("%d", &input_arr->A[i]);
        }
        printf("Original Array: ");
        for (int i = 0; i < input_arr->elements; i++)
        {
            printf("%d ", input_arr->A[i]);
        }
    }
    else
    {
        printf("Index Error");
    }
}

void display(struct Array *display_arr)
{
    printf("\nPrinting Array: ");
    for (int i = 0; i < display_arr->elements; i++)
    {
        printf("%d ", display_arr->A[i]);
    }
}

int delete (struct Array *arr, int index)
{
    int x, i;

    x = arr->A[index];
    if (index >= 0 && index <= arr->elements)
    {
        for (i = index; i < arr->elements - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->elements--;
    }
    else
    {
        printf("\nInvalid Index");
    }
    printf("\nDeleted Element: %d", arr->A[index]);
    return x;
}
int main()
{
    int index;
    struct Array arr;

    arr.elements = 0;
    input(&arr);
    printf("\nEnter the Index to Deleted: ");
    scanf("%d", &index);
    delete (&arr, index);

    if (check == 1)
    {
        display(&arr);
    }

    return 0;
}