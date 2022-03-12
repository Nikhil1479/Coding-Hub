#include <stdio.h>

struct array
{
    int A[20];
    int size;
    int length;
};

void insert_sorted(struct array *arr, int to_insert, int size)
{
    int i = arr->length - 1;
    while (i >= 0 && arr->A[i] > to_insert)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = to_insert;
    arr->length++;
}
void Display(struct array arr)
{
    for (int i = 0; i < arr.length - 1; i++)
    {
        printf("%d ", arr.A[i]);
    }
}
int main()
{
    struct array arr;
    int to_insert;

    printf("How many Elements You want to Enter: ");
    scanf("%d", &arr.length);

    printf("Enter %d Elements in Array: ", arr.length);
    for (int i = 0; i < arr.length; i++)
    {
        scanf("%d", &arr.A[i]);
    }

    printf("Enter the Element you want to insert: ");
    scanf("%d", &to_insert);

    insert_sorted(&arr, to_insert, arr.length);
    Display(arr);
    return 0;
}